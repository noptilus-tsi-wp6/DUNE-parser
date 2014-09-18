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
// Author: Renato Caldas                                                    *
//***************************************************************************

// DUNE headers.
#include <DUNE/Tasks/ActLockEntity.hpp>
#include <DUNE/Tasks/Task.hpp>

namespace DUNE
{
  namespace Tasks
  {
    void
    ActLockEntity::consume(const IMC::EntityActivationLock* msg)
    {
      if (msg->getDestinationEntity() != getId())
        return;

      if (msg->op == IMC::EntityActivationLock::EAL_ACQUIRE)
      {
        float tout = acquireLock(msg->getSourceEntity(), msg->timeout);
        IMC::EntityActivationLock rpl;
        rpl.op = IMC::EntityActivationLock::EAL_ACQUIRE_ACK;
        rpl.timeout = tout;
        dispatchReply(*msg, rpl);
      }
      else if (msg->op == IMC::EntityActivationLock::EAL_RELEASE)
      {
        releaseLock(msg->getSourceEntity());
        IMC::EntityActivationLock rpl;
        rpl.op = IMC::EntityActivationLock::EAL_RELEASE_ACK;
        dispatchReply(*msg, rpl);
      }

      pruneLocks();
    }

    void
    ActLockEntity::consume(const IMC::QueryEntityStatus* msg)
    {
      if (msg->getDestinationEntity() != getId())
        return;

      IMC::EntityStatus es;
      if (m_error)
      {
        es.state = IMC::EntityStatus::ESTA_FAULT;
        m_owner->spew("queried status of entity %d, is in fault", getId());
      }
      else if (isBusy())
      {
        es.state = IMC::EntityStatus::ESTA_BUSY;
        m_owner->spew("queried status of entity %d, is busy", getId());
      }
      else if(m_active)
      {
        es.state = IMC::EntityStatus::ESTA_ACTIVE;
        m_owner->spew("queried status of entity %d, is active", getId());
      }
      else
      {
        es.state = IMC::EntityStatus::ESTA_INACTIVE;
        m_owner->spew("queried status of entity %d, is inactive", getId());
      }
      dispatchReply(*msg, es);
    }

    float
    ActLockEntity::acquireLock(unsigned int eid, float timeout)
    {
      m_locks[eid].setTop(timeout);
      m_owner->spew("entity %d acquired lock for %g seconds", eid, timeout);
      return timeout;
    }

    void
    ActLockEntity::releaseLock(unsigned int eid)
    {
      m_locks.erase(eid);
      m_owner->spew("entity %d released lock (if any)", eid);
    }

    bool
    ActLockEntity::isRequestedActive(void)
    {
      pruneLocks();
      return !m_locks.empty();
    }

    bool
    ActLockEntity::isActivationChanging(void)
    {
      pruneLocks();
      return isBusy();
    }

    void
    ActLockEntity::markActive(void)
    {
      m_active = true;
      m_error = false;
    }

    void
    ActLockEntity::markInactive(void)
    {
      m_active = false;
      m_error = false;
    }

    void
    ActLockEntity::markFault(std::string message)
    {
      m_error = true;

      if (m_state != IMC::EntityStatus::ESTA_FAULT)
        m_owner->spew("entity in fault: %s", message.c_str());
    }

    void
    ActLockEntity::pruneLocks(void)
    {
      for (LocksMap::iterator itr = m_locks.begin(); itr != m_locks.end(); ++itr)
        if (itr->second.overflow())
        {
          m_owner->spew("entity %d lost lock due to timeout", itr->first);

          IMC::EntityActivationLock eal;
          eal.setDestinationEntity(itr->first);
          eal.op = IMC::EntityActivationLock::EAL_TIMEOUT;
          dispatch(&eal);

          m_locks.erase(itr);
        }
    }
  }
}
