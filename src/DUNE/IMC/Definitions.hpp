//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 039d5331842e120ccba019e00d9e3b75                            *
//***************************************************************************

#ifndef DUNE_IMC_DEFINITIONS_HPP_INCLUDED_
#define DUNE_IMC_DEFINITIONS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <ostream>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/IMC/Message.hpp>
#include <DUNE/IMC/InlineMessage.hpp>
#include <DUNE/IMC/MessageList.hpp>
#include <DUNE/IMC/Enumerations.hpp>
#include <DUNE/IMC/Bitfields.hpp>
#include <DUNE/IMC/JSON.hpp>

namespace DUNE
{
  namespace IMC
  {
    //! Entity State.
    class EntityState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Bootstrapping.
        ESTA_BOOT = 0,
        //! Normal Operation.
        ESTA_NORMAL = 1,
        //! Fault.
        ESTA_FAULT = 2,
        //! Error.
        ESTA_ERROR = 3,
        //! Failure.
        ESTA_FAILURE = 4
      };

      //! Flags.
      enum FlagsBits
      {
        //! Human Intervention Required.
        EFLA_HUMAN_INTERVENTION = 0x01
      };

      //! State.
      uint8_t state;
      //! Flags.
      uint8_t flags;
      //! Complementary description.
      std::string description;

      static uint16_t
      getIdStatic(void)
      {
        return 1;
      }

      EntityState(void);

      uint16_t
      getId(void) const
      {
        return EntityState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EntityState";
      }

