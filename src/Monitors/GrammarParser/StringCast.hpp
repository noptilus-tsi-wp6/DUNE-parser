#ifndef STRINGCAST_HPP_INCLUDED_
#define STRINGCAST_HPP_INCLUDED_
#include <sstream>
#include <iostream>

template<typename T> inline T fromString(std::string const&a,T const def)
{
		T res=def;
		std::istringstream ist(a);
        ist>>res;
        return res;
}

template<> inline std::string fromString<std::string>(std::string const&a,std::string const def)
{
        (void)def;
		return a;
}

template< >inline  bool fromString<bool>(std::string const& a,bool const def)
{
    bool res=def;
    std::istringstream ist(a);
    ist>>std::noboolalpha>>res;
    if(!ist.fail())
        return res;
    ist.clear();
    ist>>std::boolalpha>>res;
    if(!ist.fail())
        return res;
    return def;
}

template<typename T> inline std::string toString( T val )
{
	std::ostringstream ost;
	ost << val;
	ost.flush();
	return ost.str();
}


template<> inline std::string toString<std::string>( std::string val )
{
	return val;
}

#endif //STRINGCAST_HPP
