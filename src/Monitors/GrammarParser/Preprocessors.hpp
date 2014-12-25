#ifndef PREPROCESSORS_HPP_INCLUDED_
#define PREPROCESSORS_HPP_INCLUDED_
#include <DUNE/DUNE.hpp>
#include "IPreprocessor.hpp"
#include "Quantizer.hpp"
#include "StringCast.hpp"
class DepthPreprocessor : public IPreprocessor
{
	public:
	DepthPreprocessor() : ready(false)
	{
			symbol="";
			messageId=DUNE::IMC::Factory::getIdFromAbbrev("Depth");

	}
	virtual std::string getSymbol() {ready=false;return symbol;};
    virtual bool symbolReady() {return ready;};
    virtual std::vector<std::string> getBindMessages()
    {
			std::vector<std::string> res;
			res.push_back("Depth");
			return res;
	}

    virtual bool preprocess(const DUNE::IMC::Message* msg)
    {
		if(msg&&msg->getId()==messageId)
		{

			const DUNE::IMC::Depth* d=(const DUNE::IMC::Depth*)msg;
			float dx=d->value-last;
			float dt=msg->getTimeStamp()-last_timestamp;
			last=d->value;
			if(last_timestamp>0)
			{
			    ready=true;
			    std::cout<<"Quantize:"<<dx/dt<<std::endl;
			    symbol=quantizer.quantize(dx/dt);

			}
			last_timestamp=msg->getTimeStamp();

		}
		return true;
	}
	virtual std::string getRaw()
	{
		return toString(last);
	}

    virtual bool load(std::ifstream &ifs)
    {
			return quantizer.load(ifs);
	};

    bool ready;
    std::string symbol;
    uint32_t messageId;
    float last;
    double last_timestamp;
	Quantizer quantizer;

};



class PitchPreprocessor : public IPreprocessor
{
	public:
	PitchPreprocessor() : ready(false)
	{
			symbol="";
			messageId=DUNE::IMC::Factory::getIdFromAbbrev("EulerAngles");

	}
	virtual std::string getSymbol() {ready=false;return symbol;};
    virtual bool symbolReady() {return ready;};
    virtual std::vector<std::string> getBindMessages()
    {
			std::vector<std::string> res;
			res.push_back("EulerAngles");
			return res;
	}

    virtual bool preprocess(const DUNE::IMC::Message* msg)
    {
		if(msg&&msg->getId()==messageId)
		{

			const DUNE::IMC::EulerAngles* d=(const DUNE::IMC::EulerAngles*)msg;
			last=-d->theta;
			ready=true;
			std::cout<<"Quantize:"<<d->theta<<std::endl;
			symbol=quantizer.quantize(last);
			last_timestamp=msg->getTimeStamp();

		}
		return true;
	}
	virtual std::string getRaw()
	{
		return toString(last);
	}

    virtual bool load(std::ifstream &ifs)
    {
			return quantizer.load(ifs);
	};

    bool ready;
    std::string symbol;
    uint32_t messageId;
    float last;
    double last_timestamp;
	Quantizer quantizer;

};


class ConcatPreprocessor
{

	public:

	 bool prerocess(const DUNE::IMC::Message* msg)
	 {
		 bool flag=true;
			for(unsigned i=0;i<concat.size();i++)
			{
				if(concat[i]->preprocess(msg)==false)
					flag=false;

			}
		return flag;
	}
	std::string getSymbol() {
		std::string symbol;
		for(unsigned i=0;i<concat.size();i++)
		{
			symbol.append(concat[i]->getSymbol());
		}
		return symbol;

	};

	bool symbolReady() {
		for(unsigned i=0;i<concat.size();i++)
		{
			if(concat[i]->symbolReady())
				return true;
		}
		return false;
	 }
	std::vector<std::string> getBindMessages()
	{
		std::vector<std::string> res;
		for(unsigned i=0;i<concat.size();i++)
		{
			std::vector<std::string> resi=concat[i]->getBindMessages();
			res.insert(res.end(),resi.begin(),resi.end());
		}
		return res;
	}
	void append(IPreprocessor*p) {concat.push_back(p);};

	std::vector<IPreprocessor*> concat;
};


#endif