      Message*
      clone(void) const
      {
        return new EntityState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(description);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Query Entity State.
    class QueryEntityState: public Message
    {
    public:
      static uint16_t
      getIdStatic(void)
      {
        return 2;
      }

      QueryEntityState(void);

      uint16_t
      getId(void) const
      {
        return QueryEntityState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "QueryEntityState";
      }

      Message*
      clone(void) const
      {
        return new QueryEntityState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Entity Information.
    class EntityInfo: public Message
    {
    public:
      //! Entity Identifier.
      uint8_t id;
      //! Label.
      std::string label;
      //! Component name.
      std::string component;
      //! Activation Time.
      uint16_t act_time;
      //! Deactivation Time.
      uint16_t deact_time;

      static uint16_t
      getIdStatic(void)
      {
        return 3;
      }

      EntityInfo(void);

      uint16_t
      getId(void) const
      {
        return EntityInfo::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EntityInfo";
      }

      Message*
      clone(void) const
      {
        return new EntityInfo(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(label) + IMC::getSerializationSize(component);
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Query Entity Information.
    class QueryEntityInfo: public Message
    {
    public:
      //! Entity Identifier.
      uint8_t id;

      static uint16_t
      getIdStatic(void)
      {
        return 4;
      }

      QueryEntityInfo(void);

      uint16_t
      getId(void) const
      {
        return QueryEntityInfo::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "QueryEntityInfo";
      }

      Message*
      clone(void) const
      {
        return new QueryEntityInfo(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Entity List.
    class EntityList: public Message
    {
    public:
      //! operation.
      enum operationEnum
      {
        //! Report.
        OP_REPORT = 0,
        //! Query.
        OP_QUERY = 1
      };

      //! operation.
      uint8_t op;
      //! list.
      std::string list;

      static uint16_t
      getIdStatic(void)
      {
        return 5;
      }

      EntityList(void);

      uint16_t
      getId(void) const
      {
        return EntityList::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EntityList";
      }

      Message*
      clone(void) const
      {
        return new EntityList(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(list);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! CPU Usage.
    class CpuUsage: public Message
    {
    public:
      //! Usage percentage.
      uint8_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 7;
      }

      CpuUsage(void);

      uint16_t
      getId(void) const
      {
        return CpuUsage::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CpuUsage";
      }

      Message*
      clone(void) const
      {
        return new CpuUsage(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Transport Bindings.
    class TransportBindings: public Message
    {
    public:
      //! Consumer name.
      std::string consumer;
      //! Message Identifier.
      uint16_t message_id;

      static uint16_t
      getIdStatic(void)
      {
        return 8;
      }

      TransportBindings(void);

      uint16_t
      getId(void) const
      {
        return TransportBindings::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TransportBindings";
      }

      Message*
      clone(void) const
      {
        return new TransportBindings(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(consumer);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Restart System.
    class RestartSystem: public Message
    {
    public:
      static uint16_t
      getIdStatic(void)
      {
        return 9;
      }

      RestartSystem(void);

      uint16_t
      getId(void) const
      {
        return RestartSystem::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RestartSystem";
      }

      Message*
      clone(void) const
      {
        return new RestartSystem(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Device Calibration Control.
    class DevCalibrationControl: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Start.
        DCAL_START = 0,
        //! Stop.
        DCAL_STOP = 1,
        //! Perform Next Calibration Step.
        DCAL_STEP_NEXT = 2,
        //! Perform Previous Calibration Step.
        DCAL_STEP_PREVIOUS = 3
      };

      //! Operation.
      uint8_t op;

      static uint16_t
      getIdStatic(void)
      {
        return 12;
      }

      DevCalibrationControl(void);

      uint16_t
      getId(void) const
      {
        return DevCalibrationControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DevCalibrationControl";
      }

      Message*
      clone(void) const
      {
        return new DevCalibrationControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Device Calibration State.
    class DevCalibrationState: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Previous Step Not Supported.
        DCS_PREVIOUS_NOT_SUPPORTED = 0x01,
        //! Next Step Not Supported.
        DCS_NEXT_NOT_SUPPORTED = 0x02,
        //! Waiting Device Calibration Control.
        DCS_WAITING_CONTROL = 0x04,
        //! Calibration Error.
        DCS_ERROR = 0x08,
        //! Calibration Procedure Completed.
        DCS_COMPLETED = 0x10
      };

      //! Total Steps.
      uint8_t total_steps;
      //! Current Step Number.
      uint8_t step_number;
      //! Description.
      std::string step;
      //! Flags.
      uint8_t flags;

      static uint16_t
      getIdStatic(void)
      {
        return 13;
      }

      DevCalibrationState(void);

      uint16_t
      getId(void) const
      {
        return DevCalibrationState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DevCalibrationState";
      }

      Message*
      clone(void) const
      {
        return new DevCalibrationState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 3 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(step);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Entity Activation State.
    class EntityActivationState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Entity is Inactive.
        EAS_INACTIVE = 0,
        //! Entity is Active.
        EAS_ACTIVE = 1,
        //! Activation in Progress.
        EAS_ACT_IP = 2,
        //! Activation Completed.
        EAS_ACT_DONE = 3,
        //! Activation Failed.
        EAS_ACT_FAIL = 4,
        //! Deactivation In Progress.
        EAS_DEACT_IP = 5,
        //! Deactivation Completed.
        EAS_DEACT_DONE = 6,
        //! Deactivation Failed.
        EAS_DEACT_FAIL = 7
      };

      //! State.
      uint8_t state;
      //! Error.
      std::string error;

      static uint16_t
      getIdStatic(void)
      {
        return 14;
      }

      EntityActivationState(void);

      uint16_t
      getId(void) const
      {
        return EntityActivationState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EntityActivationState";
      }

      Message*
      clone(void) const
      {
        return new EntityActivationState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(error);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Query Entity Activation State.
    class QueryEntityActivationState: public Message
    {
    public:
      static uint16_t
      getIdStatic(void)
      {
        return 15;
      }

      QueryEntityActivationState(void);

      uint16_t
      getId(void) const
      {
        return QueryEntityActivationState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "QueryEntityActivationState";
      }

      Message*
      clone(void) const
      {
        return new QueryEntityActivationState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Vehicle Operational Limits.
    class VehicleOperationalLimits: public Message
    {
    public:
      //! Action on the vehicle operational limits.
      enum ActiononthevehicleoperationallimitsEnum
      {
        //! Request.
        OP_REQUEST = 0,
        //! Set.
        OP_SET = 1,
        //! Report.
        OP_REPORT = 2
      };

      //! Action on the vehicle operational limits.
      uint8_t op;
      //! Minimum speed.
      fp32_t speed_min;
      //! Maximum speed.
      fp32_t speed_max;
      //! Longitudinal maximum acceleration.
      fp32_t long_accel;
      //! Maximum MSL altitude.
      fp32_t alt_max_msl;
      //! Maximum Dive Rate Speed Fraction.
      fp32_t dive_fraction_max;
      //! Maximum Climb Rate Speed Fraction.
      fp32_t climb_fraction_max;
      //! Bank limit.
      fp32_t bank_max;
      //! Bank rate limit.
      fp32_t p_max;
      //! Minimum pitch angle.
      fp32_t pitch_min;
      //! Maximum pitch angle.
      fp32_t pitch_max;
      //! Maximum pitch rate.
      fp32_t q_max;
      //! Minimum load factor.
      fp32_t g_min;
      //! Maximum load factor.
      fp32_t g_max;
      //! Maximum lateral load factor.
      fp32_t g_lat_max;
      //! Minimum RPMs.
      fp32_t rpm_min;
      //! Maximum RPMs.
      fp32_t rpm_max;
      //! Maximum RPM rate.
      fp32_t rpm_rate_max;

      static uint16_t
      getIdStatic(void)
      {
        return 16;
      }

      VehicleOperationalLimits(void);

      uint16_t
      getId(void) const
      {
        return VehicleOperationalLimits::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "VehicleOperationalLimits";
      }

      Message*
      clone(void) const
      {
        return new VehicleOperationalLimits(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 69 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Message List.
    class MsgList: public Message
    {
    public:
      //! Messages.
      MessageList<Message> msgs;

      static uint16_t
      getIdStatic(void)
      {
        return 20;
      }

      MsgList(void);

      uint16_t
      getId(void) const
      {
        return MsgList::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "MsgList";
      }

      Message*
      clone(void) const
      {
        return new MsgList(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + msgs.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Simulated State.
    class SimulatedState: public Message
    {
    public:
      //! Latitude (WGS-84).
      fp64_t lat;
      //! Longitude (WGS-84).
      fp64_t lon;
      //! Height (WGS-84).
      fp32_t height;
      //! Offset north (m).
      fp32_t x;
      //! Offset east (m).
      fp32_t y;
      //! Offset down (m).
      fp32_t z;
      //! Rotation over x axis.
      fp32_t phi;
      //! Rotation over y axis.
      fp32_t theta;
      //! Rotation over z axis.
      fp32_t psi;
      //! Body-Fixed xx Linear Velocity.
      fp32_t u;
      //! Body-Fixed yy Linear Velocity.
      fp32_t v;
      //! Body-Fixed zz Linear Velocity.
      fp32_t w;
      //! Angular Velocity in x.
      fp32_t p;
      //! Angular Velocity in y.
      fp32_t q;
      //! Angular Velocity in z.
      fp32_t r;
      //! Stream Velocity X (North).
      fp32_t svx;
      //! Stream Velocity Y (East).
      fp32_t svy;
      //! Stream Velocity Z (Down).
      fp32_t svz;

      static uint16_t
      getIdStatic(void)
      {
        return 50;
      }

      SimulatedState(void);

      uint16_t
      getId(void) const
      {
        return SimulatedState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SimulatedState";
      }

      Message*
      clone(void) const
      {
        return new SimulatedState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 80 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Leak Simulation.
    class LeakSimulation: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Leaks Off.
        LSIM_OFF = 0,
        //! Leaks On.
        LSIM_ON = 1
      };

      //! Operation.
      uint8_t op;
      //! Leak Entities.
      std::string entities;

      static uint16_t
      getIdStatic(void)
      {
        return 51;
      }

      LeakSimulation(void);

      uint16_t
      getId(void) const
      {
        return LeakSimulation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LeakSimulation";
      }

      Message*
      clone(void) const
      {
        return new LeakSimulation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(entities);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Underwater Acoustics Simulation.
    class UASimulation: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Data Transmission.
        UAS_DATA = 0,
        //! Ping.
        UAS_PING = 1,
        //! Ping Reply.
        UAS_PING_REPLY = 2
      };

      //! Type.
      uint8_t type;
      //! Transmission Speed.
      uint16_t speed;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 52;
      }

      UASimulation(void);

      uint16_t
      getId(void) const
      {
        return UASimulation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UASimulation";
      }

      Message*
      clone(void) const
      {
        return new UASimulation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 3 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Dynamics Simulation Parameters.
    class DynamicsSimParam: public Message
    {
    public:
      //! Action on the Vehicle Simulation Parameters.
      enum ActionontheVehicleSimulationParametersEnum
      {
        //! Request.
        OP_REQUEST = 0,
        //! Set.
        OP_SET = 1,
        //! Report.
        OP_REPORT = 2
      };

      //! Action on the Vehicle Simulation Parameters.
      uint8_t op;
      //! TAS to Longitudinal Acceleration Gain.
      fp32_t tas2acc_pgain;
      //! Bank to Bank Rate Gain.
      fp32_t bank2p_pgain;

      static uint16_t
      getIdStatic(void)
      {
        return 53;
      }

      DynamicsSimParam(void);

      uint16_t
      getId(void) const
      {
        return DynamicsSimParam::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DynamicsSimParam";
      }

      Message*
      clone(void) const
      {
        return new DynamicsSimParam(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 9 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Storage Usage.
    class StorageUsage: public Message
    {
    public:
      //! Available.
      uint32_t available;
      //! Usage.
      uint8_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 100;
      }

      StorageUsage(void);

      uint16_t
      getId(void) const
      {
        return StorageUsage::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "StorageUsage";
      }

      Message*
      clone(void) const
      {
        return new StorageUsage(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Cache Control.
    class CacheControl: public Message
    {
    public:
      //! Control Operation.
      enum ControlOperationEnum
      {
        //! Store.
        COP_STORE = 0,
        //! Load.
        COP_LOAD = 1,
        //! Clear.
        COP_CLEAR = 2,
        //! Copy Snapshot.
        COP_COPY = 3,
        //! Snapshot Copy Complete.
        COP_COPY_COMPLETE = 4
      };

      //! Control Operation.
      uint8_t op;
      //! Snapshot destination.
      std::string snapshot;
      //! Message.
      InlineMessage<Message> message;

      static uint16_t
      getIdStatic(void)
      {
        return 101;
      }

      CacheControl(void);

      uint16_t
      getId(void) const
      {
        return CacheControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CacheControl";
      }

      Message*
      clone(void) const
      {
        return new CacheControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(snapshot) + message.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Logging Control.
    class LoggingControl: public Message
    {
    public:
      //! Control Operation.
      enum ControlOperationEnum
      {
        //! Request Start of Logging.
        COP_REQUEST_START = 0,
        //! Logging Started.
        COP_STARTED = 1,
        //! Request Logging Stop.
        COP_REQUEST_STOP = 2,
        //! Logging Stopped.
        COP_STOPPED = 3,
        //! Request Current Log Name.
        COP_REQUEST_CURRENT_NAME = 4,
        //! Current Log Name.
        COP_CURRENT_NAME = 5
      };

      //! Control Operation.
      uint8_t op;
      //! Log Label / Path.
      std::string name;

      static uint16_t
      getIdStatic(void)
      {
        return 102;
      }

      LoggingControl(void);

      uint16_t
      getId(void) const
      {
        return LoggingControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LoggingControl";
      }

      Message*
      clone(void) const
      {
        return new LoggingControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Log Book Entry.
    class LogBookEntry: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Information.
        LBET_INFO = 0,
        //! Warning.
        LBET_WARNING = 1,
        //! Error.
        LBET_ERROR = 2,
        //! Critical.
        LBET_CRITICAL = 3,
        //! Debug.
        LBET_DEBUG = 4
      };

      //! Type.
      uint8_t type;
      //! Timestamp.
      fp64_t htime;
      //! Context.
      std::string context;
      //! Text.
      std::string text;

      static uint16_t
      getIdStatic(void)
      {
        return 103;
      }

      LogBookEntry(void);

      uint16_t
      getId(void) const
      {
        return LogBookEntry::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LogBookEntry";
      }

      Message*
      clone(void) const
      {
        return new LogBookEntry(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 9 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(context) + IMC::getSerializationSize(text);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Log Book Control.
    class LogBookControl: public Message
    {
    public:
      //! Command.
      enum CommandEnum
      {
        //! Get.
        LBC_GET = 0,
        //! Clear.
        LBC_CLEAR = 1,
        //! Get Errors.
        LBC_GET_ERR = 2,
        //! Reply.
        LBC_REPLY = 3
      };

      //! Command.
      uint8_t command;
      //! Timestamp.
      fp64_t htime;
      //! Messages.
      MessageList<LogBookEntry> msg;

      static uint16_t
      getIdStatic(void)
      {
        return 104;
      }

      LogBookControl(void);

      uint16_t
      getId(void) const
      {
        return LogBookControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LogBookControl";
      }

      Message*
      clone(void) const
      {
        return new LogBookControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 9 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + msg.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Replay Control.
    class ReplayControl: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Start.
        ROP_START = 0,
        //! Stop.
        ROP_STOP = 1,
        //! Pause.
        ROP_PAUSE = 2,
        //! Resume.
        ROP_RESUME = 3
      };

      //! Operation.
      uint8_t op;
      //! File To Replay.
      std::string file;

      static uint16_t
      getIdStatic(void)
      {
        return 105;
      }

      ReplayControl(void);

      uint16_t
      getId(void) const
      {
        return ReplayControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ReplayControl";
      }

      Message*
      clone(void) const
      {
        return new ReplayControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(file);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Clock Control.
    class ClockControl: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Execute Sync..
        COP_SYNC_EXEC = 0,
        //! Request Sync..
        COP_SYNC_REQUEST = 1,
        //! Sync. Started.
        COP_SYNC_STARTED = 2,
        //! Sync. done.
        COP_SYNC_DONE = 3,
        //! Set Timezone .
        COP_SET_TZ = 4,
        //! Timezone Setup.
        COP_SET_TZ_DONE = 5
      };

      //! Operation.
      uint8_t op;
      //! Clock.
      fp64_t clock;
      //! Timezone.
      int8_t tz;

      static uint16_t
      getIdStatic(void)
      {
        return 106;
      }

      ClockControl(void);

      uint16_t
      getId(void) const
      {
        return ClockControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ClockControl";
      }

      Message*
      clone(void) const
      {
        return new ClockControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 10 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Heartbeat.
    class Heartbeat: public Message
    {
    public:
      static uint16_t
      getIdStatic(void)
      {
        return 150;
      }

      Heartbeat(void);

      uint16_t
      getId(void) const
      {
        return Heartbeat::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Heartbeat";
      }

      Message*
      clone(void) const
      {
        return new Heartbeat(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Announce.
    class Announce: public Message
    {
    public:
      //! System Name.
      std::string sys_name;
      //! System Type.
      uint8_t sys_type;
      //! Control Owner.
      uint16_t owner;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Height WGS-84.
      fp32_t height;
      //! Services.
      std::string services;

      static uint16_t
      getIdStatic(void)
      {
        return 151;
      }

      Announce(void);

      uint16_t
      getId(void) const
      {
        return Announce::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Announce";
      }

      Message*
      clone(void) const
      {
        return new Announce(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 23 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(sys_name) + IMC::getSerializationSize(services);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Announce Service.
    class AnnounceService: public Message
    {
    public:
      //! ServiceType.
      enum ServiceTypeBits
      {
        //! External.
        SRV_TYPE_EXTERNAL = 0x01,
        //! Local.
        SRV_TYPE_LOCAL = 0x02
      };

      //! Service.
      std::string service;
      //! ServiceType.
      uint8_t service_type;

      static uint16_t
      getIdStatic(void)
      {
        return 152;
      }

      AnnounceService(void);

      uint16_t
      getId(void) const
      {
        return AnnounceService::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AnnounceService";
      }

      Message*
      clone(void) const
      {
        return new AnnounceService(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(service);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Receive Signal Strength Information.
    class RSSI: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 153;
      }

      RSSI(void);

      uint16_t
      getId(void) const
      {
        return RSSI::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RSSI";
      }

      Message*
      clone(void) const
      {
        return new RSSI(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Voltage Standing Wave Ratio.
    class VSWR: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 154;
      }

      VSWR(void);

      uint16_t
      getId(void) const
      {
        return VSWR::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "VSWR";
      }

      Message*
      clone(void) const
      {
        return new VSWR(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Link Level.
    class LinkLevel: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 155;
      }

      LinkLevel(void);

      uint16_t
      getId(void) const
      {
        return LinkLevel::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LinkLevel";
      }

      Message*
      clone(void) const
      {
        return new LinkLevel(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! SMS.
    class Sms: public Message
    {
    public:
      //! Number.
      std::string number;
      //! Timeout.
      uint16_t timeout;
      //! Contents.
      std::string contents;

      static uint16_t
      getIdStatic(void)
      {
        return 156;
      }

      Sms(void);

      uint16_t
      getId(void) const
      {
        return Sms::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Sms";
      }

      Message*
      clone(void) const
      {
        return new Sms(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(number) + IMC::getSerializationSize(contents);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! SMS Transmit.
    class SmsTx: public Message
    {
    public:
      //! Sequence Number.
      uint32_t seq;
      //! Destination.
      std::string destination;
      //! Timeout.
      uint16_t timeout;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 157;
      }

      SmsTx(void);

      uint16_t
      getId(void) const
      {
        return SmsTx::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SmsTx";
      }

      Message*
      clone(void) const
      {
        return new SmsTx(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 6 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(destination) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! SMS Receive.
    class SmsRx: public Message
    {
    public:
      //! Source.
      std::string source;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 158;
      }

      SmsRx(void);

      uint16_t
      getId(void) const
      {
        return SmsRx::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SmsRx";
      }

      Message*
      clone(void) const
      {
        return new SmsRx(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(source) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! SMS State.
    class SmsState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Accepted.
        SMS_ACCEPTED = 0,
        //! Rejected.
        SMS_REJECTED = 1,
        //! Interrupted.
        SMS_INTERRUPTED = 2,
        //! Completed.
        SMS_COMPLETED = 3,
        //! Idle.
        SMS_IDLE = 4,
        //! Transmitting.
        SMS_TRANSMITTING = 5,
        //! Receiving.
        SMS_RECEIVING = 6
      };

      //! Sequence Number.
      uint32_t seq;
      //! State.
      uint8_t state;
      //! Error Message.
      std::string error;

      static uint16_t
      getIdStatic(void)
      {
        return 159;
      }

      SmsState(void);

      uint16_t
      getId(void) const
      {
        return SmsState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SmsState";
      }

      Message*
      clone(void) const
      {
        return new SmsState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(error);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Text Message.
    class TextMessage: public Message
    {
    public:
      //! Origin.
      std::string origin;
      //! Text.
      std::string text;

      static uint16_t
      getIdStatic(void)
      {
        return 160;
      }

      TextMessage(void);

      uint16_t
      getId(void) const
      {
        return TextMessage::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TextMessage";
      }

      Message*
      clone(void) const
      {
        return new TextMessage(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(origin) + IMC::getSerializationSize(text);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Received Iridium Message.
    class IridiumMsgRx: public Message
    {
    public:
      //! Origin Identifier.
      std::string origin;
      //! Timestamp.
      fp64_t htime;
      //! Latitude Reference.
      fp64_t lat;
      //! Longitude Reference.
      fp64_t lon;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 170;
      }

      IridiumMsgRx(void);

      uint16_t
      getId(void) const
      {
        return IridiumMsgRx::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "IridiumMsgRx";
      }

      Message*
      clone(void) const
      {
        return new IridiumMsgRx(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 24 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(origin) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Transmit Iridium Message.
    class IridiumMsgTx: public Message
    {
    public:
      //! Request Identifier.
      uint16_t req_id;
      //! Time to live.
      uint16_t ttl;
      //! Destination Identifier.
      std::string destination;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 171;
      }

      IridiumMsgTx(void);

      uint16_t
      getId(void) const
      {
        return IridiumMsgTx::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "IridiumMsgTx";
      }

      Message*
      clone(void) const
      {
        return new IridiumMsgTx(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(destination) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Iridium Transmission Status.
    class IridiumTxStatus: public Message
    {
    public:
      //! Status Code.
      enum StatusCodeEnum
      {
        //! Successfull transmission.
        TXSTATUS_OK = 1,
        //! Error while trying to transmit message.
        TXSTATUS_ERROR = 2,
        //! Message has been queued for transmission.
        TXSTATUS_QUEUED = 3,
        //! Message is currently being transmitted.
        TXSTATUS_TRANSMIT = 4,
        //! Message's TTL has expired. Transmition cancelled..
        TXSTATUS_EXPIRED = 5
      };

      //! Request Identifier.
      uint16_t req_id;
      //! Status Code.
      uint8_t status;
      //! Status Text.
      std::string text;

      static uint16_t
      getIdStatic(void)
      {
        return 172;
      }

      IridiumTxStatus(void);

      uint16_t
      getId(void) const
      {
        return IridiumTxStatus::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "IridiumTxStatus";
      }

      Message*
      clone(void) const
      {
        return new IridiumTxStatus(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 3 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(text);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Group Membership State.
    class GroupMembershipState: public Message
    {
    public:
      //! Group Name.
      std::string group_name;
      //! Communication Links Assertion.
      uint32_t links;

      static uint16_t
      getIdStatic(void)
      {
        return 180;
      }

      GroupMembershipState(void);

      uint16_t
      getId(void) const
      {
        return GroupMembershipState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "GroupMembershipState";
      }

      Message*
      clone(void) const
      {
        return new GroupMembershipState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(group_name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! System Group.
    class SystemGroup: public Message
    {
    public:
      //! Group List Action.
      enum GroupListActionEnum
      {
        //! Disband.
        OP_Dis = 0,
        //! Set.
        OP_Set = 1,
        //! Request.
        OP_Req = 2,
        //! Change.
        OP_Chg = 3,
        //! Report.
        OP_Rep = 4,
        //! Force.
        OP_Frc = 5
      };

      //! Group Name.
      std::string groupname;
      //! Group List Action.
      uint8_t action;
      //! Systems Name List.
      std::string grouplist;

      static uint16_t
      getIdStatic(void)
      {
        return 181;
      }

      SystemGroup(void);

      uint16_t
      getId(void) const
      {
        return SystemGroup::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SystemGroup";
      }

      Message*
      clone(void) const
      {
        return new SystemGroup(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(groupname) + IMC::getSerializationSize(grouplist);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! LBL Range.
    class LblRange: public Message
    {
    public:
      //! Beacon Identification Number.
      uint8_t id;
      //! Range.
      fp32_t range;

      static uint16_t
      getIdStatic(void)
      {
        return 200;
      }

      LblRange(void);

      uint16_t
      getId(void) const
      {
        return LblRange::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LblRange";
      }

      Message*
      clone(void) const
      {
        return new LblRange(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! LBL Beacon Configuration.
    class LblBeacon: public Message
    {
    public:
      //! Beacon Name.
      std::string beacon;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Depth.
      fp32_t depth;
      //! Interrogation channel.
      uint8_t query_channel;
      //! Reply channel.
      uint8_t reply_channel;
      //! Transponder delay.
      uint8_t transponder_delay;

      static uint16_t
      getIdStatic(void)
      {
        return 202;
      }

      LblBeacon(void);

      uint16_t
      getId(void) const
      {
        return LblBeacon::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LblBeacon";
      }

      Message*
      clone(void) const
      {
        return new LblBeacon(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 23 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(beacon);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! LBL Configuration.
    class LblConfig: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Set LBL Configuration.
        OP_SET_CFG = 0,
        //! Retrieve LBL Configuration.
        OP_GET_CFG = 1,
        //! Reply to a GET command.
        OP_CUR_CFG = 2
      };

      //! Operation.
      uint8_t op;
      //! Beacons.
      MessageList<LblBeacon> beacons;

      static uint16_t
      getIdStatic(void)
      {
        return 203;
      }

      LblConfig(void);

      uint16_t
      getId(void) const
      {
        return LblConfig::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LblConfig";
      }

      Message*
      clone(void) const
      {
        return new LblConfig(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + beacons.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Acoustic Message.
    class AcousticMessage: public Message
    {
    public:
      //! Message to send.
      InlineMessage<Message> message;

      static uint16_t
      getIdStatic(void)
      {
        return 206;
      }

      AcousticMessage(void);

      uint16_t
      getId(void) const
      {
        return AcousticMessage::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AcousticMessage";
      }

      Message*
      clone(void) const
      {
        return new AcousticMessage(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + message.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Acoustic Operation.
    class AcousticOperation: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Abort.
        AOP_ABORT = 0,
        //! Abort in Progress.
        AOP_ABORT_IP = 1,
        //! Abort Timeout.
        AOP_ABORT_TIMEOUT = 2,
        //! Abort Acknowledged.
        AOP_ABORT_ACKED = 3,
        //! Range Request.
        AOP_RANGE = 4,
        //! Range in Progress.
        AOP_RANGE_IP = 5,
        //! Range Timeout.
        AOP_RANGE_TIMEOUT = 6,
        //! Range Received.
        AOP_RANGE_RECVED = 7,
        //! Modem is Busy.
        AOP_BUSY = 8,
        //! Unsupported operation.
        AOP_UNSUPPORTED = 9,
        //! Transducer Not Detected.
        AOP_NO_TXD = 10,
        //! Send Message.
        AOP_MSG = 11,
        //! Message Send -- Queued.
        AOP_MSG_QUEUED = 12,
        //! Message Send -- In progress.
        AOP_MSG_IP = 13,
        //! Message Send -- Done.
        AOP_MSG_DONE = 14,
        //! Message Send -- Failure.
        AOP_MSG_FAILURE = 15,
        //! Send Short Message.
        AOP_MSG_SHORT = 16
      };

      //! Operation.
      uint8_t op;
      //! System.
      std::string system;
      //! Range.
      fp32_t range;
      //! Message To Send.
      InlineMessage<Message> msg;

      static uint16_t
      getIdStatic(void)
      {
        return 211;
      }

      AcousticOperation(void);

      uint16_t
      getId(void) const
      {
        return AcousticOperation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AcousticOperation";
      }

      Message*
      clone(void) const
      {
        return new AcousticOperation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(system) + msg.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Acoustic Systems Query.
    class AcousticSystemsQuery: public Message
    {
    public:
      static uint16_t
      getIdStatic(void)
      {
        return 212;
      }

      AcousticSystemsQuery(void);

      uint16_t
      getId(void) const
      {
        return AcousticSystemsQuery::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AcousticSystemsQuery";
      }

      Message*
      clone(void) const
      {
        return new AcousticSystemsQuery(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Acoustic Systems.
    class AcousticSystems: public Message
    {
    public:
      //! System List.
      std::string list;

      static uint16_t
      getIdStatic(void)
      {
        return 213;
      }

      AcousticSystems(void);

      uint16_t
      getId(void) const
      {
        return AcousticSystems::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AcousticSystems";
      }

      Message*
      clone(void) const
      {
        return new AcousticSystems(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(list);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Revolutions Per Minute.
    class Rpm: public Message
    {
    public:
      //! Value.
      int16_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 250;
      }

      Rpm(void);

      uint16_t
      getId(void) const
      {
        return Rpm::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Rpm";
      }

      Message*
      clone(void) const
      {
        return new Rpm(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Voltage.
    class Voltage: public Message
    {
    public:
      //! Measured Voltage Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 251;
      }

      Voltage(void);

      uint16_t
      getId(void) const
      {
        return Voltage::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Voltage";
      }

      Message*
      clone(void) const
      {
        return new Voltage(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Current.
    class Current: public Message
    {
    public:
      //! Measured Current Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 252;
      }

      Current(void);

      uint16_t
      getId(void) const
      {
        return Current::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Current";
      }

      Message*
      clone(void) const
      {
        return new Current(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! GPS Fix.
    class GpsFix: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Stand Alone.
        GFT_STANDALONE = 0x00,
        //! Differential.
        GFT_DIFFERENTIAL = 0x01,
        //! Dead Reckoning.
        GFT_DEAD_RECKONING = 0x02,
        //! Manual Input.
        GFT_MANUAL_INPUT = 0x03,
        //! Simulation.
        GFT_SIMULATION = 0x04
      };

      //! Validity.
      enum ValidityBits
      {
        //! Valid Date.
        GFV_VALID_DATE = 0x0001,
        //! Valid Time.
        GFV_VALID_TIME = 0x0002,
        //! Valid Position.
        GFV_VALID_POS = 0x0004,
        //! Valid Course Over Ground.
        GFV_VALID_COG = 0x0008,
        //! Valid Speed Over Ground.
        GFV_VALID_SOG = 0x0010,
        //! Valid Horizontal Accuracy Estimate.
        GFV_VALID_HACC = 0x0020,
        //! Valid Vertical Accuracy Estimate.
        GFV_VALID_VACC = 0x0040,
        //! Valid Horizontal Dilution of Precision.
        GFV_VALID_HDOP = 0x0080,
        //! Valid Vertical Dilution of Precision.
        GFV_VALID_VDOP = 0x0100
      };

      //! Validity.
      uint16_t validity;
      //! Type.
      uint8_t type;
      //! UTC Year.
      uint16_t utc_year;
      //! UTC Month.
      uint8_t utc_month;
      //! UTC Day.
      uint8_t utc_day;
      //! UTC Time of Fix.
      fp32_t utc_time;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Height above WGS-84 ellipsoid.
      fp32_t height;
      //! Number of Satellites.
      uint8_t satellites;
      //! Course Over Ground.
      fp32_t cog;
      //! Speed Over Ground.
      fp32_t sog;
      //! Horizontal Dilution of Precision.
      fp32_t hdop;
      //! Vertical Dilution of Precision.
      fp32_t vdop;
      //! Horizontal Accuracy Estimate.
      fp32_t hacc;
      //! Vertical Accuracy Estimate.
      fp32_t vacc;

      static uint16_t
      getIdStatic(void)
      {
        return 253;
      }

      GpsFix(void);

      uint16_t
      getId(void) const
      {
        return GpsFix::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "GpsFix";
      }

      Message*
      clone(void) const
      {
        return new GpsFix(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 56 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Euler Angles.
    class EulerAngles: public Message
    {
    public:
      //! Device Time.
      fp64_t time;
      //! Roll Angle.
      fp64_t phi;
      //! Pitch Angle.
      fp64_t theta;
      //! Yaw Angle (True).
      fp64_t psi;
      //! Yaw Angle (Magnetic).
      fp64_t psi_magnetic;

      static uint16_t
      getIdStatic(void)
      {
        return 254;
      }

      EulerAngles(void);

      uint16_t
      getId(void) const
      {
        return EulerAngles::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EulerAngles";
      }

      Message*
      clone(void) const
      {
        return new EulerAngles(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 40 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Euler Angles Delta.
    class EulerAnglesDelta: public Message
    {
    public:
      //! Device Time.
      fp64_t time;
      //! X.
      fp64_t x;
      //! Y.
      fp64_t y;
      //! Z.
      fp64_t z;
      //! Timestep.
      fp32_t timestep;

      static uint16_t
      getIdStatic(void)
      {
        return 255;
      }

      EulerAnglesDelta(void);

      uint16_t
      getId(void) const
      {
        return EulerAnglesDelta::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EulerAnglesDelta";
      }

      Message*
      clone(void) const
      {
        return new EulerAnglesDelta(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 36 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Angular Velocity.
    class AngularVelocity: public Message
    {
    public:
      //! Device Time.
      fp64_t time;
      //! X.
      fp64_t x;
      //! Y.
      fp64_t y;
      //! Z.
      fp64_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 256;
      }

      AngularVelocity(void);

      uint16_t
      getId(void) const
      {
        return AngularVelocity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AngularVelocity";
      }

      Message*
      clone(void) const
      {
        return new AngularVelocity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 32 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Acceleration.
    class Acceleration: public Message
    {
    public:
      //! Device Time.
      fp64_t time;
      //! X.
      fp64_t x;
      //! Y.
      fp64_t y;
      //! Z.
      fp64_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 257;
      }

      Acceleration(void);

      uint16_t
      getId(void) const
      {
        return Acceleration::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Acceleration";
      }

      Message*
      clone(void) const
      {
        return new Acceleration(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 32 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Magnetic Field.
    class MagneticField: public Message
    {
    public:
      //! Device Time.
      fp64_t time;
      //! X.
      fp64_t x;
      //! Y.
      fp64_t y;
      //! Z.
      fp64_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 258;
      }

      MagneticField(void);

      uint16_t
      getId(void) const
      {
        return MagneticField::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "MagneticField";
      }

      Message*
      clone(void) const
      {
        return new MagneticField(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 32 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Ground Velocity.
    class GroundVelocity: public Message
    {
    public:
      //! Validity.
      enum ValidityBits
      {
        //! X component is valid.
        VAL_VEL_X = 0x01,
        //! Y component is valid.
        VAL_VEL_Y = 0x02,
        //! Z component is valid.
        VAL_VEL_Z = 0x04
      };

      //! Validity.
      uint8_t validity;
      //! X.
      fp64_t x;
      //! Y.
      fp64_t y;
      //! Z.
      fp64_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 259;
      }

      GroundVelocity(void);

      uint16_t
      getId(void) const
      {
        return GroundVelocity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "GroundVelocity";
      }

      Message*
      clone(void) const
      {
        return new GroundVelocity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 25 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Water Velocity.
    class WaterVelocity: public Message
    {
    public:
      //! Validity.
      enum ValidityBits
      {
        //! X component is valid.
        VAL_VEL_X = 0x01,
        //! Y component is valid.
        VAL_VEL_Y = 0x02,
        //! Z component is valid.
        VAL_VEL_Z = 0x04
      };

      //! Validity.
      uint8_t validity;
      //! X.
      fp64_t x;
      //! Y.
      fp64_t y;
      //! Z.
      fp64_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 260;
      }

      WaterVelocity(void);

      uint16_t
      getId(void) const
      {
        return WaterVelocity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "WaterVelocity";
      }

      Message*
      clone(void) const
      {
        return new WaterVelocity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 25 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Velocity Delta.
    class VelocityDelta: public Message
    {
    public:
      //! Device Time.
      fp64_t time;
      //! X.
      fp64_t x;
      //! Y.
      fp64_t y;
      //! Z.
      fp64_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 261;
      }

      VelocityDelta(void);

      uint16_t
      getId(void) const
      {
        return VelocityDelta::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "VelocityDelta";
      }

      Message*
      clone(void) const
      {
        return new VelocityDelta(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 32 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Device State.
    class DeviceState: public Message
    {
    public:
      //! Device Position - X.
      fp32_t x;
      //! Device Position - Y.
      fp32_t y;
      //! Device Position - Z.
      fp32_t z;
      //! Device Rotation - X.
      fp32_t phi;
      //! Device Rotation - Y.
      fp32_t theta;
      //! Device Rotation - Z.
      fp32_t psi;

      static uint16_t
      getIdStatic(void)
      {
        return 282;
      }

      DeviceState(void);

      uint16_t
      getId(void) const
      {
        return DeviceState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DeviceState";
      }

      Message*
      clone(void) const
      {
        return new DeviceState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 24 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Beam Configuration.
    class BeamConfig: public Message
    {
    public:
      //! Beam Width.
      fp32_t beam_width;
      //! Beam Height.
      fp32_t beam_height;

      static uint16_t
      getIdStatic(void)
      {
        return 283;
      }

      BeamConfig(void);

      uint16_t
      getId(void) const
      {
        return BeamConfig::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "BeamConfig";
      }

      Message*
      clone(void) const
      {
        return new BeamConfig(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Distance.
    class Distance: public Message
    {
    public:
      //! Validity.
      enum ValidityEnum
      {
        //! Invalid.
        DV_INVALID = 0,
        //! Valid.
        DV_VALID = 1
      };

      //! Validity.
      uint8_t validity;
      //! Location.
      MessageList<DeviceState> location;
      //! Beam Configuration.
      MessageList<BeamConfig> beam_config;
      //! Measured Distance.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 262;
      }

      Distance(void);

      uint16_t
      getId(void) const
      {
        return Distance::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Distance";
      }

      Message*
      clone(void) const
      {
        return new Distance(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + location.getSerializationSize() + beam_config.getSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Temperature.
    class Temperature: public Message
    {
    public:
      //! Measured Temperature.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 263;
      }

      Temperature(void);

      uint16_t
      getId(void) const
      {
        return Temperature::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Temperature";
      }

      Message*
      clone(void) const
      {
        return new Temperature(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Pressure.
    class Pressure: public Message
    {
    public:
      //! Measured Pressure.
      fp64_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 264;
      }

      Pressure(void);

      uint16_t
      getId(void) const
      {
        return Pressure::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Pressure";
      }

      Message*
      clone(void) const
      {
        return new Pressure(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Depth.
    class Depth: public Message
    {
    public:
      //! Measured Depth.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 265;
      }

      Depth(void);

      uint16_t
      getId(void) const
      {
        return Depth::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Depth";
      }

      Message*
      clone(void) const
      {
        return new Depth(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Depth Offset.
    class DepthOffset: public Message
    {
    public:
      //! Measured Offset.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 266;
      }

      DepthOffset(void);

      uint16_t
      getId(void) const
      {
        return DepthOffset::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DepthOffset";
      }

      Message*
      clone(void) const
      {
        return new DepthOffset(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Sound Speed.
    class SoundSpeed: public Message
    {
    public:
      //! Computed Sound Speed.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 267;
      }

      SoundSpeed(void);

      uint16_t
      getId(void) const
      {
        return SoundSpeed::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SoundSpeed";
      }

      Message*
      clone(void) const
      {
        return new SoundSpeed(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Water Density.
    class WaterDensity: public Message
    {
    public:
      //! Computed Water Density.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 268;
      }

      WaterDensity(void);

      uint16_t
      getId(void) const
      {
        return WaterDensity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "WaterDensity";
      }

      Message*
      clone(void) const
      {
        return new WaterDensity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Conductivity.
    class Conductivity: public Message
    {
    public:
      //! Measured Conductivity.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 269;
      }

      Conductivity(void);

      uint16_t
      getId(void) const
      {
        return Conductivity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Conductivity";
      }

      Message*
      clone(void) const
      {
        return new Conductivity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Salinity.
    class Salinity: public Message
    {
    public:
      //! Measured Salinity.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 270;
      }

      Salinity(void);

      uint16_t
      getId(void) const
      {
        return Salinity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Salinity";
      }

      Message*
      clone(void) const
      {
        return new Salinity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Wind Speed.
    class WindSpeed: public Message
    {
    public:
      //! Direction.
      fp32_t direction;
      //! Speed.
      fp32_t speed;
      //! Turbulence.
      fp32_t turbulence;

      static uint16_t
      getIdStatic(void)
      {
        return 271;
      }

      WindSpeed(void);

      uint16_t
      getId(void) const
      {
        return WindSpeed::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "WindSpeed";
      }

      Message*
      clone(void) const
      {
        return new WindSpeed(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 12 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Relative Humidity.
    class RelativeHumidity: public Message
    {
    public:
      //! Relative Humidity Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 272;
      }

      RelativeHumidity(void);

      uint16_t
      getId(void) const
      {
        return RelativeHumidity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RelativeHumidity";
      }

      Message*
      clone(void) const
      {
        return new RelativeHumidity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Device Data (Text).
    class DevDataText: public Message
    {
    public:
      //! Value.
      std::string value;

      static uint16_t
      getIdStatic(void)
      {
        return 273;
      }

      DevDataText(void);

      uint16_t
      getId(void) const
      {
        return DevDataText::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DevDataText";
      }

      Message*
      clone(void) const
      {
        return new DevDataText(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(value);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Device Data (Binary).
    class DevDataBinary: public Message
    {
    public:
      //! Value.
      std::vector<char> value;

      static uint16_t
      getIdStatic(void)
      {
        return 274;
      }

      DevDataBinary(void);

      uint16_t
      getId(void) const
      {
        return DevDataBinary::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DevDataBinary";
      }

      Message*
      clone(void) const
      {
        return new DevDataBinary(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(value);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Sonar Data.
    class SonarData: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Sidescan.
        ST_SIDESCAN = 0,
        //! Echo Sounder.
        ST_ECHOSOUNDER = 1,
        //! Multibeam.
        ST_MULTIBEAM = 2
      };

      //! Type.
      uint8_t type;
      //! Frequency.
      uint32_t frequency;
      //! Minimum Range.
      uint16_t min_range;
      //! Maximum Range.
      uint16_t max_range;
      //! Bits Per Data Point.
      uint8_t bits_per_point;
      //! Scaling Factor.
      fp32_t scale_factor;
      //! Beam Configuration.
      MessageList<BeamConfig> beam_config;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 276;
      }

      SonarData(void);

      uint16_t
      getId(void) const
      {
        return SonarData::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SonarData";
      }

      Message*
      clone(void) const
      {
        return new SonarData(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 14 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + beam_config.getSerializationSize() + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Pulse.
    class Pulse: public Message
    {
    public:
      static uint16_t
      getIdStatic(void)
      {
        return 277;
      }

      Pulse(void);

      uint16_t
      getId(void) const
      {
        return Pulse::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Pulse";
      }

      Message*
      clone(void) const
      {
        return new Pulse(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Pulse Detection Control.
    class PulseDetectionControl: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Pulse Detection OFF.
        POP_OFF = 0,
        //! Pulse Detection ON.
        POP_ON = 1
      };

      //! Operation.
      uint8_t op;

      static uint16_t
      getIdStatic(void)
      {
        return 278;
      }

      PulseDetectionControl(void);

      uint16_t
      getId(void) const
      {
        return PulseDetectionControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PulseDetectionControl";
      }

      Message*
      clone(void) const
      {
        return new PulseDetectionControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Fuel Level.
    class FuelLevel: public Message
    {
    public:
      //! Value.
      fp32_t value;
      //! Confidence Level.
      fp32_t confidence;
      //! Operation Modes.
      std::string opmodes;

      static uint16_t
      getIdStatic(void)
      {
        return 279;
      }

      FuelLevel(void);

      uint16_t
      getId(void) const
      {
        return FuelLevel::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FuelLevel";
      }

      Message*
      clone(void) const
      {
        return new FuelLevel(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(opmodes);
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! GPS Navigation Data.
    class GpsNavData: public Message
    {
    public:
      //! GPS Millisecond Time of Week.
      uint32_t itow;
      //! Latitude.
      fp64_t lat;
      //! Longitude.
      fp64_t lon;
      //! Height above ellipsoid.
      fp32_t height_ell;
      //! Height above sea level.
      fp32_t height_sea;
      //! Horizontal Accuracy Estimate.
      fp32_t hacc;
      //! Vertical Accuracy Estimate.
      fp32_t vacc;
      //! NED North Velocity.
      fp32_t vel_n;
      //! NED East Velocity.
      fp32_t vel_e;
      //! NED Down Velocity.
      fp32_t vel_d;
      //! Speed (3D).
      fp32_t speed;
      //! Ground Speed (2D).
      fp32_t gspeed;
      //! Heading (2D).
      fp32_t heading;
      //! Speed Accuracy Estimate.
      fp32_t sacc;
      //! Course / Heading Accuracy Estimate.
      fp32_t cacc;

      static uint16_t
      getIdStatic(void)
      {
        return 280;
      }

      GpsNavData(void);

      uint16_t
      getId(void) const
      {
        return GpsNavData::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "GpsNavData";
      }

      Message*
      clone(void) const
      {
        return new GpsNavData(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 68 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Servo Position.
    class ServoPosition: public Message
    {
    public:
      //! Identifier.
      uint8_t id;
      //! Position.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 281;
      }

      ServoPosition(void);

      uint16_t
      getId(void) const
      {
        return ServoPosition::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ServoPosition";
      }

      Message*
      clone(void) const
      {
        return new ServoPosition(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Data Sanity.
    class DataSanity: public Message
    {
    public:
      //! Sanity.
      enum SanityEnum
      {
        //! Sane.
        DS_SANE = 0,
        //! Not Sane.
        DS_NOT_SANE = 1
      };

      //! Sanity.
      uint8_t sane;

      static uint16_t
      getIdStatic(void)
      {
        return 284;
      }

      DataSanity(void);

      uint16_t
      getId(void) const
      {
        return DataSanity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DataSanity";
      }

      Message*
      clone(void) const
      {
        return new DataSanity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Rhodamine Dye.
    class RhodamineDye: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 285;
      }

      RhodamineDye(void);

      uint16_t
      getId(void) const
      {
        return RhodamineDye::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RhodamineDye";
      }

      Message*
      clone(void) const
      {
        return new RhodamineDye(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Crude Oil.
    class CrudeOil: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 286;
      }

      CrudeOil(void);

      uint16_t
      getId(void) const
      {
        return CrudeOil::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CrudeOil";
      }

      Message*
      clone(void) const
      {
        return new CrudeOil(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Fine Oil.
    class FineOil: public Message
    {
    public:
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 287;
      }

      FineOil(void);

      uint16_t
      getId(void) const
      {
        return FineOil::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FineOil";
      }

      Message*
      clone(void) const
      {
        return new FineOil(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Camera Zoom.
    class CameraZoom: public Message
    {
    public:
      //! Action.
      enum ActionEnum
      {
        //! Reset Zoom.
        ACTION_ZOOM_RESET = 0,
        //! Zoom In.
        ACTION_ZOOM_IN = 1,
        //! Zoom Out.
        ACTION_ZOOM_OUT = 2,
        //! Stop Zooming.
        ACTION_ZOOM_STOP = 3
      };

      //! Camera Number.
      uint8_t id;
      //! Absolute Zoom Level.
      uint8_t zoom;
      //! Action.
      uint8_t action;

      static uint16_t
      getIdStatic(void)
      {
        return 300;
      }

      CameraZoom(void);

      uint16_t
      getId(void) const
      {
        return CameraZoom::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CameraZoom";
      }

      Message*
      clone(void) const
      {
        return new CameraZoom(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 3 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Set Thruster Actuation.
    class SetThrusterActuation: public Message
    {
    public:
      //! Thruster Number.
      uint8_t id;
      //! Actuation Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 301;
      }

      SetThrusterActuation(void);

      uint16_t
      getId(void) const
      {
        return SetThrusterActuation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SetThrusterActuation";
      }

      Message*
      clone(void) const
      {
        return new SetThrusterActuation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Set Servo Position.
    class SetServoPosition: public Message
    {
    public:
      //! Identifier.
      uint8_t id;
      //! Position.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 302;
      }

      SetServoPosition(void);

      uint16_t
      getId(void) const
      {
        return SetServoPosition::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SetServoPosition";
      }

      Message*
      clone(void) const
      {
        return new SetServoPosition(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Set Control Surface Deflection.
    class SetControlSurfaceDeflection: public Message
    {
    public:
      //! Identifier.
      uint8_t id;
      //! Angle.
      fp32_t angle;

      static uint16_t
      getIdStatic(void)
      {
        return 303;
      }

      SetControlSurfaceDeflection(void);

      uint16_t
      getId(void) const
      {
        return SetControlSurfaceDeflection::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SetControlSurfaceDeflection";
      }

      Message*
      clone(void) const
      {
        return new SetControlSurfaceDeflection(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Remote Actions Request.
    class RemoteActionsRequest: public Message
    {
    public:
      //! operation.
      enum operationEnum
      {
        //! Report.
        OP_REPORT = 0,
        //! Query.
        OP_QUERY = 1
      };

      //! operation.
      uint8_t op;
      //! Actions.
      std::string actions;

      static uint16_t
      getIdStatic(void)
      {
        return 304;
      }

      RemoteActionsRequest(void);

      uint16_t
      getId(void) const
      {
        return RemoteActionsRequest::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RemoteActionsRequest";
      }

      Message*
      clone(void) const
      {
        return new RemoteActionsRequest(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(actions);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Remote Actions.
    class RemoteActions: public Message
    {
    public:
      //! Actions.
      std::string actions;

      static uint16_t
      getIdStatic(void)
      {
        return 305;
      }

      RemoteActions(void);

      uint16_t
      getId(void) const
      {
        return RemoteActions::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RemoteActions";
      }

      Message*
      clone(void) const
      {
        return new RemoteActions(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(actions);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Button Event.
    class ButtonEvent: public Message
    {
    public:
      //! Button.
      uint8_t button;
      //! Value.
      uint8_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 306;
      }

      ButtonEvent(void);

      uint16_t
      getId(void) const
      {
        return ButtonEvent::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ButtonEvent";
      }

      Message*
      clone(void) const
      {
        return new ButtonEvent(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! LCD Control.
    class LcdControl: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Turn off display.
        OP_TURN_OFF = 0,
        //! Turn on display.
        OP_TURN_ON = 1,
        //! Clear display.
        OP_CLEAR = 2,
        //! Write Line #0.
        OP_WRITE0 = 3,
        //! Write Line #1.
        OP_WRITE1 = 4
      };

      //! Operation.
      uint8_t op;
      //! Text.
      std::string text;

      static uint16_t
      getIdStatic(void)
      {
        return 307;
      }

      LcdControl(void);

      uint16_t
      getId(void) const
      {
        return LcdControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LcdControl";
      }

      Message*
      clone(void) const
      {
        return new LcdControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(text);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Power Operation.
    class PowerOperation: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Power Down.
        POP_PWR_DOWN = 0,
        //! Power Down in Progress.
        POP_PWR_DOWN_IP = 1,
        //! Power Down Aborted.
        POP_PWR_DOWN_ABORTED = 2,
        //! Schedule Power Down.
        POP_SCHED_PWR_DOWN = 3,
        //! Power Up.
        POP_PWR_UP = 4,
        //! Power Up in Progress.
        POP_PWR_UP_IP = 5,
        //! Schedule Power Up.
        POP_SCHED_PWR_UP = 6
      };

      //! Operation.
      uint8_t op;
      //! Time Remaining.
      fp32_t time_remain;
      //! Scheduled Time.
      fp64_t sched_time;

      static uint16_t
      getIdStatic(void)
      {
        return 308;
      }

      PowerOperation(void);

      uint16_t
      getId(void) const
      {
        return PowerOperation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PowerOperation";
      }

      Message*
      clone(void) const
      {
        return new PowerOperation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 13 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Power Channel Control.
    class PowerChannelControl: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Turn Off.
        PCC_OP_TURN_OFF = 0,
        //! Turn On.
        PCC_OP_TURN_ON = 1,
        //! Toggle.
        PCC_OP_TOGGLE = 2,
        //! Schedule Turn On.
        PCC_OP_SCHED_ON = 3,
        //! Schedule Turn Off.
        PCC_OP_SCHED_OFF = 4,
        //! Reset Schedules.
        PCC_OP_SCHED_RESET = 5,
        //! Save Current State.
        PCC_OP_SAVE = 6
      };

      //! Channel Name.
      std::string name;
      //! Operation.
      uint8_t op;
      //! Scheduled Time.
      fp64_t sched_time;

      static uint16_t
      getIdStatic(void)
      {
        return 309;
      }

      PowerChannelControl(void);

      uint16_t
      getId(void) const
      {
        return PowerChannelControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PowerChannelControl";
      }

      Message*
      clone(void) const
      {
        return new PowerChannelControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 9 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Query Power Channel State.
    class QueryPowerChannelState: public Message
    {
    public:
      static uint16_t
      getIdStatic(void)
      {
        return 310;
      }

      QueryPowerChannelState(void);

      uint16_t
      getId(void) const
      {
        return QueryPowerChannelState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "QueryPowerChannelState";
      }

      Message*
      clone(void) const
      {
        return new QueryPowerChannelState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Power Channel State.
    class PowerChannelState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Off.
        PCS_OFF = 0,
        //! On.
        PCS_ON = 1
      };

      //! Name.
      std::string name;
      //! State.
      uint8_t state;

      static uint16_t
      getIdStatic(void)
      {
        return 311;
      }

      PowerChannelState(void);

      uint16_t
      getId(void) const
      {
        return PowerChannelState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PowerChannelState";
      }

      Message*
      clone(void) const
      {
        return new PowerChannelState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! LED Brightness.
    class LedBrightness: public Message
    {
    public:
      //! Name.
      std::string name;
      //! Value.
      uint8_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 312;
      }

      LedBrightness(void);

      uint16_t
      getId(void) const
      {
        return LedBrightness::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LedBrightness";
      }

      Message*
      clone(void) const
      {
        return new LedBrightness(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(name);
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Query LED Brightness.
    class QueryLedBrightness: public Message
    {
    public:
      //! Name.
      std::string name;

      static uint16_t
      getIdStatic(void)
      {
        return 313;
      }

      QueryLedBrightness(void);

      uint16_t
      getId(void) const
      {
        return QueryLedBrightness::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "QueryLedBrightness";
      }

      Message*
      clone(void) const
      {
        return new QueryLedBrightness(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Set LED Brightness.
    class SetLedBrightness: public Message
    {
    public:
      //! Name.
      std::string name;
      //! Value.
      uint8_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 314;
      }

      SetLedBrightness(void);

      uint16_t
      getId(void) const
      {
        return SetLedBrightness::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SetLedBrightness";
      }

      Message*
      clone(void) const
      {
        return new SetLedBrightness(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(name);
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Set PWM.
    class SetPWM: public Message
    {
    public:
      //! Channel Identifier.
      uint8_t id;
      //! Period.
      uint32_t period;
      //! Duty Cycle.
      uint32_t duty_cycle;

      static uint16_t
      getIdStatic(void)
      {
        return 315;
      }

      SetPWM(void);

      uint16_t
      getId(void) const
      {
        return SetPWM::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SetPWM";
      }

      Message*
      clone(void) const
      {
        return new SetPWM(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 9 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! PWM.
    class PWM: public Message
    {
    public:
      //! Channel Identifier.
      uint8_t id;
      //! Period.
      uint32_t period;
      //! Duty Cycle.
      uint32_t duty_cycle;

      static uint16_t
      getIdStatic(void)
      {
        return 316;
      }

      PWM(void);

      uint16_t
      getId(void) const
      {
        return PWM::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PWM";
      }

      Message*
      clone(void) const
      {
        return new PWM(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 9 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Estimated State.
    class EstimatedState: public Message
    {
    public:
      //! Latitude (WGS-84).
      fp64_t lat;
      //! Longitude (WGS-84).
      fp64_t lon;
      //! Height (WGS-84).
      fp32_t height;
      //! Offset north.
      fp32_t x;
      //! Offset east.
      fp32_t y;
      //! Offset down.
      fp32_t z;
      //! Rotation over x axis.
      fp32_t phi;
      //! Rotation over y axis.
      fp32_t theta;
      //! Rotation over z axis.
      fp32_t psi;
      //! Body-Fixed xx Velocity.
      fp32_t u;
      //! Body-Fixed yy Velocity.
      fp32_t v;
      //! Body-Fixed zz Velocity.
      fp32_t w;
      //! Ground Velocity X (North).
      fp32_t vx;
      //! Ground Velocity Y (East).
      fp32_t vy;
      //! Ground Velocity Z (Down).
      fp32_t vz;
      //! Angular Velocity in x.
      fp32_t p;
      //! Angular Velocity in y.
      fp32_t q;
      //! Angular Velocity in z.
      fp32_t r;
      //! Depth.
      fp32_t depth;
      //! Altitude.
      fp32_t alt;

      static uint16_t
      getIdStatic(void)
      {
        return 350;
      }

      EstimatedState(void);

      uint16_t
      getId(void) const
      {
        return EstimatedState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EstimatedState";
      }

      Message*
      clone(void) const
      {
        return new EstimatedState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 88 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Estimated Stream Velocity.
    class EstimatedStreamVelocity: public Message
    {
    public:
      //! X component (North).
      fp64_t x;
      //! Y component (East).
      fp64_t y;
      //! Z component (Down).
      fp64_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 351;
      }

      EstimatedStreamVelocity(void);

      uint16_t
      getId(void) const
      {
        return EstimatedStreamVelocity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EstimatedStreamVelocity";
      }

      Message*
      clone(void) const
      {
        return new EstimatedStreamVelocity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 24 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Indicated Speed.
    class IndicatedSpeed: public Message
    {
    public:
      //! Measured speed.
      fp64_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 352;
      }

      IndicatedSpeed(void);

      uint16_t
      getId(void) const
      {
        return IndicatedSpeed::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "IndicatedSpeed";
      }

      Message*
      clone(void) const
      {
        return new IndicatedSpeed(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! True Speed.
    class TrueSpeed: public Message
    {
    public:
      //! Estimated value.
      fp64_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 353;
      }

      TrueSpeed(void);

      uint16_t
      getId(void) const
      {
        return TrueSpeed::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TrueSpeed";
      }

      Message*
      clone(void) const
      {
        return new TrueSpeed(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Navigation Uncertainty.
    class NavigationUncertainty: public Message
    {
    public:
      //! Variance - x Position.
      fp32_t x;
      //! Variance - y Position.
      fp32_t y;
      //! Variance - z Position.
      fp32_t z;
      //! Variance - Roll.
      fp32_t phi;
      //! Variance - Pitch.
      fp32_t theta;
      //! Variance - Yaw.
      fp32_t psi;
      //! Variance - Gyro. Roll Rate.
      fp32_t p;
      //! Variance - Gyro. Pitch Rate.
      fp32_t q;
      //! Variance - Gyro. Yaw Rate.
      fp32_t r;
      //! Variance - Body-Fixed xx Velocity.
      fp32_t u;
      //! Variance - Body-Fixed yy Velocity.
      fp32_t v;
      //! Variance - Body-Fixed ww Velocity.
      fp32_t w;
      //! Variance - Yaw Bias.
      fp32_t bias_psi;
      //! Variance - Gyro. Yaw Rate Bias.
      fp32_t bias_r;

      static uint16_t
      getIdStatic(void)
      {
        return 354;
      }

      NavigationUncertainty(void);

      uint16_t
      getId(void) const
      {
        return NavigationUncertainty::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "NavigationUncertainty";
      }

      Message*
      clone(void) const
      {
        return new NavigationUncertainty(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 56 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Navigation Data.
    class NavigationData: public Message
    {
    public:
      //! Yaw Bias.
      fp32_t bias_psi;
      //! Gyro. Yaw Rate Bias.
      fp32_t bias_r;
      //! Course Over Ground.
      fp32_t cog;
      //! Continuous Yaw.
      fp32_t cyaw;
      //! GPS Rejection Filter Level.
      fp32_t lbl_rej_level;
      //! LBL Rejection Filter Level.
      fp32_t gps_rej_level;
      //! Variance - Custom Variable X.
      fp32_t custom_x;
      //! Variance - Custom Variable Y.
      fp32_t custom_y;
      //! Variance - Custom Variable Z.
      fp32_t custom_z;

      static uint16_t
      getIdStatic(void)
      {
        return 355;
      }

      NavigationData(void);

      uint16_t
      getId(void) const
      {
        return NavigationData::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "NavigationData";
      }

      Message*
      clone(void) const
      {
        return new NavigationData(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 36 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! GPS Fix Rejection.
    class GpsFixRejection: public Message
    {
    public:
      //! Reason.
      enum ReasonEnum
      {
        //! Above Threshold.
        RR_ABOVE_THRESHOLD = 0,
        //! Invalid Fix.
        RR_INVALID = 1,
        //! Above Maximum HDOP.
        RR_ABOVE_MAX_HDOP = 2,
        //! Above Maximum HACC.
        RR_ABOVE_MAX_HACC = 3,
        //! Lost Validity Bit.
        RR_LOST_VAL_BIT = 4
      };

      //! UTC Time of Fix.
      fp32_t utc_time;
      //! Reason.
      uint8_t reason;

      static uint16_t
      getIdStatic(void)
      {
        return 356;
      }

      GpsFixRejection(void);

      uint16_t
      getId(void) const
      {
        return GpsFixRejection::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "GpsFixRejection";
      }

      Message*
      clone(void) const
      {
        return new GpsFixRejection(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! LBL Range Acceptance.
    class LblRangeAcceptance: public Message
    {
    public:
      //! Acceptance.
      enum AcceptanceEnum
      {
        //! Accepted.
        RR_ACCEPTED = 0,
        //! Rejected - Above Threshold.
        RR_ABOVE_THRESHOLD = 1,
        //! Rejected - Singular Point.
        RR_SINGULAR = 2,
        //! Rejected - Not Enough Information.
        RR_NO_INFO = 3,
        //! Rejected - Vehicle At Surface.
        RR_AT_SURFACE = 4
      };

      //! Beacon Identification Number.
      uint8_t id;
      //! Range.
      fp32_t range;
      //! Acceptance.
      uint8_t acceptance;

      static uint16_t
      getIdStatic(void)
      {
        return 357;
      }

      LblRangeAcceptance(void);

      uint16_t
      getId(void) const
      {
        return LblRangeAcceptance::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LblRangeAcceptance";
      }

      Message*
      clone(void) const
      {
        return new LblRangeAcceptance(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 6 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      uint16_t
      getSubId(void) const;

      void
      setSubId(uint16_t subid);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! DVL Rejection.
    class DvlRejection: public Message
    {
    public:
      //! Reason.
      enum ReasonEnum
      {
        //! Innovation Threshold - X.
        RR_INNOV_THRESHOLD_X = 0,
        //! Innovation Threshold - Y.
        RR_INNOV_THRESHOLD_Y = 1,
        //! Absolute Threshold - X.
        RR_ABS_THRESHOLD_X = 2,
        //! Absolute Threshold - Y.
        RR_ABS_THRESHOLD_Y = 3
      };

      //! Type of velocity.
      enum TypeofvelocityBits
      {
        //! Ground velocity.
        TYPE_GV = 0x01,
        //! Water velocity.
        TYPE_WV = 0x02
      };

      //! Type of velocity.
      uint8_t type;
      //! Reason.
      uint8_t reason;
      //! Value.
      fp32_t value;
      //! Timestep.
      fp32_t timestep;

      static uint16_t
      getIdStatic(void)
      {
        return 358;
      }

      DvlRejection(void);

      uint16_t
      getId(void) const
      {
        return DvlRejection::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DvlRejection";
      }

      Message*
      clone(void) const
      {
        return new DvlRejection(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 10 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! LBL Beacon Position Estimate.
    class LblEstimate: public Message
    {
    public:
      //! LBL Beacon Configuration.
      InlineMessage<LblBeacon> beacon;
      //! North position.
      fp32_t x;
      //! East position.
      fp32_t y;
      //! North position variance.
      fp32_t var_x;
      //! East position variance.
      fp32_t var_y;
      //! Distance.
      fp32_t distance;

      static uint16_t
      getIdStatic(void)
      {
        return 360;
      }

      LblEstimate(void);

      uint16_t
      getId(void) const
      {
        return LblEstimate::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LblEstimate";
      }

      Message*
      clone(void) const
      {
        return new LblEstimate(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 20 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + beacon.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Alignment State.
    class AlignmentState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Not Aligned.
        AS_NOT_ALIGNED = 0,
        //! Aligned.
        AS_ALIGNED = 1,
        //! Not Supported.
        AS_NOT_SUPPORTED = 2
      };

      //! State.
      uint8_t state;

      static uint16_t
      getIdStatic(void)
      {
        return 361;
      }

      AlignmentState(void);

      uint16_t
      getId(void) const
      {
        return AlignmentState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AlignmentState";
      }

      Message*
      clone(void) const
      {
        return new AlignmentState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! GroupStreamVelocity.
    class GroupStreamVelocity: public Message
    {
    public:
      //! X component (North).
      fp64_t x;
      //! Y component (East).
      fp64_t y;
      //! Z component (Down).
      fp64_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 362;
      }

      GroupStreamVelocity(void);

      uint16_t
      getId(void) const
      {
        return GroupStreamVelocity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "GroupStreamVelocity";
      }

      Message*
      clone(void) const
      {
        return new GroupStreamVelocity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 24 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Control Command.
    class ControlCommand: public Message
    {
    public:
      ControlCommand(void);

      const char*
      getName(void) const
      {
        return "ControlCommand";
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Heading.
    class DesiredHeading: public ControlCommand
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 400;
      }

      DesiredHeading(void);

      uint16_t
      getId(void) const
      {
        return DesiredHeading::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredHeading";
      }

      Message*
      clone(void) const
      {
        return new DesiredHeading(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8 + ControlCommand::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return ControlCommand::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Z.
    class DesiredZ: public ControlCommand
    {
    public:
      //! Value.
      fp32_t value;
      //! Z Units.
      uint8_t z_units;

      static uint16_t
      getIdStatic(void)
      {
        return 401;
      }

      DesiredZ(void);

      uint16_t
      getId(void) const
      {
        return DesiredZ::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredZ";
      }

      Message*
      clone(void) const
      {
        return new DesiredZ(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5 + ControlCommand::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return ControlCommand::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Speed.
    class DesiredSpeed: public ControlCommand
    {
    public:
      //! Value.
      fp64_t value;
      //! Speed Units.
      uint8_t speed_units;

      static uint16_t
      getIdStatic(void)
      {
        return 402;
      }

      DesiredSpeed(void);

      uint16_t
      getId(void) const
      {
        return DesiredSpeed::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredSpeed";
      }

      Message*
      clone(void) const
      {
        return new DesiredSpeed(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 9 + ControlCommand::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return ControlCommand::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Roll.
    class DesiredRoll: public ControlCommand
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 403;
      }

      DesiredRoll(void);

      uint16_t
      getId(void) const
      {
        return DesiredRoll::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredRoll";
      }

      Message*
      clone(void) const
      {
        return new DesiredRoll(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8 + ControlCommand::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return ControlCommand::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Pitch.
    class DesiredPitch: public ControlCommand
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 404;
      }

      DesiredPitch(void);

      uint16_t
      getId(void) const
      {
        return DesiredPitch::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredPitch";
      }

      Message*
      clone(void) const
      {
        return new DesiredPitch(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8 + ControlCommand::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return ControlCommand::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Vertical Rate.
    class DesiredVerticalRate: public Message
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 405;
      }

      DesiredVerticalRate(void);

      uint16_t
      getId(void) const
      {
        return DesiredVerticalRate::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredVerticalRate";
      }

      Message*
      clone(void) const
      {
        return new DesiredVerticalRate(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Path.
    class DesiredPath: public ControlCommand
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Start Point.
        FL_START = 0x01,
        //! Direct.
        FL_DIRECT = 0x02,
        //! No Altitude/Depth control.
        FL_NO_Z = 0x04,
        //! 3D Tracking.
        FL_3DTRACK = 0x08,
        //! Counter-Clockwise loiter.
        FL_CCLOCKW = 0x10,
        //! Loiter from current position.
        FL_LOITER_CURR = 0x20,
        //! Takeoff.
        FL_TAKEOFF = 0x40,
        //! Land.
        FL_LAND = 0x80
      };

      //! Path Reference.
      uint32_t path_ref;
      //! Start Point -- Latitude WGS-84.
      fp64_t start_lat;
      //! Start Point -- WGS-84 Longitude.
      fp64_t start_lon;
      //! Start Point -- Z Reference.
      fp32_t start_z;
      //! Start Point -- Z Units.
      uint8_t start_z_units;
      //! End Point -- WGS84 Latitude.
      fp64_t end_lat;
      //! End Point -- WGS-84 Longitude.
      fp64_t end_lon;
      //! End Point -- Z Reference.
      fp32_t end_z;
      //! End Point -- Z Units.
      uint8_t end_z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Loiter -- Radius.
      fp32_t lradius;
      //! Flags.
      uint8_t flags;

      static uint16_t
      getIdStatic(void)
      {
        return 406;
      }

      DesiredPath(void);

      uint16_t
      getId(void) const
      {
        return DesiredPath::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredPath";
      }

      Message*
      clone(void) const
      {
        return new DesiredPath(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 56 + ControlCommand::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return ControlCommand::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Control.
    class DesiredControl: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Value of X is meaningful.
        FL_X = 0x01,
        //! Value of Y is meaningful.
        FL_Y = 0x02,
        //! Value of Z is meaningful.
        FL_Z = 0x04,
        //! Value of K is meaningful.
        FL_K = 0x08,
        //! Value of M is meaningful.
        FL_M = 0x10,
        //! Value of N is meaningful.
        FL_N = 0x20
      };

      //! Force along the x axis.
      fp64_t x;
      //! Force along the y axis.
      fp64_t y;
      //! Force along the z axis.
      fp64_t z;
      //! Torque about the x axis.
      fp64_t k;
      //! Torque about the y axis.
      fp64_t m;
      //! Torque about the z axis.
      fp64_t n;
      //! Flags.
      uint8_t flags;

      static uint16_t
      getIdStatic(void)
      {
        return 407;
      }

      DesiredControl(void);

      uint16_t
      getId(void) const
      {
        return DesiredControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredControl";
      }

      Message*
      clone(void) const
      {
        return new DesiredControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 49 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Heading Rate.
    class DesiredHeadingRate: public Message
    {
    public:
      //! Value.
      fp64_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 408;
      }

      DesiredHeadingRate(void);

      uint16_t
      getId(void) const
      {
        return DesiredHeadingRate::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredHeadingRate";
      }

      Message*
      clone(void) const
      {
        return new DesiredHeadingRate(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 8 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Desired Velocity.
    class DesiredVelocity: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Value of u is meaningful.
        FL_SURGE = 0x01,
        //! Value of v is meaningful.
        FL_SWAY = 0x02,
        //! Value of w is meaningful.
        FL_HEAVE = 0x04,
        //! Value of p is meaningful.
        FL_ROLL = 0x08,
        //! Value of q is meaningful.
        FL_PITCH = 0x10,
        //! Value of r is meaningful.
        FL_YAW = 0x20
      };

      //! Desired Linear Speed in xx.
      fp64_t u;
      //! Desired Linear Speed in yy.
      fp64_t v;
      //! Desired Linear Speed in zz.
      fp64_t w;
      //! Desired Angular Speed in xx.
      fp64_t p;
      //! Desired Angular Speed in yy.
      fp64_t q;
      //! Desired Angular Speed in zz.
      fp64_t r;
      //! Flags.
      uint8_t flags;

      static uint16_t
      getIdStatic(void)
      {
        return 409;
      }

      DesiredVelocity(void);

      uint16_t
      getId(void) const
      {
        return DesiredVelocity::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "DesiredVelocity";
      }

      Message*
      clone(void) const
      {
        return new DesiredVelocity(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 49 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Path Control State.
    class PathControlState: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Near Endpoint.
        FL_NEAR = 0x01,
        //! Loitering.
        FL_LOITERING = 0x02,
        //! No Altitude/Depth control.
        FL_NO_Z = 0x04,
        //! 3D Tracking.
        FL_3DTRACK = 0x08,
        //! Counter-Clockwise loiter.
        FL_CCLOCKW = 0x10
      };

      //! Path Reference.
      uint32_t path_ref;
      //! Start Point -- Latitude WGS-84.
      fp64_t start_lat;
      //! Start Point -- WGS-84 Longitude.
      fp64_t start_lon;
      //! Start Point -- Z Reference.
      fp32_t start_z;
      //! Start Point -- Z Units.
      uint8_t start_z_units;
      //! End Point -- Latitude WGS-84.
      fp64_t end_lat;
      //! End Point -- WGS-84 Longitude.
      fp64_t end_lon;
      //! End Point -- Z Reference.
      fp32_t end_z;
      //! End Point -- Z Units.
      uint8_t end_z_units;
      //! Loiter -- Radius.
      fp32_t lradius;
      //! Flags.
      uint8_t flags;
      //! Along Track Position.
      fp32_t x;
      //! Cross Track Position.
      fp32_t y;
      //! Vertical Track Position.
      fp32_t z;
      //! Along Track Velocity.
      fp32_t vx;
      //! Cross Track Velocity.
      fp32_t vy;
      //! Vertical Track Velocity.
      fp32_t vz;
      //! Course Error.
      fp32_t course_error;
      //! Estimated Time to Arrival (ETA).
      uint16_t eta;

      static uint16_t
      getIdStatic(void)
      {
        return 410;
      }

      PathControlState(void);

      uint16_t
      getId(void) const
      {
        return PathControlState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PathControlState";
      }

      Message*
      clone(void) const
      {
        return new PathControlState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 81 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Allocated Control Torques.
    class AllocatedControlTorques: public Message
    {
    public:
      //! Torque about the x axis.
      fp64_t k;
      //! Torque about the y axis.
      fp64_t m;
      //! Torque about the x axis.
      fp64_t n;

      static uint16_t
      getIdStatic(void)
      {
        return 411;
      }

      AllocatedControlTorques(void);

      uint16_t
      getId(void) const
      {
        return AllocatedControlTorques::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AllocatedControlTorques";
      }

      Message*
      clone(void) const
      {
        return new AllocatedControlTorques(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 24 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Control Parcel.
    class ControlParcel: public Message
    {
    public:
      //! Proportional Parcel.
      fp32_t p;
      //! Integrative Parcel.
      fp32_t i;
      //! Derivative Parcel.
      fp32_t d;
      //! Anti-Windup Parcel.
      fp32_t a;

      static uint16_t
      getIdStatic(void)
      {
        return 412;
      }

      ControlParcel(void);

      uint16_t
      getId(void) const
      {
        return ControlParcel::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ControlParcel";
      }

      Message*
      clone(void) const
      {
        return new ControlParcel(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 16 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Brake.
    class Brake: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Stop Braking.
        OP_STOP = 0,
        //! Start Braking.
        OP_START = 1
      };

      //! Operation.
      uint8_t op;

      static uint16_t
      getIdStatic(void)
      {
        return 413;
      }

      Brake(void);

      uint16_t
      getId(void) const
      {
        return Brake::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Brake";
      }

      Message*
      clone(void) const
      {
        return new Brake(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Maneuver.
    class Maneuver: public Message
    {
    public:
      //! Plan Reference.
      uint32_t plan_ref;
      //! Maneuver ID.
      std::string id;
      //! Memento.
      std::string memento;

      Maneuver(void);

      const char*
      getName(void) const
      {
        return "Maneuver";
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(id) + IMC::getSerializationSize(memento);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Goto Maneuver.
    class Goto: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Roll.
      fp64_t roll;
      //! Pitch.
      fp64_t pitch;
      //! Yaw.
      fp64_t yaw;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 450;
      }

      Goto(void);

      uint16_t
      getId(void) const
      {
        return Goto::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Goto";
      }

      Message*
      clone(void) const
      {
        return new Goto(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 52 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! PopUp Maneuver.
    class PopUp: public Maneuver
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Start from current position.
        FLG_CURR_POS = 0x01,
        //! Wait at surface.
        FLG_WAIT_AT_SURFACE = 0x02,
        //! Station keeping.
        FLG_STATION_KEEP = 0x04
      };

      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Duration.
      uint16_t duration;
      //! Radius.
      fp32_t radius;
      //! Flags.
      uint8_t flags;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 451;
      }

      PopUp(void);

      uint16_t
      getId(void) const
      {
        return PopUp::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PopUp";
      }

      Message*
      clone(void) const
      {
        return new PopUp(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 35 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Teleoperation Maneuver.
    class Teleoperation: public Maneuver
    {
    public:
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 452;
      }

      Teleoperation(void);

      uint16_t
      getId(void) const
      {
        return Teleoperation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Teleoperation";
      }

      Message*
      clone(void) const
      {
        return new Teleoperation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Loiter Maneuver.
    class Loiter: public Maneuver
    {
    public:
      //! Loiter Type.
      enum LoiterTypeEnum
      {
        //! Default.
        LT_DEFAULT = 0,
        //! Circular.
        LT_CIRCULAR = 1,
        //! Race track.
        LT_RACETRACK = 2,
        //! Figure 8.
        LT_EIGHT = 3,
        //! Hover.
        LT_HOVER = 4
      };

      //! Direction.
      enum DirectionEnum
      {
        //! Vehicle Dependent.
        LD_VDEP = 0,
        //! Clockwise.
        LD_CLOCKW = 1,
        //! Counter Clockwise.
        LD_CCLOCKW = 2,
        //! Into the wind/current.
        LD_IWINDCURR = 3
      };

      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Duration.
      uint16_t duration;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Loiter Type.
      uint8_t type;
      //! Radius.
      fp32_t radius;
      //! Length.
      fp32_t length;
      //! Bearing.
      fp64_t bearing;
      //! Direction.
      uint8_t direction;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 453;
      }

      Loiter(void);

      uint16_t
      getId(void) const
      {
        return Loiter::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Loiter";
      }

      Message*
      clone(void) const
      {
        return new Loiter(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 48 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Idle Maneuver.
    class IdleManeuver: public Maneuver
    {
    public:
      //! Duration.
      uint16_t duration;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 454;
      }

      IdleManeuver(void);

      uint16_t
      getId(void) const
      {
        return IdleManeuver::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "IdleManeuver";
      }

      Message*
      clone(void) const
      {
        return new IdleManeuver(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Low Level Control Maneuver.
    class LowLevelControl: public Maneuver
    {
    public:
      //! Control.
      InlineMessage<ControlCommand> control;
      //! Duration.
      uint16_t duration;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 455;
      }

      LowLevelControl(void);

      uint16_t
      getId(void) const
      {
        return LowLevelControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LowLevelControl";
      }

      Message*
      clone(void) const
      {
        return new LowLevelControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize() + control.getSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Rows Maneuver.
    class Rows: public Maneuver
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Square Curve.
        FLG_SQUARE_CURVE = 0x0001,
        //! First Curve Right.
        FLG_CURVE_RIGHT = 0x0002
      };

      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Bearing.
      fp64_t bearing;
      //! Cross Angle.
      fp64_t cross_angle;
      //! Width.
      fp32_t width;
      //! Length.
      fp32_t length;
      //! Horizontal Step.
      fp32_t hstep;
      //! Curve Offset.
      uint8_t coff;
      //! Alternation Parameter.
      uint8_t alternation;
      //! Flags.
      uint8_t flags;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 456;
      }

      Rows(void);

      uint16_t
      getId(void) const
      {
        return Rows::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Rows";
      }

      Message*
      clone(void) const
      {
        return new Rows(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 59 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Path Point.
    class PathPoint: public Message
    {
    public:
      //! North Offset (m).
      fp32_t x;
      //! East Offset (m).
      fp32_t y;
      //! Down Offset (m).
      fp32_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 458;
      }

      PathPoint(void);

      uint16_t
      getId(void) const
      {
        return PathPoint::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PathPoint";
      }

      Message*
      clone(void) const
      {
        return new PathPoint(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 12 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Follow Path Maneuver.
    class FollowPath: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Path Points.
      MessageList<PathPoint> points;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 457;
      }

      FollowPath(void);

      uint16_t
      getId(void) const
      {
        return FollowPath::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FollowPath";
      }

      Message*
      clone(void) const
      {
        return new FollowPath(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 28 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize() + points.getSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Yo-Yo Maneuver.
    class YoYo: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Amplitude.
      fp32_t amplitude;
      //! Pitch Angle.
      fp32_t pitch;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 459;
      }

      YoYo(void);

      uint16_t
      getId(void) const
      {
        return YoYo::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "YoYo";
      }

      Message*
      clone(void) const
      {
        return new YoYo(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 36 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Teleoperation Done.
    class TeleoperationDone: public Message
    {
    public:
      static uint16_t
      getIdStatic(void)
      {
        return 460;
      }

      TeleoperationDone(void);

      uint16_t
      getId(void) const
      {
        return TeleoperationDone::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TeleoperationDone";
      }

      Message*
      clone(void) const
      {
        return new TeleoperationDone(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Station Keeping.
    class StationKeeping: public Maneuver
    {
    public:
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Radius.
      fp32_t radius;
      //! Duration.
      uint16_t duration;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 461;
      }

      StationKeeping(void);

      uint16_t
      getId(void) const
      {
        return StationKeeping::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "StationKeeping";
      }

      Message*
      clone(void) const
      {
        return new StationKeeping(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 32 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Elevator Maneuver.
    class Elevator: public Maneuver
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Start from current position.
        FLG_CURR_POS = 0x01
      };

      //! Timeout.
      uint16_t timeout;
      //! Flags.
      uint8_t flags;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Start Point -- Z Reference.
      fp32_t start_z;
      //! Start Point -- Z Units.
      uint8_t start_z_units;
      //! End Point -- Z Reference.
      fp32_t end_z;
      //! End Point -- Z Units.
      uint8_t end_z_units;
      //! Radius.
      fp32_t radius;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 462;
      }

      Elevator(void);

      uint16_t
      getId(void) const
      {
        return Elevator::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Elevator";
      }

      Message*
      clone(void) const
      {
        return new Elevator(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 38 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Trajectory Point.
    class TrajectoryPoint: public Message
    {
    public:
      //! North Offset (m).
      fp32_t x;
      //! East Offset (m).
      fp32_t y;
      //! Down Offset (m).
      fp32_t z;
      //! Time Offset (s).
      fp32_t t;

      static uint16_t
      getIdStatic(void)
      {
        return 464;
      }

      TrajectoryPoint(void);

      uint16_t
      getId(void) const
      {
        return TrajectoryPoint::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TrajectoryPoint";
      }

      Message*
      clone(void) const
      {
        return new TrajectoryPoint(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 16 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Follow Trajectory.
    class FollowTrajectory: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Trajectory Points.
      MessageList<TrajectoryPoint> points;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 463;
      }

      FollowTrajectory(void);

      uint16_t
      getId(void) const
      {
        return FollowTrajectory::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FollowTrajectory";
      }

      Message*
      clone(void) const
      {
        return new FollowTrajectory(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 28 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize() + points.getSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Custom Maneuver.
    class CustomManeuver: public Maneuver
    {
    public:
      //! Timeout.
      uint16_t timeout;
      //! Maneuver Name.
      std::string name;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 465;
      }

      CustomManeuver(void);

      uint16_t
      getId(void) const
      {
        return CustomManeuver::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CustomManeuver";
      }

      Message*
      clone(void) const
      {
        return new CustomManeuver(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize() + IMC::getSerializationSize(name) + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Vehicle Formation Participant.
    class VehicleFormationParticipant: public Message
    {
    public:
      //! ID (IMC address).
      uint16_t vid;
      //! Formation offset -- Along-track.
      fp32_t off_x;
      //! Formation offset -- Cross-track.
      fp32_t off_y;
      //! Formation offset -- Depth/Altitude.
      fp32_t off_z;

      static uint16_t
      getIdStatic(void)
      {
        return 467;
      }

      VehicleFormationParticipant(void);

      uint16_t
      getId(void) const
      {
        return VehicleFormationParticipant::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "VehicleFormationParticipant";
      }

      Message*
      clone(void) const
      {
        return new VehicleFormationParticipant(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 14 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Vehicle Formation.
    class VehicleFormation: public Maneuver
    {
    public:
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Trajectory Points.
      MessageList<TrajectoryPoint> points;
      //! Formation Participants.
      MessageList<VehicleFormationParticipant> participants;
      //! Start Time.
      fp64_t start_time;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 466;
      }

      VehicleFormation(void);

      uint16_t
      getId(void) const
      {
        return VehicleFormation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "VehicleFormation";
      }

      Message*
      clone(void) const
      {
        return new VehicleFormation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 34 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize() + points.getSerializationSize() + participants.getSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Stop Maneuver.
    class StopManeuver: public Message
    {
    public:
      static uint16_t
      getIdStatic(void)
      {
        return 468;
      }

      StopManeuver(void);

      uint16_t
      getId(void) const
      {
        return StopManeuver::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "StopManeuver";
      }

      Message*
      clone(void) const
      {
        return new StopManeuver(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Register Maneuver.
    class RegisterManeuver: public Message
    {
    public:
      //! Maneuver ID.
      uint16_t mid;

      static uint16_t
      getIdStatic(void)
      {
        return 469;
      }

      RegisterManeuver(void);

      uint16_t
      getId(void) const
      {
        return RegisterManeuver::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RegisterManeuver";
      }

      Message*
      clone(void) const
      {
        return new RegisterManeuver(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Maneuver Control State.
    class ManeuverControlState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Maneuver in progress.
        MCS_EXECUTING = 0,
        //! Maneuver completed.
        MCS_DONE = 1,
        //! Maneuver error.
        MCS_ERROR = 2,
        //! Maneuver stopped.
        MCS_STOPPED = 3
      };

      //! State.
      uint8_t state;
      //! Completion Time.
      uint16_t eta;
      //! Info.
      std::string info;

      static uint16_t
      getIdStatic(void)
      {
        return 470;
      }

      ManeuverControlState(void);

      uint16_t
      getId(void) const
      {
        return ManeuverControlState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ManeuverControlState";
      }

      Message*
      clone(void) const
      {
        return new ManeuverControlState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 3 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Follow System.
    class FollowSystem: public Maneuver
    {
    public:
      //! System To Follow.
      uint16_t system;
      //! Duration.
      uint16_t duration;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Offset -- X.
      fp32_t x;
      //! Offset -- Y.
      fp32_t y;
      //! Coordinate -- Z.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;

      static uint16_t
      getIdStatic(void)
      {
        return 471;
      }

      FollowSystem(void);

      uint16_t
      getId(void) const
      {
        return FollowSystem::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FollowSystem";
      }

      Message*
      clone(void) const
      {
        return new FollowSystem(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 22 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Communications Relay.
    class CommsRelay: public Maneuver
    {
    public:
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Duration.
      uint16_t duration;
      //! System A.
      uint16_t sys_a;
      //! System B.
      uint16_t sys_b;
      //! Move threshold.
      fp32_t move_threshold;

      static uint16_t
      getIdStatic(void)
      {
        return 472;
      }

      CommsRelay(void);

      uint16_t
      getId(void) const
      {
        return CommsRelay::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CommsRelay";
      }

      Message*
      clone(void) const
      {
        return new CommsRelay(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 31 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Polygon Vertex.
    class PolygonVertex: public Message
    {
    public:
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;

      static uint16_t
      getIdStatic(void)
      {
        return 474;
      }

      PolygonVertex(void);

      uint16_t
      getId(void) const
      {
        return PolygonVertex::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PolygonVertex";
      }

      Message*
      clone(void) const
      {
        return new PolygonVertex(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 16 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Cover Area.
    class CoverArea: public Maneuver
    {
    public:
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Polygon.
      MessageList<PolygonVertex> polygon;
      //! CustomParameters.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 473;
      }

      CoverArea(void);

      uint16_t
      getId(void) const
      {
        return CoverArea::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CoverArea";
      }

      Message*
      clone(void) const
      {
        return new CoverArea(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 26 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize() + polygon.getSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Compass Calibration Maneuver.
    class CompassCalibration: public Maneuver
    {
    public:
      //! Direction.
      enum DirectionEnum
      {
        //! Vehicle Dependent.
        LD_VDEP = 0,
        //! Clockwise.
        LD_CLOCKW = 1,
        //! Counter Clockwise.
        LD_CCLOCKW = 2,
        //! Into the wind/current.
        LD_IWINDCURR = 3
      };

      //! Timeout.
      uint16_t timeout;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Pitch.
      fp32_t pitch;
      //! Amplitude.
      fp32_t amplitude;
      //! Duration.
      uint16_t duration;
      //! Speed.
      fp32_t speed;
      //! Speed Units.
      uint8_t speed_units;
      //! Radius.
      fp32_t radius;
      //! Direction.
      uint8_t direction;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 475;
      }

      CompassCalibration(void);

      uint16_t
      getId(void) const
      {
        return CompassCalibration::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CompassCalibration";
      }

      Message*
      clone(void) const
      {
        return new CompassCalibration(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 43 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Formation Parameters.
    class FormationParameters: public Message
    {
    public:
      //! Formation Reference Frame.
      enum FormationReferenceFrameEnum
      {
        //! Earth Fixed.
        OP_EARTH_FIXED = 0,
        //! Path Fixed.
        OP_PATH_FIXED = 1,
        //! Path Curved.
        OP_PATH_CURVED = 2
      };

      //! Formation Name.
      std::string formation_name;
      //! Formation Reference Frame.
      uint8_t reference_frame;
      //! Formation Participants.
      MessageList<VehicleFormationParticipant> participants;
      //! Custom settings for formation.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 476;
      }

      FormationParameters(void);

      uint16_t
      getId(void) const
      {
        return FormationParameters::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FormationParameters";
      }

      Message*
      clone(void) const
      {
        return new FormationParameters(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(formation_name) + participants.getSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Formation Plan Execution.
    class FormationPlanExecution: public Maneuver
    {
    public:
      //! Target Group Name.
      std::string group_name;
      //! Formation Name.
      std::string formation_name;
      //! Formation Plan ID.
      std::string plan_id;
      //! Plan Description.
      std::string description;
      //! Formation Leader Flight Airspeed.
      fp32_t leader_speed;
      //! Formation leader flight bank limit.
      fp32_t leader_bank_lim;
      //! Position mismatch limit.
      fp32_t pos_sim_err_lim;
      //! Position mismatch threshold.
      fp32_t pos_sim_err_wrn;
      //! Position mismatch time-out.
      uint16_t pos_sim_err_timeout;
      //! Convergence threshold.
      fp32_t converg_max;
      //! Convergence time-out.
      uint16_t converg_timeout;
      //! Communications time-out.
      uint16_t comms_timeout;
      //! Turbulence limit.
      fp32_t turb_lim;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 477;
      }

      FormationPlanExecution(void);

      uint16_t
      getId(void) const
      {
        return FormationPlanExecution::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FormationPlanExecution";
      }

      Message*
      clone(void) const
      {
        return new FormationPlanExecution(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 30 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize() + IMC::getSerializationSize(group_name) + IMC::getSerializationSize(formation_name) + IMC::getSerializationSize(plan_id) + IMC::getSerializationSize(description) + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Follow Reference Maneuver.
    class FollowReference: public Maneuver
    {
    public:
      //! Controlling Source.
      uint16_t control_src;
      //! Controlling Entity.
      uint8_t control_ent;
      //! Reference Update Timeout.
      fp32_t timeout;
      //! Loiter Radius.
      fp32_t loiter_radius;
      //! Altitude Interval.
      fp32_t altitude_interval;

      static uint16_t
      getIdStatic(void)
      {
        return 478;
      }

      FollowReference(void);

      uint16_t
      getId(void) const
      {
        return FollowReference::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FollowReference";
      }

      Message*
      clone(void) const
      {
        return new FollowReference(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 15 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Reference To Follow.
    class Reference: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Use Location Reference.
        FLAG_LOCATION = 0x01,
        //! Use Speed Reference.
        FLAG_SPEED = 0x02,
        //! Use Z Reference.
        FLAG_Z = 0x04,
        //! Use Radius Reference.
        FLAG_RADIUS = 0x08,
        //! Flag Maneuver Completion.
        FLAG_MANDONE = 0x80
      };

      //! Flags.
      uint8_t flags;
      //! Speed Reference.
      InlineMessage<DesiredSpeed> speed;
      //! Z Reference.
      InlineMessage<DesiredZ> z;
      //! Latitude Reference.
      fp64_t lat;
      //! Longitude Reference.
      fp64_t lon;
      //! Radius.
      fp32_t radius;

      static uint16_t
      getIdStatic(void)
      {
        return 479;
      }

      Reference(void);

      uint16_t
      getId(void) const
      {
        return Reference::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Reference";
      }

      Message*
      clone(void) const
      {
        return new Reference(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 21 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + speed.getSerializationSize() + z.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Follow Reference State.
    class FollowRefState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Waiting for first reference.
        FR_WAIT = 1,
        //! Going towards received reference.
        FR_GOTO = 2,
        //! Loitering after arriving at the reference.
        FR_LOITER = 3,
        //! Hovering after arriving at the reference.
        FR_HOVER = 4,
        //! Moving in z after arriving at the target cylinder.
        FR_ELEVATOR = 5,
        //! Controlling system timed out.
        FR_TIMEOUT = 6
      };

      //! Proximity.
      enum ProximityBits
      {
        //! Far from the destination.
        PROX_FAR = 0x01,
        //! Near in the horizontal plane.
        PROX_XY_NEAR = 0x02,
        //! Near in the vertical plane.
        PROX_Z_NEAR = 0x04
      };

      //! Controlling Source.
      uint16_t control_src;
      //! Controlling Entity.
      uint8_t control_ent;
      //! Reference.
      InlineMessage<Reference> reference;
      //! State.
      uint8_t state;
      //! Proximity.
      uint8_t proximity;

      static uint16_t
      getIdStatic(void)
      {
        return 480;
      }

      FollowRefState(void);

      uint16_t
      getId(void) const
      {
        return FollowRefState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FollowRefState";
      }

      Message*
      clone(void) const
      {
        return new FollowRefState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + reference.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Relative State.
    class RelativeState: public Message
    {
    public:
      //! System Identifier.
      std::string s_id;
      //! Distance.
      fp32_t dist;
      //! Position Error.
      fp32_t err;
      //! Control Importance.
      fp32_t ctrl_imp;
      //! Relative Direction X (North).
      fp32_t rel_dir_x;
      //! Relative Direction Y (East).
      fp32_t rel_dir_y;
      //! Relative Direction Z (Down).
      fp32_t rel_dir_z;
      //! X Position Error (North).
      fp32_t err_x;
      //! Y Position Error (East).
      fp32_t err_y;
      //! Z Position Error (Down).
      fp32_t err_z;
      //! X Position Error In Relative Frame (North).
      fp32_t rf_err_x;
      //! Y Position Error In Relative Frame (East).
      fp32_t rf_err_y;
      //! Z Position Error In Relative Frame (Down).
      fp32_t rf_err_z;
      //! X Velocity Error In Relative Frame (North).
      fp32_t rf_err_vx;
      //! Y Velocity Error In Relative Frame (East).
      fp32_t rf_err_vy;
      //! Z Velocity Error In Relative Frame (Down).
      fp32_t rf_err_vz;
      //! X Convergence Deviation (North).
      fp32_t ss_x;
      //! Y Convergence Deviation (East).
      fp32_t ss_y;
      //! Z Convergence Deviation (Down).
      fp32_t ss_z;
      //! X Virtual Error (North).
      fp32_t virt_err_x;
      //! Y Virtual Error (East).
      fp32_t virt_err_y;
      //! Z Virtual Error (Down).
      fp32_t virt_err_z;

      static uint16_t
      getIdStatic(void)
      {
        return 482;
      }

      RelativeState(void);

      uint16_t
      getId(void) const
      {
        return RelativeState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RelativeState";
      }

      Message*
      clone(void) const
      {
        return new RelativeState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 84 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(s_id);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Formation Monitoring Data.
    class FormationMonitor: public Message
    {
    public:
      //! Commanded X Acceleration (North).
      fp32_t ax_cmd;
      //! Commanded Y Acceleration (East).
      fp32_t ay_cmd;
      //! Commanded Z Acceleration (Down).
      fp32_t az_cmd;
      //! Desired X Acceleration (North).
      fp32_t ax_des;
      //! Desired Y Acceleration (East).
      fp32_t ay_des;
      //! Desired Z Acceleration (Down).
      fp32_t az_des;
      //! X Virtual Error (North).
      fp32_t virt_err_x;
      //! Y Virtual Error (East).
      fp32_t virt_err_y;
      //! Z Virtual Error (Down).
      fp32_t virt_err_z;
      //! X Sliding Surface Feedback (North).
      fp32_t surf_fdbk_x;
      //! Y Sliding Surface Feedback (East).
      fp32_t surf_fdbk_y;
      //! Z Sliding Surface Feedback (Down).
      fp32_t surf_fdbk_z;
      //! X Uncertainty Compensation (North).
      fp32_t surf_unkn_x;
      //! Y Uncertainty Compensation (East).
      fp32_t surf_unkn_y;
      //! Z Uncertainty Compensation (Down).
      fp32_t surf_unkn_z;
      //! X Convergence Deviation (North).
      fp32_t ss_x;
      //! Y Convergence Deviation (East).
      fp32_t ss_y;
      //! Z Convergence Deviation (Down).
      fp32_t ss_z;
      //! Relative State.
      MessageList<RelativeState> rel_state;

      static uint16_t
      getIdStatic(void)
      {
        return 481;
      }

      FormationMonitor(void);

      uint16_t
      getId(void) const
      {
        return FormationMonitor::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FormationMonitor";
      }

      Message*
      clone(void) const
      {
        return new FormationMonitor(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 72 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + rel_state.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Dislodge Maneuver.
    class Dislodge: public Maneuver
    {
    public:
      //! Direction.
      enum DirectionEnum
      {
        //! Let the vehicle decide.
        DIR_AUTO = 0,
        //! Attempt to move forward.
        DIR_FORWARD = 1,
        //! Attempt to move backward.
        DIR_BACKWARD = 2
      };

      //! Timeout.
      uint16_t timeout;
      //! RPM.
      fp32_t rpm;
      //! Direction.
      uint8_t direction;
      //! Custom settings for maneuver.
      std::string custom;

      static uint16_t
      getIdStatic(void)
      {
        return 483;
      }

      Dislodge(void);

      uint16_t
      getId(void) const
      {
        return Dislodge::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Dislodge";
      }

      Message*
      clone(void) const
      {
        return new Dislodge(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 7 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize() + IMC::getSerializationSize(custom);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Maneuver Memento.
    class Memento: public Maneuver
    {
    public:
      static uint16_t
      getIdStatic(void)
      {
        return 484;
      }

      Memento(void);

      uint16_t
      getId(void) const
      {
        return Memento::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Memento";
      }

      Message*
      clone(void) const
      {
        return new Memento(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Maneuver::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Maneuver::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Vehicle State.
    class VehicleState: public Message
    {
    public:
      //! Operation Mode.
      enum OperationModeEnum
      {
        //! Service.
        VS_SERVICE = 0,
        //! Calibration.
        VS_CALIBRATION = 1,
        //! Error.
        VS_ERROR = 2,
        //! Maneuver.
        VS_MANEUVER = 3,
        //! External Control.
        VS_EXTERNAL = 4,
        //! Boot.
        VS_BOOT = 5
      };

      //! Flags.
      enum FlagsBits
      {
        //! Maneuver Done.
        VFLG_MANEUVER_DONE = 0x01
      };

      //! Operation Mode.
      uint8_t op_mode;
      //! Errors -- Count.
      uint8_t error_count;
      //! Errors -- Entities.
      std::string error_ents;
      //! Maneuver -- Type.
      uint16_t maneuver_type;
      //! Maneuver -- Start Time.
      fp64_t maneuver_stime;
      //! Maneuver -- ETA.
      uint16_t maneuver_eta;
      //! Control Loops.
      uint32_t control_loops;
      //! Flags.
      uint8_t flags;
      //! Last Error -- Description.
      std::string last_error;
      //! Last Error -- Time.
      fp64_t last_error_time;

      static uint16_t
      getIdStatic(void)
      {
        return 500;
      }

      VehicleState(void);

      uint16_t
      getId(void) const
      {
        return VehicleState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "VehicleState";
      }

      Message*
      clone(void) const
      {
        return new VehicleState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 27 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(error_ents) + IMC::getSerializationSize(last_error);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Vehicle Command.
    class VehicleCommand: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Request.
        VC_REQUEST = 0,
        //! Reply -- Success.
        VC_SUCCESS = 1,
        //! Reply -- In Progress.
        VC_IN_PROGRESS = 2,
        //! Reply -- Failure.
        VC_FAILURE = 3
      };

      //! Command.
      enum CommandEnum
      {
        //! Execute Maneuver.
        VC_EXEC_MANEUVER = 0,
        //! Stop Maneuver.
        VC_STOP_MANEUVER = 1,
        //! Start Calibration.
        VC_START_CALIBRATION = 2,
        //! Stop Calibration.
        VC_STOP_CALIBRATION = 3
      };

      //! Type.
      uint8_t type;
      //! Request ID.
      uint16_t request_id;
      //! Command.
      uint8_t command;
      //! Maneuver.
      InlineMessage<Maneuver> maneuver;
      //! Calibration Time.
      uint16_t calib_time;
      //! Info.
      std::string info;

      static uint16_t
      getIdStatic(void)
      {
        return 501;
      }

      VehicleCommand(void);

      uint16_t
      getId(void) const
      {
        return VehicleCommand::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "VehicleCommand";
      }

      Message*
      clone(void) const
      {
        return new VehicleCommand(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 6 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + maneuver.getSerializationSize() + IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Monitor Entity State.
    class MonitorEntityState: public Message
    {
    public:
      //! Command.
      enum CommandEnum
      {
        //! Reset to defaults.
        MES_RESET = 0,
        //! Enable Monitoring.
        MES_ENABLE = 1,
        //! Disable Monitoring.
        MES_DISABLE = 2,
        //! Enable Monitoring (exclusive - disables all others).
        MES_ENABLE_EXCLUSIVE = 3,
        //! Status Report.
        MES_STATUS = 4
      };

      //! Command.
      uint8_t command;
      //! Entity Names.
      std::string entities;

      static uint16_t
      getIdStatic(void)
      {
        return 502;
      }

      MonitorEntityState(void);

      uint16_t
      getId(void) const
      {
        return MonitorEntityState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "MonitorEntityState";
      }

      Message*
      clone(void) const
      {
        return new MonitorEntityState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(entities);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Entity Monitoring State.
    class EntityMonitoringState: public Message
    {
    public:
      //! Entities monitored - Count.
      uint8_t mcount;
      //! Entities monitored - Names.
      std::string mnames;
      //! Entities with errors - Count.
      uint8_t ecount;
      //! Entities with errors - Names.
      std::string enames;
      //! Entities with critical errors - Count.
      uint8_t ccount;
      //! Entities with critical errors - Names.
      std::string cnames;
      //! Last Error -- Description.
      std::string last_error;
      //! Last Error -- Time.
      fp64_t last_error_time;

      static uint16_t
      getIdStatic(void)
      {
        return 503;
      }

      EntityMonitoringState(void);

      uint16_t
      getId(void) const
      {
        return EntityMonitoringState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EntityMonitoringState";
      }

      Message*
      clone(void) const
      {
        return new EntityMonitoringState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 11 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(mnames) + IMC::getSerializationSize(enames) + IMC::getSerializationSize(cnames) + IMC::getSerializationSize(last_error);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Operational Limits.
    class OperationalLimits: public Message
    {
    public:
      //! Field Indicator Mask.
      uint8_t mask;
      //! Maximum Depth.
      fp32_t max_depth;
      //! Minimum Altitude.
      fp32_t min_altitude;
      //! Maximum Altitude.
      fp32_t max_altitude;
      //! Minimum Speed.
      fp32_t min_speed;
      //! Maximum Speed.
      fp32_t max_speed;
      //! Maximum Vertical Rate.
      fp32_t max_vrate;
      //! Area -- WGS-84 Latitude.
      fp64_t lat;
      //! Area -- WGS-84 Longitude.
      fp64_t lon;
      //! Area -- Orientation.
      fp32_t orientation;
      //! Area -- Width.
      fp32_t width;
      //! Area -- Length.
      fp32_t length;

      static uint16_t
      getIdStatic(void)
      {
        return 504;
      }

      OperationalLimits(void);

      uint16_t
      getId(void) const
      {
        return OperationalLimits::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "OperationalLimits";
      }

      Message*
      clone(void) const
      {
        return new OperationalLimits(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 53 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Get Operational Limits.
    class GetOperationalLimits: public Message
    {
    public:
      static uint16_t
      getIdStatic(void)
      {
        return 505;
      }

      GetOperationalLimits(void);

      uint16_t
      getId(void) const
      {
        return GetOperationalLimits::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "GetOperationalLimits";
      }

      Message*
      clone(void) const
      {
        return new GetOperationalLimits(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Calibration.
    class Calibration: public Message
    {
    public:
      //! Duration.
      uint16_t duration;

      static uint16_t
      getIdStatic(void)
      {
        return 506;
      }

      Calibration(void);

      uint16_t
      getId(void) const
      {
        return Calibration::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Calibration";
      }

      Message*
      clone(void) const
      {
        return new Calibration(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Control Loops.
    class ControlLoops: public Message
    {
    public:
      //! Enable.
      enum EnableEnum
      {
        //! Disable.
        CL_DISABLE = 0,
        //! Enable.
        CL_ENABLE = 1
      };

      //! Enable.
      uint8_t enable;
      //! Control Loop Mask.
      uint32_t mask;
      //! Scope Time Reference.
      uint32_t scope_ref;

      static uint16_t
      getIdStatic(void)
      {
        return 507;
      }

      ControlLoops(void);

      uint16_t
      getId(void) const
      {
        return ControlLoops::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ControlLoops";
      }

      Message*
      clone(void) const
      {
        return new ControlLoops(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 9 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Vehicle Medium.
    class VehicleMedium: public Message
    {
    public:
      //! Medium.
      enum MediumEnum
      {
        //! Ground.
        VM_GROUND = 0,
        //! Air.
        VM_AIR = 1,
        //! Water.
        VM_WATER = 2,
        //! Underwater.
        VM_UNDERWATER = 3,
        //! Unknown.
        VM_UNKNOWN = 4
      };

      //! Medium.
      uint8_t medium;

      static uint16_t
      getIdStatic(void)
      {
        return 508;
      }

      VehicleMedium(void);

      uint16_t
      getId(void) const
      {
        return VehicleMedium::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "VehicleMedium";
      }

      Message*
      clone(void) const
      {
        return new VehicleMedium(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Collision.
    class Collision: public Message
    {
    public:
      //! Type.
      enum TypeBits
      {
        //! X-axis.
        CD_X = 0x01,
        //! Y-axis.
        CD_Y = 0x02,
        //! Z-axis.
        CD_Z = 0x04,
        //! Impact.
        CD_IMPACT = 0x08
      };

      //! Collision value.
      fp32_t value;
      //! Type.
      uint8_t type;

      static uint16_t
      getIdStatic(void)
      {
        return 509;
      }

      Collision(void);

      uint16_t
      getId(void) const
      {
        return Collision::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Collision";
      }

      Message*
      clone(void) const
      {
        return new Collision(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Formation Tracking State.
    class FormState: public Message
    {
    public:
      //! Position Mismatch Monitor.
      enum PositionMismatchMonitorEnum
      {
        //! Ok.
        POS_OK = 0,
        //! Warning threshold.
        POS_WRN = 1,
        //! Limit threshold.
        POS_LIM = 2
      };

      //! Communications Monitor.
      enum CommunicationsMonitorEnum
      {
        //! Ok.
        COMMS_OK = 0,
        //! Timeout.
        COMMS_TIMEOUT = 1
      };

      //! Convergence.
      enum ConvergenceEnum
      {
        //! Ok.
        CONV_OK = 0,
        //! Timeout.
        CONV_TIMEOUT = 1
      };

      //! Position Mismatch.
      fp32_t possimerr;
      //! Convergence.
      fp32_t converg;
      //! Stream Turbulence.
      fp32_t turbulence;
      //! Position Mismatch Monitor.
      uint8_t possimmon;
      //! Communications Monitor.
      uint8_t commmon;
      //! Convergence.
      uint8_t convergmon;

      static uint16_t
      getIdStatic(void)
      {
        return 510;
      }

      FormState(void);

      uint16_t
      getId(void) const
      {
        return FormState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FormState";
      }

      Message*
      clone(void) const
      {
        return new FormState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 15 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Autopilot Mode.
    class AutopilotMode: public Message
    {
    public:
      //! Autonomy Level.
      enum AutonomyLevelEnum
      {
        //! Manual.
        AL_MANUAL = 0,
        //! Assisted.
        AL_ASSISTED = 1,
        //! Auto.
        AL_AUTO = 2
      };

      //! Autonomy Level.
      uint8_t autonomy;
      //! Mode.
      std::string mode;

      static uint16_t
      getIdStatic(void)
      {
        return 511;
      }

      AutopilotMode(void);

      uint16_t
      getId(void) const
      {
        return AutopilotMode::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "AutopilotMode";
      }

      Message*
      clone(void) const
      {
        return new AutopilotMode(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(mode);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Abort.
    class Abort: public Message
    {
    public:
      static uint16_t
      getIdStatic(void)
      {
        return 550;
      }

      Abort(void);

      uint16_t
      getId(void) const
      {
        return Abort::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Abort";
      }

      Message*
      clone(void) const
      {
        return new Abort(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Plan Variable.
    class PlanVariable: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Boolean.
        PVT_BOOLEAN = 0,
        //! Number.
        PVT_NUMBER = 1,
        //! Text.
        PVT_TEXT = 2,
        //! Message.
        PVT_MESSAGE = 3
      };

      //! Access Type.
      enum AccessTypeEnum
      {
        //! Input.
        PVA_INPUT = 0,
        //! Output.
        PVA_OUTPUT = 1,
        //! Local.
        PVA_LOCAL = 2
      };

      //! Name.
      std::string name;
      //! Value.
      std::string value;
      //! Type.
      uint8_t type;
      //! Access Type.
      uint8_t access;

      static uint16_t
      getIdStatic(void)
      {
        return 561;
      }

      PlanVariable(void);

      uint16_t
      getId(void) const
      {
        return PlanVariable::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanVariable";
      }

      Message*
      clone(void) const
      {
        return new PlanVariable(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(name) + IMC::getSerializationSize(value);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Plan Maneuver.
    class PlanManeuver: public Message
    {
    public:
      //! Maneuver ID.
      std::string maneuver_id;
      //! Maneuver Specification.
      InlineMessage<Maneuver> data;
      //! Start Actions.
      MessageList<Message> start_actions;
      //! End Actions.
      MessageList<Message> end_actions;

      static uint16_t
      getIdStatic(void)
      {
        return 552;
      }

      PlanManeuver(void);

      uint16_t
      getId(void) const
      {
        return PlanManeuver::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanManeuver";
      }

      Message*
      clone(void) const
      {
        return new PlanManeuver(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(maneuver_id) + data.getSerializationSize() + start_actions.getSerializationSize() + end_actions.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Plan Transition.
    class PlanTransition: public Message
    {
    public:
      //! Source.
      std::string source_man;
      //! Destination Maneuver Name.
      std::string dest_man;
      //! Transition conditions.
      std::string conditions;
      //! Transition actions.
      MessageList<Message> actions;

      static uint16_t
      getIdStatic(void)
      {
        return 553;
      }

      PlanTransition(void);

      uint16_t
      getId(void) const
      {
        return PlanTransition::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanTransition";
      }

      Message*
      clone(void) const
      {
        return new PlanTransition(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(source_man) + IMC::getSerializationSize(dest_man) + IMC::getSerializationSize(conditions) + actions.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Plan Specification.
    class PlanSpecification: public Message
    {
    public:
      //! Plan ID.
      std::string plan_id;
      //! Plan Description.
      std::string description;
      //! Namespace.
      std::string vnamespace;
      //! Plan Variables.
      MessageList<PlanVariable> variables;
      //! Starting maneuver.
      std::string start_man_id;
      //! Maneuvers.
      MessageList<PlanManeuver> maneuvers;
      //! Transitions.
      MessageList<PlanTransition> transitions;
      //! Start Actions.
      MessageList<Message> start_actions;
      //! End Actions.
      MessageList<Message> end_actions;

      static uint16_t
      getIdStatic(void)
      {
        return 551;
      }

      PlanSpecification(void);

      uint16_t
      getId(void) const
      {
        return PlanSpecification::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanSpecification";
      }

      Message*
      clone(void) const
      {
        return new PlanSpecification(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(plan_id) + IMC::getSerializationSize(description) + IMC::getSerializationSize(vnamespace) + variables.getSerializationSize() + IMC::getSerializationSize(start_man_id) + maneuvers.getSerializationSize() + transitions.getSerializationSize() + start_actions.getSerializationSize() + end_actions.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Emergency Control.
    class EmergencyControl: public Message
    {
    public:
      //! Command.
      enum CommandEnum
      {
        //! Enable.
        ECTL_ENABLE = 0,
        //! Disable.
        ECTL_DISABLE = 1,
        //! Start.
        ECTL_START = 2,
        //! Stop.
        ECTL_STOP = 3,
        //! Query.
        ECTL_QUERY = 4,
        //! Set Plan.
        ECTL_SET_PLAN = 5
      };

      //! Command.
      uint8_t command;
      //! Plan Specification.
      InlineMessage<PlanSpecification> plan;

      static uint16_t
      getIdStatic(void)
      {
        return 554;
      }

      EmergencyControl(void);

      uint16_t
      getId(void) const
      {
        return EmergencyControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EmergencyControl";
      }

      Message*
      clone(void) const
      {
        return new EmergencyControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + plan.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Emergency Control State.
    class EmergencyControlState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Not Configured.
        ECS_NOT_CONFIGURED = 0,
        //! Disabled.
        ECS_DISABLED = 1,
        //! Enabled.
        ECS_ENABLED = 2,
        //! Armed.
        ECS_ARMED = 3,
        //! Active.
        ECS_ACTIVE = 4,
        //! Stopping.
        ECS_STOPPING = 5
      };

      //! State.
      uint8_t state;
      //! Plan Id.
      std::string plan_id;
      //! Communications Level.
      uint8_t comm_level;

      static uint16_t
      getIdStatic(void)
      {
        return 555;
      }

      EmergencyControlState(void);

      uint16_t
      getId(void) const
      {
        return EmergencyControlState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EmergencyControlState";
      }

      Message*
      clone(void) const
      {
        return new EmergencyControlState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(plan_id);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Plan DB.
    class PlanDB: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Request.
        DBT_REQUEST = 0,
        //! Reply -- Success.
        DBT_SUCCESS = 1,
        //! Reply -- Failure.
        DBT_FAILURE = 2,
        //! Reply -- In Progress.
        DBT_IN_PROGRESS = 3
      };

      //! Data Type.
      enum DataTypeEnum
      {
        //! Plan.
        DBDT_PLAN = 0,
        //! Memento.
        DBDT_MEMENTO = 1
      };

      //! Operation.
      enum OperationEnum
      {
        //! Set Plan.
        DBOP_SET = 0,
        //! Delete Plan.
        DBOP_DEL = 1,
        //! Get Plan.
        DBOP_GET = 2,
        //! Get Plan Info.
        DBOP_GET_INFO = 3,
        //! Clear Database.
        DBOP_CLEAR = 4,
        //! Get Database State (Simple).
        DBOP_GET_STATE = 5,
        //! Get Database State (Detailed).
        DBOP_GET_DSTATE = 6,
        //! Boot Notification.
        DBOP_BOOT = 7
      };

      //! Type.
      uint8_t type;
      //! Data Type.
      uint8_t dt;
      //! Operation.
      uint8_t op;
      //! Request ID.
      uint16_t request_id;
      //! Plan ID.
      std::string plan_id;
      //! Argument.
      InlineMessage<Message> arg;
      //! Complementary Information.
      std::string info;

      static uint16_t
      getIdStatic(void)
      {
        return 556;
      }

      PlanDB(void);

      uint16_t
      getId(void) const
      {
        return PlanDB::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanDB";
      }

      Message*
      clone(void) const
      {
        return new PlanDB(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(plan_id) + arg.getSerializationSize() + IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Plan DB Information.
    class PlanDBInformation: public Message
    {
    public:
      //! Plan ID.
      std::string plan_id;
      //! Plan Size.
      uint16_t plan_size;
      //! Last Changed -- Time.
      fp64_t change_time;
      //! Last Change -- Source Address.
      uint16_t change_sid;
      //! Last Change -- Source Name.
      std::string change_sname;
      //! MD5.
      std::vector<char> md5;

      static uint16_t
      getIdStatic(void)
      {
        return 558;
      }

      PlanDBInformation(void);

      uint16_t
      getId(void) const
      {
        return PlanDBInformation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanDBInformation";
      }

      Message*
      clone(void) const
      {
        return new PlanDBInformation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 12 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(plan_id) + IMC::getSerializationSize(change_sname) + IMC::getSerializationSize(md5);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Plan DB State.
    class PlanDBState: public Message
    {
    public:
      //! Plan -- Count.
      uint16_t plan_count;
      //! Plan -- Size of all plans.
      uint32_t plan_size;
      //! Last Change -- Time.
      fp64_t change_time;
      //! Last Change -- Source Address.
      uint16_t change_sid;
      //! Last Change -- Source Name.
      std::string change_sname;
      //! MD5.
      std::vector<char> md5;
      //! Plan info.
      MessageList<PlanDBInformation> plans_info;

      static uint16_t
      getIdStatic(void)
      {
        return 557;
      }

      PlanDBState(void);

      uint16_t
      getId(void) const
      {
        return PlanDBState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanDBState";
      }

      Message*
      clone(void) const
      {
        return new PlanDBState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 16 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(change_sname) + IMC::getSerializationSize(md5) + plans_info.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Plan Control.
    class PlanControl: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Request.
        PC_REQUEST = 0,
        //! Reply -- Success.
        PC_SUCCESS = 1,
        //! Reply -- Failure.
        PC_FAILURE = 2,
        //! Reply -- In Progress.
        PC_IN_PROGRESS = 3
      };

      //! Operation.
      enum OperationEnum
      {
        //! Start Plan.
        PC_START = 0,
        //! Stop Plan.
        PC_STOP = 1,
        //! Load Plan.
        PC_LOAD = 2,
        //! Get Plan.
        PC_GET = 3
      };

      //! Flags.
      enum FlagsBits
      {
        //! Calibrate Vehicle.
        FLG_CALIBRATE = 0x0001,
        //! Ignore Errors.
        FLG_IGNORE_ERRORS = 0x0002
      };

      //! Type.
      uint8_t type;
      //! Operation.
      uint8_t op;
      //! Request ID.
      uint16_t request_id;
      //! Plan Identifier.
      std::string plan_id;
      //! Flags.
      uint16_t flags;
      //! Request/Reply Argument.
      InlineMessage<Message> arg;
      //! Complementary Info.
      std::string info;

      static uint16_t
      getIdStatic(void)
      {
        return 559;
      }

      PlanControl(void);

      uint16_t
      getId(void) const
      {
        return PlanControl::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanControl";
      }

      Message*
      clone(void) const
      {
        return new PlanControl(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 6 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(plan_id) + arg.getSerializationSize() + IMC::getSerializationSize(info);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Plan Control State.
    class PlanControlState: public Message
    {
    public:
      //! State.
      enum StateEnum
      {
        //! Blocked.
        PCS_BLOCKED = 0,
        //! Ready.
        PCS_READY = 1,
        //! Initializing.
        PCS_INITIALIZING = 2,
        //! Executing.
        PCS_EXECUTING = 3
      };

      //! Last Plan Outcome.
      enum LastPlanOutcomeEnum
      {
        //! None.
        LPO_NONE = 0,
        //! Success.
        LPO_SUCCESS = 1,
        //! Failure.
        LPO_FAILURE = 2
      };

      //! State.
      uint8_t state;
      //! Plan -- ID.
      std::string plan_id;
      //! Plan -- ETA.
      int32_t plan_eta;
      //! Plan -- Progress.
      fp32_t plan_progress;
      //! Maneuver -- ID.
      std::string man_id;
      //! Maneuver -- Type.
      uint16_t man_type;
      //! Maneuver -- ETA.
      int32_t man_eta;
      //! Last Plan Outcome.
      uint8_t last_outcome;

      static uint16_t
      getIdStatic(void)
      {
        return 560;
      }

      PlanControlState(void);

      uint16_t
      getId(void) const
      {
        return PlanControlState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanControlState";
      }

      Message*
      clone(void) const
      {
        return new PlanControlState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 16 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(plan_id) + IMC::getSerializationSize(man_id);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Plan Generation.
    class PlanGeneration: public Message
    {
    public:
      //! Command.
      enum CommandEnum
      {
        //! Generate.
        CMD_GENERATE = 0,
        //! Execute.
        CMD_EXECUTE = 1
      };

      //! Operation.
      enum OperationEnum
      {
        //! Request.
        OP_REQUEST = 0,
        //! Error.
        OP_ERROR = 1,
        //! Success.
        OP_SUCCESS = 2
      };

      //! Command.
      uint8_t cmd;
      //! Operation.
      uint8_t op;
      //! Plan Identifier.
      std::string plan_id;
      //! Parameters.
      std::string params;

      static uint16_t
      getIdStatic(void)
      {
        return 562;
      }

      PlanGeneration(void);

      uint16_t
      getId(void) const
      {
        return PlanGeneration::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanGeneration";
      }

      Message*
      clone(void) const
      {
        return new PlanGeneration(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(plan_id) + IMC::getSerializationSize(params);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Leader State.
    class LeaderState: public Message
    {
    public:
      //! Action on the leader state.
      enum ActionontheleaderstateEnum
      {
        //! Request.
        OP_REQUEST = 0,
        //! Set.
        OP_SET = 1,
        //! Report.
        OP_REPORT = 2
      };

      //! Group Name.
      std::string group_name;
      //! Action on the leader state.
      uint8_t op;
      //! Latitude (WGS-84).
      fp64_t lat;
      //! Longitude (WGS-84).
      fp64_t lon;
      //! Height (WGS-84).
      fp32_t height;
      //! Offset north.
      fp32_t x;
      //! Offset east.
      fp32_t y;
      //! Offset down.
      fp32_t z;
      //! Rotation over x axis.
      fp32_t phi;
      //! Rotation over y axis.
      fp32_t theta;
      //! Rotation over z axis.
      fp32_t psi;
      //! Ground Velocity X (North).
      fp32_t vx;
      //! Ground Velocity Y (East).
      fp32_t vy;
      //! Ground Velocity Z (Down).
      fp32_t vz;
      //! Angular Velocity in x.
      fp32_t p;
      //! Angular Velocity in y.
      fp32_t q;
      //! Angular Velocity in z.
      fp32_t r;
      //! Stream Velocity X (North).
      fp32_t svx;
      //! Stream Velocity Y (East).
      fp32_t svy;
      //! Stream Velocity Z (Down).
      fp32_t svz;

      static uint16_t
      getIdStatic(void)
      {
        return 563;
      }

      LeaderState(void);

      uint16_t
      getId(void) const
      {
        return LeaderState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "LeaderState";
      }

      Message*
      clone(void) const
      {
        return new LeaderState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 81 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(group_name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Plan Statistics.
    class PlanStatistics: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Before Plan.
        TP_PREPLAN = 0,
        //! During Plan.
        TP_INPLAN = 1,
        //! After Plan.
        TP_POSTPLAN = 2
      };

      //! Properties.
      enum PropertiesBits
      {
        //! Basic Plan.
        PRP_BASIC = 0x00,
        //! Nonlinear.
        PRP_NONLINEAR = 0x01,
        //! Infinite.
        PRP_INFINITE = 0x02,
        //! Cyclical.
        PRP_CYCLICAL = 0x04,
        //! All.
        PRP_ALL = 0x07
      };

      //! Plan Identifier.
      std::string plan_id;
      //! Type.
      uint8_t type;
      //! Properties.
      uint8_t properties;
      //! Durations.
      std::string durations;
      //! Distances.
      std::string distances;
      //! Actions.
      std::string actions;
      //! Fuel.
      std::string fuel;

      static uint16_t
      getIdStatic(void)
      {
        return 564;
      }

      PlanStatistics(void);

      uint16_t
      getId(void) const
      {
        return PlanStatistics::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanStatistics";
      }

      Message*
      clone(void) const
      {
        return new PlanStatistics(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 2 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(plan_id) + IMC::getSerializationSize(durations) + IMC::getSerializationSize(distances) + IMC::getSerializationSize(actions) + IMC::getSerializationSize(fuel);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Plan Memento.
    class PlanMemento: public Message
    {
    public:
      //! ID.
      std::string id;
      //! Plan ID.
      std::string plan_id;
      //! Maneuver ID.
      std::string maneuver_id;
      //! Memento.
      std::string memento;

      static uint16_t
      getIdStatic(void)
      {
        return 565;
      }

      PlanMemento(void);

      uint16_t
      getId(void) const
      {
        return PlanMemento::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PlanMemento";
      }

      Message*
      clone(void) const
      {
        return new PlanMemento(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(id) + IMC::getSerializationSize(plan_id) + IMC::getSerializationSize(maneuver_id) + IMC::getSerializationSize(memento);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Reported State.
    class ReportedState: public Message
    {
    public:
      //! Source Type.
      enum SourceTypeEnum
      {
        //! Wi-Fi.
        STYPE_WI_FI = 0,
        //! Tracker.
        STYPE_TRACKER = 1,
        //! SMS.
        STYPE_SMS = 2,
        //! Acoustic Modem.
        STYPE_ACOUSTIC_MODEM = 3,
        //! Unknown source.
        STYPE_UNKNOWN = 254
      };

      //! Latitude.
      fp64_t lat;
      //! Longitude.
      fp64_t lon;
      //! Depth.
      fp64_t depth;
      //! Roll.
      fp64_t roll;
      //! Pitch.
      fp64_t pitch;
      //! Yaw.
      fp64_t yaw;
      //! Reception Time.
      fp64_t rcp_time;
      //! System Identifier.
      std::string sid;
      //! Source Type.
      uint8_t s_type;

      static uint16_t
      getIdStatic(void)
      {
        return 600;
      }

      ReportedState(void);

      uint16_t
      getId(void) const
      {
        return ReportedState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ReportedState";
      }

      Message*
      clone(void) const
      {
        return new ReportedState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 57 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(sid);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Remote Sensor Info.
    class RemoteSensorInfo: public Message
    {
    public:
      //! Id.
      std::string id;
      //! Class.
      std::string sensor_class;
      //! Latitude.
      fp64_t lat;
      //! Longitude.
      fp64_t lon;
      //! Altitude.
      fp32_t alt;
      //! Heading.
      fp32_t heading;
      //! Custom Data.
      std::string data;

      static uint16_t
      getIdStatic(void)
      {
        return 601;
      }

      RemoteSensorInfo(void);

      uint16_t
      getId(void) const
      {
        return RemoteSensorInfo::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RemoteSensorInfo";
      }

      Message*
      clone(void) const
      {
        return new RemoteSensorInfo(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 24 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(id) + IMC::getSerializationSize(sensor_class) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! MapPoint.
    class MapPoint: public Message
    {
    public:
      //! Latitude.
      fp64_t lat;
      //! Longitude.
      fp64_t lon;
      //! Altitude.
      fp32_t alt;

      static uint16_t
      getIdStatic(void)
      {
        return 604;
      }

      MapPoint(void);

      uint16_t
      getId(void) const
      {
        return MapPoint::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "MapPoint";
      }

      Message*
      clone(void) const
      {
        return new MapPoint(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 20 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Map Feature.
    class MapFeature: public Message
    {
    public:
      //! FeatureType.
      enum FeatureTypeEnum
      {
        //! Point of Interest.
        FTYPE_POI = 0,
        //! Filled Polygon.
        FTYPE_FILLEDPOLY = 1,
        //! Countoured Polygon.
        FTYPE_CONTOUREDPOLY = 2,
        //! Line.
        FTYPE_LINE = 3,
        //! Transponder.
        FTYPE_TRANSPONDER = 4,
        //! Start Location.
        FTYPE_STARTLOC = 5,
        //! Home Reference.
        FTYPE_HOMEREF = 6
      };

      //! Identifier.
      std::string id;
      //! FeatureType.
      uint8_t feature_type;
      //! RedComponent.
      uint8_t rgb_red;
      //! GreenComponent.
      uint8_t rgb_green;
      //! BlueComponent.
      uint8_t rgb_blue;
      //! Feature.
      MessageList<MapPoint> feature;

      static uint16_t
      getIdStatic(void)
      {
        return 603;
      }

      MapFeature(void);

      uint16_t
      getId(void) const
      {
        return MapFeature::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "MapFeature";
      }

      Message*
      clone(void) const
      {
        return new MapFeature(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(id) + feature.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Map.
    class Map: public Message
    {
    public:
      //! Identifier.
      std::string id;
      //! Features.
      MessageList<MapFeature> features;

      static uint16_t
      getIdStatic(void)
      {
        return 602;
      }

      Map(void);

      uint16_t
      getId(void) const
      {
        return Map::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Map";
      }

      Message*
      clone(void) const
      {
        return new Map(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(id) + features.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! CCU Event.
    class CcuEvent: public Message
    {
    public:
      //! Event Type.
      enum EventTypeEnum
      {
        //! Log Book Entry Added.
        EVT_LOG_ENTRY = 1,
        //! Plan Added.
        EVT_PLAN_ADDED = 2,
        //! Plan Removed.
        EVT_PLAN_REMOVED = 3,
        //! Plan Changed.
        EVT_PLAN_CHANGED = 4,
        //! Map feature added.
        EVT_MAP_FEATURE_ADDED = 5,
        //! Map feature removed.
        EVT_MAP_FEATURE_REMOVED = 6,
        //! Map feature changed.
        EVT_MAP_FEATURE_CHANGED = 7,
        //! The sender is now teleoperating the vehicle.
        EVT_TELEOPERATION_STARTED = 8,
        //! The sender stopped teleoperating the vehicle.
        EVT_TELEOPERATION_ENDED = 9
      };

      //! Event Type.
      uint8_t type;
      //! Identifier.
      std::string id;
      //! Additional Data.
      InlineMessage<Message> arg;

      static uint16_t
      getIdStatic(void)
      {
        return 606;
      }

      CcuEvent(void);

      uint16_t
      getId(void) const
      {
        return CcuEvent::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CcuEvent";
      }

      Message*
      clone(void) const
      {
        return new CcuEvent(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(id) + arg.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Vehicle Links.
    class VehicleLinks: public Message
    {
    public:
      //! Local Name.
      std::string localname;
      //! Active Links.
      MessageList<Announce> links;

      static uint16_t
      getIdStatic(void)
      {
        return 650;
      }

      VehicleLinks(void);

      uint16_t
      getId(void) const
      {
        return VehicleLinks::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "VehicleLinks";
      }

      Message*
      clone(void) const
      {
        return new VehicleLinks(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(localname) + links.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! TREX Observation.
    class TrexObservation: public Message
    {
    public:
      //! Timeline.
      std::string timeline;
      //! Predicate.
      std::string predicate;
      //! Attributes.
      std::string attributes;

      static uint16_t
      getIdStatic(void)
      {
        return 651;
      }

      TrexObservation(void);

      uint16_t
      getId(void) const
      {
        return TrexObservation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TrexObservation";
      }

      Message*
      clone(void) const
      {
        return new TrexObservation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(timeline) + IMC::getSerializationSize(predicate) + IMC::getSerializationSize(attributes);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! TREX Command.
    class TrexCommand: public Message
    {
    public:
      //! Command.
      enum CommandEnum
      {
        //! Disable TREX.
        OP_DISABLE = 0,
        //! Enable TREX.
        OP_ENABLE = 1,
        //! Post Goal.
        OP_POST_GOAL = 2,
        //! Recall Goal.
        OP_RECALL_GOAL = 3,
        //! Request current plan.
        OP_REQUEST_PLAN = 4,
        //! Report current plan.
        OP_REPORT_PLAN = 5
      };

      //! Command.
      uint8_t command;
      //! Goal Id.
      std::string goal_id;
      //! Goal XML.
      std::string goal_xml;

      static uint16_t
      getIdStatic(void)
      {
        return 652;
      }

      TrexCommand(void);

      uint16_t
      getId(void) const
      {
        return TrexCommand::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TrexCommand";
      }

      Message*
      clone(void) const
      {
        return new TrexCommand(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(goal_id) + IMC::getSerializationSize(goal_xml);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! TREX Attribute.
    class TrexAttribute: public Message
    {
    public:
      //! Attribute type.
      enum AttributetypeEnum
      {
        //! Boolean Domain.
        TYPE_BOOL = 1,
        //! Integer Domain.
        TYPE_INT = 2,
        //! Float Domain.
        TYPE_FLOAT = 3,
        //! String Domain.
        TYPE_STRING = 4,
        //! Enumerated Domain.
        TYPE_ENUM = 5
      };

      //! Attribute Name.
      std::string name;
      //! Attribute type.
      uint8_t attr_type;
      //! Minimum.
      std::string min;
      //! Maximum.
      std::string max;

      static uint16_t
      getIdStatic(void)
      {
        return 656;
      }

      TrexAttribute(void);

      uint16_t
      getId(void) const
      {
        return TrexAttribute::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TrexAttribute";
      }

      Message*
      clone(void) const
      {
        return new TrexAttribute(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(name) + IMC::getSerializationSize(min) + IMC::getSerializationSize(max);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! TREX Token.
    class TrexToken: public Message
    {
    public:
      //! Timeline.
      std::string timeline;
      //! Predicate.
      std::string predicate;
      //! Attributes.
      MessageList<TrexAttribute> attributes;

      static uint16_t
      getIdStatic(void)
      {
        return 657;
      }

      TrexToken(void);

      uint16_t
      getId(void) const
      {
        return TrexToken::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TrexToken";
      }

      Message*
      clone(void) const
      {
        return new TrexToken(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(timeline) + IMC::getSerializationSize(predicate) + attributes.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! TREX Operation.
    class TrexOperation: public Message
    {
    public:
      //! Operation.
      enum OperationEnum
      {
        //! Post Token.
        OP_POST_TOKEN = 1,
        //! Post Goal.
        OP_POST_GOAL = 2,
        //! Recall Goal.
        OP_RECALL_GOAL = 3,
        //! Request current plan.
        OP_REQUEST_PLAN = 4,
        //! Report current plan.
        OP_REPORT_PLAN = 5
      };

      //! Operation.
      uint8_t op;
      //! Goal Id.
      std::string goal_id;
      //! Token.
      InlineMessage<TrexToken> token;

      static uint16_t
      getIdStatic(void)
      {
        return 655;
      }

      TrexOperation(void);

      uint16_t
      getId(void) const
      {
        return TrexOperation::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TrexOperation";
      }

      Message*
      clone(void) const
      {
        return new TrexOperation(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(goal_id) + token.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! TREX Plan.
    class TrexPlan: public Message
    {
    public:
      //! Reactor name.
      std::string reactor;
      //! Tokens.
      MessageList<TrexToken> tokens;

      static uint16_t
      getIdStatic(void)
      {
        return 658;
      }

      TrexPlan(void);

      uint16_t
      getId(void) const
      {
        return TrexPlan::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "TrexPlan";
      }

      Message*
      clone(void) const
      {
        return new TrexPlan(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(reactor) + tokens.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! Event.
    class Event: public Message
    {
    public:
      //! Topic.
      std::string topic;
      //! Data.
      std::string data;

      static uint16_t
      getIdStatic(void)
      {
        return 660;
      }

      Event(void);

      uint16_t
      getId(void) const
      {
        return Event::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Event";
      }

      Message*
      clone(void) const
      {
        return new Event(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(topic) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Compressed Image.
    class CompressedImage: public Message
    {
    public:
      //! Frame Id.
      uint8_t frameid;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 702;
      }

      CompressedImage(void);

      uint16_t
      getId(void) const
      {
        return CompressedImage::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CompressedImage";
      }

      Message*
      clone(void) const
      {
        return new CompressedImage(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Image Transmission Settings.
    class ImageTxSettings: public Message
    {
    public:
      //! Frames Per Second.
      uint8_t fps;
      //! Quality.
      uint8_t quality;
      //! Repetitions.
      uint8_t reps;
      //! Target Size.
      uint8_t tsize;

      static uint16_t
      getIdStatic(void)
      {
        return 703;
      }

      ImageTxSettings(void);

      uint16_t
      getId(void) const
      {
        return ImageTxSettings::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "ImageTxSettings";
      }

      Message*
      clone(void) const
      {
        return new ImageTxSettings(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Remote State.
    class RemoteState: public Message
    {
    public:
      //! Latitude WGS-84.
      fp32_t lat;
      //! Longitude WGS-84.
      fp32_t lon;
      //! Depth.
      uint8_t depth;
      //! Speed.
      fp32_t speed;
      //! Heading.
      fp32_t psi;

      static uint16_t
      getIdStatic(void)
      {
        return 750;
      }

      RemoteState(void);

      uint16_t
      getId(void) const
      {
        return RemoteState::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "RemoteState";
      }

      Message*
      clone(void) const
      {
        return new RemoteState(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 17 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Target.
    class Target: public Message
    {
    public:
      //! Label.
      std::string label;
      //! Latitude WGS-84.
      fp64_t lat;
      //! Longitude WGS-84.
      fp64_t lon;
      //! Z Reference.
      fp32_t z;
      //! Z Units.
      uint8_t z_units;
      //! Course Over Ground.
      fp32_t cog;
      //! Speed Over Ground.
      fp32_t sog;

      static uint16_t
      getIdStatic(void)
      {
        return 800;
      }

      Target(void);

      uint16_t
      getId(void) const
      {
        return Target::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Target";
      }

      Message*
      clone(void) const
      {
        return new Target(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 29 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(label);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! EntityParameter.
    class EntityParameter: public Message
    {
    public:
      //! Name.
      std::string name;
      //! Value.
      std::string value;

      static uint16_t
      getIdStatic(void)
      {
        return 801;
      }

      EntityParameter(void);

      uint16_t
      getId(void) const
      {
        return EntityParameter::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EntityParameter";
      }

      Message*
      clone(void) const
      {
        return new EntityParameter(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(name) + IMC::getSerializationSize(value);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! EntityParameters.
    class EntityParameters: public Message
    {
    public:
      //! Entity Name.
      std::string name;
      //! Parameters.
      MessageList<EntityParameter> params;

      static uint16_t
      getIdStatic(void)
      {
        return 802;
      }

      EntityParameters(void);

      uint16_t
      getId(void) const
      {
        return EntityParameters::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "EntityParameters";
      }

      Message*
      clone(void) const
      {
        return new EntityParameters(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(name) + params.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! QueryEntityParameters.
    class QueryEntityParameters: public Message
    {
    public:
      //! Entity Name.
      std::string name;
      //! Visibility.
      std::string visibility;
      //! Scope.
      std::string scope;

      static uint16_t
      getIdStatic(void)
      {
        return 803;
      }

      QueryEntityParameters(void);

      uint16_t
      getId(void) const
      {
        return QueryEntityParameters::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "QueryEntityParameters";
      }

      Message*
      clone(void) const
      {
        return new QueryEntityParameters(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(name) + IMC::getSerializationSize(visibility) + IMC::getSerializationSize(scope);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! SetEntityParameters.
    class SetEntityParameters: public Message
    {
    public:
      //! Entity Name.
      std::string name;
      //! Parameters.
      MessageList<EntityParameter> params;

      static uint16_t
      getIdStatic(void)
      {
        return 804;
      }

      SetEntityParameters(void);

      uint16_t
      getId(void) const
      {
        return SetEntityParameters::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SetEntityParameters";
      }

      Message*
      clone(void) const
      {
        return new SetEntityParameters(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(name) + params.getSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

    protected:
      void
      setTimeStampNested(double value__);

      void
      setSourceNested(uint16_t value__);

      void
      setSourceEntityNested(uint8_t value__);

      void
      setDestinationNested(uint16_t value__);

      void
      setDestinationEntityNested(uint8_t value__);
    };

    //! SaveEntityParameters.
    class SaveEntityParameters: public Message
    {
    public:
      //! Entity Name.
      std::string name;

      static uint16_t
      getIdStatic(void)
      {
        return 805;
      }

      SaveEntityParameters(void);

      uint16_t
      getId(void) const
      {
        return SaveEntityParameters::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SaveEntityParameters";
      }

      Message*
      clone(void) const
      {
        return new SaveEntityParameters(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Create Session.
    class CreateSession: public Message
    {
    public:
      //! Session Timeout.
      uint32_t timeout;

      static uint16_t
      getIdStatic(void)
      {
        return 806;
      }

      CreateSession(void);

      uint16_t
      getId(void) const
      {
        return CreateSession::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CreateSession";
      }

      Message*
      clone(void) const
      {
        return new CreateSession(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Close Session.
    class CloseSession: public Message
    {
    public:
      //! Session Identifier.
      uint32_t sessid;

      static uint16_t
      getIdStatic(void)
      {
        return 807;
      }

      CloseSession(void);

      uint16_t
      getId(void) const
      {
        return CloseSession::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "CloseSession";
      }

      Message*
      clone(void) const
      {
        return new CloseSession(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Session Subscription.
    class SessionSubscription: public Message
    {
    public:
      //! Session Identifier.
      uint32_t sessid;
      //! Messages to subscribe.
      std::string messages;

      static uint16_t
      getIdStatic(void)
      {
        return 808;
      }

      SessionSubscription(void);

      uint16_t
      getId(void) const
      {
        return SessionSubscription::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SessionSubscription";
      }

      Message*
      clone(void) const
      {
        return new SessionSubscription(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(messages);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Session Keep-Alive.
    class SessionKeepAlive: public Message
    {
    public:
      //! Session Identifier.
      uint32_t sessid;

      static uint16_t
      getIdStatic(void)
      {
        return 809;
      }

      SessionKeepAlive(void);

      uint16_t
      getId(void) const
      {
        return SessionKeepAlive::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SessionKeepAlive";
      }

      Message*
      clone(void) const
      {
        return new SessionKeepAlive(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 4 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Session Status.
    class SessionStatus: public Message
    {
    public:
      //! Status.
      enum StatusEnum
      {
        //! Established.
        STATUS_ESTABLISHED = 1,
        //! Closed.
        STATUS_CLOSED = 2
      };

      //! Session Identifier.
      uint32_t sessid;
      //! Status.
      uint8_t status;

      static uint16_t
      getIdStatic(void)
      {
        return 810;
      }

      SessionStatus(void);

      uint16_t
      getId(void) const
      {
        return SessionStatus::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "SessionStatus";
      }

      Message*
      clone(void) const
      {
        return new SessionStatus(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 5 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Push Entity Parameters.
    class PushEntityParameters: public Message
    {
    public:
      //! Entity Name.
      std::string name;

      static uint16_t
      getIdStatic(void)
      {
        return 811;
      }

      PushEntityParameters(void);

      uint16_t
      getId(void) const
      {
        return PushEntityParameters::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PushEntityParameters";
      }

      Message*
      clone(void) const
      {
        return new PushEntityParameters(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Pop Entity Parameters.
    class PopEntityParameters: public Message
    {
    public:
      //! Entity Name.
      std::string name;

      static uint16_t
      getIdStatic(void)
      {
        return 812;
      }

      PopEntityParameters(void);

      uint16_t
      getId(void) const
      {
        return PopEntityParameters::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "PopEntityParameters";
      }

      Message*
      clone(void) const
      {
        return new PopEntityParameters(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(name);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! I/O Event.
    class IoEvent: public Message
    {
    public:
      //! Type.
      enum TypeEnum
      {
        //! Input Available.
        IOV_TYPE_INPUT = 1,
        //! Input Error.
        IOV_TYPE_INPUT_ERROR = 2
      };

      //! Type.
      uint8_t type;
      //! Error Message.
      std::string error;

      static uint16_t
      getIdStatic(void)
      {
        return 813;
      }

      IoEvent(void);

      uint16_t
      getId(void) const
      {
        return IoEvent::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "IoEvent";
      }

      Message*
      clone(void) const
      {
        return new IoEvent(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(error);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! UamTxFrame.
    class UamTxFrame: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Acknowledgement.
        UTF_ACK = 0x01
      };

      //! Sequence Id.
      uint16_t seq;
      //! Destination System.
      std::string sys_dst;
      //! Flags.
      uint8_t flags;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 814;
      }

      UamTxFrame(void);

      uint16_t
      getId(void) const
      {
        return UamTxFrame::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UamTxFrame";
      }

      Message*
      clone(void) const
      {
        return new UamTxFrame(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 3 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(sys_dst) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! UamRxFrame.
    class UamRxFrame: public Message
    {
    public:
      //! Flags.
      enum FlagsBits
      {
        //! Promiscuous.
        URF_PROMISCUOUS = 0x01
      };

      //! Source System.
      std::string sys_src;
      //! Destination System.
      std::string sys_dst;
      //! Flags.
      uint8_t flags;
      //! Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 815;
      }

      UamRxFrame(void);

      uint16_t
      getId(void) const
      {
        return UamRxFrame::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UamRxFrame";
      }

      Message*
      clone(void) const
      {
        return new UamRxFrame(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 1 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(sys_src) + IMC::getSerializationSize(sys_dst) + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! UamTxStatus.
    class UamTxStatus: public Message
    {
    public:
      //! Value.
      enum ValueEnum
      {
        //! Transmission Completed.
        UTS_DONE = 0,
        //! Transmission Failed.
        UTS_FAILED = 1,
        //! Transmission Canceled.
        UTS_CANCELED = 2,
        //! Modem is busy.
        UTS_BUSY = 3,
        //! Invalid address.
        UTS_INV_ADDR = 4,
        //! In Progress.
        UTS_IP = 5
      };

      //! Sequence Id.
      uint16_t seq;
      //! Value.
      uint8_t value;
      //! Error Message.
      std::string error;

      static uint16_t
      getIdStatic(void)
      {
        return 816;
      }

      UamTxStatus(void);

      uint16_t
      getId(void) const
      {
        return UamTxStatus::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UamTxStatus";
      }

      Message*
      clone(void) const
      {
        return new UamTxStatus(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 3 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(error);
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! UamRxRange.
    class UamRxRange: public Message
    {
    public:
      //! Sequence Id.
      uint16_t seq;
      //! System.
      std::string sys;
      //! Value.
      fp32_t value;

      static uint16_t
      getIdStatic(void)
      {
        return 817;
      }

      UamRxRange(void);

      uint16_t
      getId(void) const
      {
        return UamRxRange::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UamRxRange";
      }

      Message*
      clone(void) const
      {
        return new UamRxRange(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 6 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(sys);
      }

      fp64_t
      getValueFP(void) const;

      void
      setValueFP(fp64_t val);

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Formation Control Parameters.
    class FormCtrlParam: public Message
    {
    public:
      //! Action.
      enum ActionEnum
      {
        //! Request.
        OP_REQ = 0,
        //! Set.
        OP_SET = 1,
        //! Report.
        OP_REP = 2
      };

      //! Action.
      uint8_t action;
      //! Longitudinal Gain.
      fp32_t longain;
      //! Lateral Gain.
      fp32_t latgain;
      //! Boundary Layer Thickness.
      uint32_t bondthick;
      //! Leader Gain.
      fp32_t leadgain;
      //! Deconfliction Gain.
      fp32_t deconflgain;

      static uint16_t
      getIdStatic(void)
      {
        return 820;
      }

      FormCtrlParam(void);

      uint16_t
      getId(void) const
      {
        return FormCtrlParam::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FormCtrlParam";
      }

      Message*
      clone(void) const
      {
        return new FormCtrlParam(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 21 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Formation Evaluation Data.
    class FormationEval: public Message
    {
    public:
      //! Mean position error.
      fp32_t err_mean;
      //! Absolute minimum distance.
      fp32_t dist_min_abs;
      //! Mean minimum distance.
      fp32_t dist_min_mean;

      static uint16_t
      getIdStatic(void)
      {
        return 821;
      }

      FormationEval(void);

      uint16_t
      getId(void) const
      {
        return FormationEval::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "FormationEval";
      }

      Message*
      clone(void) const
      {
        return new FormationEval(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 12 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Message Fragment.
    class MessagePart: public Message
    {
    public:
      //! Transmission Unique Id.
      uint8_t uid;
      //! Fragment Number.
      uint8_t frag_number;
      //! Total Number of fragments.
      uint8_t num_frags;
      //! Fragment Data.
      std::vector<char> data;

      static uint16_t
      getIdStatic(void)
      {
        return 877;
      }

      MessagePart(void);

      uint16_t
      getId(void) const
      {
        return MessagePart::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "MessagePart";
      }

      Message*
      clone(void) const
      {
        return new MessagePart(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 3 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(data);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Neptus Blob.
    class NeptusBlob: public Message
    {
    public:
      //! ContentType.
      std::string content_type;
      //! Content.
      std::vector<char> content;

      static uint16_t
      getIdStatic(void)
      {
        return 888;
      }

      NeptusBlob(void);

      uint16_t
      getId(void) const
      {
        return NeptusBlob::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "NeptusBlob";
      }

      Message*
      clone(void) const
      {
        return new NeptusBlob(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize() + IMC::getSerializationSize(content_type) + IMC::getSerializationSize(content);
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! Aborted.
    class Aborted: public Message
    {
    public:
      static uint16_t
      getIdStatic(void)
      {
        return 889;
      }

      Aborted(void);

      uint16_t
      getId(void) const
      {
        return Aborted::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "Aborted";
      }

      Message*
      clone(void) const
      {
        return new Aborted(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 0 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! USBL Angles.
    class UsblAngles: public Message
    {
    public:
      //! Target.
      uint16_t target;
      //! Bearing.
      fp32_t bearing;
      //! Elevation.
      fp32_t elevation;

      static uint16_t
      getIdStatic(void)
      {
        return 890;
      }

      UsblAngles(void);

      uint16_t
      getId(void) const
      {
        return UsblAngles::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UsblAngles";
      }

      Message*
      clone(void) const
      {
        return new UsblAngles(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 10 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! USBL Position.
    class UsblPosition: public Message
    {
    public:
      //! Target.
      uint16_t target;
      //! X.
      fp32_t x;
      //! Y.
      fp32_t y;
      //! Z.
      fp32_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 891;
      }

      UsblPosition(void);

      uint16_t
      getId(void) const
      {
        return UsblPosition::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UsblPosition";
      }

      Message*
      clone(void) const
      {
        return new UsblPosition(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 14 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };

    //! USBL Fix.
    class UsblFix: public Message
    {
    public:
      //! Target.
      uint16_t target;
      //! Latitude (WGS-84).
      fp64_t lat;
      //! Longitude (WGS-84).
      fp64_t lon;
      //! Z Units.
      uint8_t z_units;
      //! Z Reference.
      fp32_t z;

      static uint16_t
      getIdStatic(void)
      {
        return 892;
      }

      UsblFix(void);

      uint16_t
      getId(void) const
      {
        return UsblFix::getIdStatic();
      }

      const char*
      getName(void) const
      {
        return "UsblFix";
      }

      Message*
      clone(void) const
      {
        return new UsblFix(*this);
      }

      void
      clear(void);

      bool
      fieldsEqual(const Message& msg__) const;

      uint8_t*
      serializeFields(uint8_t* bfr__) const;

      uint16_t
      deserializeFields(const uint8_t* bfr__, uint16_t size__);

      uint16_t
      reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

      unsigned
      getFixedSerializationSize(void) const
      {
        return 23 + Message::getFixedSerializationSize();
      }

      unsigned
      getVariableSerializationSize(void) const
      {
        return Message::getVariableSerializationSize();
      }

      void
      fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
    };
  }
}

#endif
