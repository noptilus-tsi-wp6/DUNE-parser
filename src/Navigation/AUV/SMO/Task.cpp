//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Tiago Rodrigues                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "GainMatrices.hpp"
#include "Aux.hpp"

namespace Navigation
{
  namespace AUV
  {
    namespace SMO
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        // GPS variables
        double gps_absolute_treshold;
        double gps_average_treshold;

        // Timeout variables
        double timeout_altitude;
        double timeout_dvl;

        // Sliding Matrix Gains
        std::vector<float> k1;
        std::vector<float> k2;
        std::vector<float> alfa1;
        std::vector<float> alfa2;

        // Sliding boundary layers
        float vel_bound;
        float nu_bound;

        // Resolve Entity string
        std::string imu_entity_name;
        std::string ahrs_entity_name;
        std::string dvl_entity_name;
        std::string altitude_entity_name;

        // AUV caracteristic
        double mass;
        double a;
        double b;
        double c;
        double volume;
        double zG;
        double l;
        double d;
        double density;
        double sfin;

        // Linear Damping terms
        std::vector<float> damping;
      };

      struct Task: public DUNE::Tasks::Periodic
      {
        // GPS variables
        double m_gps_initial_point[3];
        double m_gps_fix[3];
        bool m_flag_initial_point;
        bool m_flag_valid_pos;
        double m_depth;
        double m_range;
        double m_bearing;
        double m_orientation_delta;
        double m_hacc_average;
        double m_hacc_sum;
        int m_counter;
        DUNE::Time::Delta m_delta_orientation;

        // Orientation variables
        double m_euler_angles[3];
        bool m_flag_initial_orientation;

        // Velocities variables
        double m_velocities[6];
        Math::Matrix m_vel;

        // Rotation Matrix
        Math::Matrix m_rotation_matrix;

        // Entity Variables
        bool m_flag_imu_active;
        bool m_flag_ahrs_active;
        bool m_flag_dvl_active;
        bool m_flag_altitude_active;
        int m_imu_entity_id;
        int m_ahrs_entity_id;
        int m_dvl_entity_id;
        int m_altitude_entity_id;

        // Task management variables
        bool m_task_management;

        // Position Matrices
        Math::Matrix m_nu_dot;
        Math::Matrix m_nu;

        // Position from velocity Delta
        double m_pos_from_vel_delta;
        DUNE::Time::Delta delta_posfromvel;

        // Sliding Mode Observer
        Math::Matrix m_nu_error;
        Math::Matrix m_nu_est;
        Math::Matrix m_nu_dot_est;
        Math::Matrix m_nu_dot_dot_est;
        Math::Matrix m_vel_est;
        Math::Matrix m_acc_est;
        Math::Matrix m_rotation_matrix_ant;
        Math::Matrix m_rotation_matrix_diff;
        Math::Matrix m_k1;
        Math::Matrix m_k2;
        Math::Matrix m_alfa1;
        Math::Matrix m_alfa2;
        Math::Matrix m_tang_hyper;
        double m_euler_angles_est[3];
        double m_velocities_est[6];
        double m_vel_est_delta;
        double m_nu_est_delta;
        double m_rotation_matrix_delta;
        bool m_init_nu_est;
        DUNE::Time::Delta m_delta_vel_est;
        DUNE::Time::Delta m_delta_nu_est;
        DUNE::Time::Delta m_delta_rotation_matrix;

        // vehicle Model
        Math::Matrix m_inertia_added_mass;
        Math::Matrix m_coriolis;
        Math::Matrix m_damping;
        Math::Matrix m_restoring;
        Math::Matrix m_lift;
        Math::Matrix m_tau;
        Math::Matrix m_inertia_added_mass_n;
        Math::Matrix m_coriolis_n;
        Math::Matrix m_damping_n;
        Math::Matrix m_restoring_n;
        Math::Matrix m_lift_n;
        Math::Matrix m_tau_n;
        double m_thruster;
        double m_servo_pos[4];

        // Vehicle Model coefficients
        double m_model_coeff[26];
        bool m_model_coef_init;

        // Covariance Variables
        Math::Matrix m_cov_nu;
        Math::Matrix m_cov_vel;
        Math::Matrix m_vel_cov;
        double m_angular_vel[3];
        int m_num_amostras;
        float m_cov_multiplier;

        // RPM variables
        double m_rpms;

        //! Moving average for altitude vector.
        MovingAverage<double>* m_avg_alt;
        double m_altitude;

        // Timers variables
        bool m_timers_init;
        // Time without m_altitude readings deadline.
        Time::Counter<double> m_altitude_timeout;
        // Time without m_altitude readings deadline.
        Time::Counter<double> m_dvl_timeout;

        // Send message to Estimated State and Navigation Uncertainty
        IMC::EstimatedState m_est;
        IMC::NavigationUncertainty m_uncertainty;

        Arguments m_args;

        DUNE::Model::Dynamic m_dynamics;
        DUNE::Navigation::SlidingModeObserver m_smo;

        Task(const std::string& name, Tasks::Context& ctx):
          Periodic(name, ctx),
          m_avg_alt(NULL)
        {

          // GPS variables
          param("GPS absolute treshold", m_args.gps_absolute_treshold)
          .defaultValue("10")
          .description("GPSfix absolute hacc treshold");

          param("GPS average treshold", m_args.gps_average_treshold)
          .defaultValue("4")
          .description("GPSfix average hacc treshold");

          // Sliding Mode Observer Boundary Layers
          param("Velocity Boundary Layer", m_args.vel_bound)
          .defaultValue("0.01")
          .description("Boundary Layer Size");

          param("Position Boundary Layer", m_args.nu_bound)
          .defaultValue("0.1")
          .description("Boundary Layer Size");

          // Sliding Mode Observer Entities
          param("Entity Label IMU", m_args.imu_entity_name)
          .defaultValue("IMU")
          .description("Label of the IMU message");

          param("Entity Label AHRS", m_args.ahrs_entity_name)
          .defaultValue("AHRS")
          .description("Label of the AHRS message");

          param("Entity Label DVL", m_args.dvl_entity_name)
          .defaultValue("DVL")
          .description("Label of the DVL message");

          param("Entity Label Altitude", m_args.altitude_entity_name)
          .defaultValue("DVL")
          .description("Label of the m_altitude message");

          // Vehicle physical properties
          param("Vehicle Mass", m_args.mass)
          .defaultValue("18")
          .description("Vehicle Mass");

          param("Vehicle Half Lenght", m_args.a)
          .defaultValue("0.54")
          .description("Vehicle lenght");

          param("Vehicle Width", m_args.b)
          .defaultValue("0.075")
          .description("Vehicle height");

          param("Vehicle Height", m_args.c)
          .defaultValue("0.075")
          .description("Vehicle width");

          param("Vehicle Volume", m_args.volume)
          .defaultValue("0.0181")
          .description("Vehicle Volume");

          param("Vehicle zG", m_args.zG)
          .defaultValue("0.01")
          .description("Vehicle CG");

          param("Vehicle Lenght", m_args.l)
          .defaultValue("1.08")
          .description("Vehicle CG");

          param("Vehicle Diameter", m_args.d)
          .defaultValue("0.15")
          .description("Vehicle CG");

          param("Density", m_args.density)
          .defaultValue("1030")
          .description("Vehicle CG");

          param("Sfin", m_args.sfin)
          .defaultValue("0.0064")
          .description("Vehicle CG");

          // Damping Matrix terms
          param("Damping terms", m_args.damping)
          .description("Matrix damping terms");

          // Sliding Mode Observer Gains
          param("k1 gains", m_args.k1)
          .description("Sliding Mode Observer k1 gain");

          param("k2 gains", m_args.k2)
          .description("Sliding Mode Observer k2 gain");

          param("alfa1 gains", m_args.alfa1)
          .description("Sliding Mode Observer alfa1 gain");

          param("alfa2 gains", m_args.alfa2)
          .description("Sliding Mode Observer alfa2 gain");

          // Timeout Variables
          param("Timeout Altitude", m_args.timeout_altitude)
          .defaultValue("3")
          .description("m_altitude timeout definition");

          param("Timeout DVL", m_args.timeout_dvl)
          .defaultValue("3")
          .description("DVL timeout definition");

          // GPS variables
          memset(m_gps_initial_point, 0, sizeof(m_gps_initial_point));
          memset(m_gps_fix, 0, sizeof(m_gps_fix));
          m_flag_initial_point = false;
          m_flag_valid_pos = false;
          m_depth = 0;
          m_range = 0;
          m_bearing = 0;
          m_orientation_delta = 0;
          m_hacc_average = 0;
          m_hacc_sum = 0;
          m_counter = 0;

          // Orientation variables
          memset(m_euler_angles, 0, sizeof(m_euler_angles));
          m_flag_initial_orientation = false;

          // Velocities variables
          memset(m_velocities, 0, sizeof(m_velocities));
          m_vel.resizeAndFill(6, 1, 0.0);

          // Rotation Matrix
          m_rotation_matrix.resizeAndFill(6, 6, 0.0);

          // Entity Variables
          m_flag_imu_active = false;
          m_flag_ahrs_active = false;
          m_flag_dvl_active = false;
          m_flag_altitude_active = false;
          m_imu_entity_id = 0;
          m_ahrs_entity_id = 0;
          m_dvl_entity_id = 0;
          m_altitude_entity_id = 0;

          // Task Management Variables
          m_task_management = false;

          // Position Matrices
          m_nu_dot.resizeAndFill(6, 1, 0.0);
          m_nu.resizeAndFill(6, 1, 0.0);

          // Position from velocity Delta
          m_pos_from_vel_delta = 0;

          // Sliding Mode Observer
          m_nu_error.resizeAndFill(6, 1, 0.0);
          m_nu_est.resizeAndFill(6, 1, 0.0);
          m_nu_dot_est.resizeAndFill(6, 1, 0.0);
          m_nu_dot_dot_est.resizeAndFill(6, 1, 0.0);
          m_vel_est.resizeAndFill(6, 1, 0.0);
          m_acc_est.resizeAndFill(6, 1, 0.0);
          m_rotation_matrix_ant.resizeAndFill(6, 6, 0.0);
          m_rotation_matrix_diff.resizeAndFill(6, 6, 0.0);
          m_k1.resizeAndFill(6, 6, 0.0);
          m_k2.resizeAndFill(6, 6, 0.0);
          m_alfa1.resizeAndFill(6, 6, 0.0);
          m_alfa2.resizeAndFill(6, 6, 0.0);
          m_tang_hyper.resizeAndFill(6, 6, 0.0);
          memset(m_euler_angles_est, 0, sizeof(m_euler_angles_est));
          memset(m_velocities_est, 0, sizeof(m_velocities_est));
          m_vel_est_delta = 0;
          m_nu_est_delta = 0;
          m_rotation_matrix_delta = 0;
          m_init_nu_est = false;

          // Vehicle Model
          m_inertia_added_mass.resizeAndFill(6, 6, 0.0);
          m_coriolis.resizeAndFill(6, 6, 0.0);
          m_damping.resizeAndFill(6, 6, 0.0);
          m_restoring.resizeAndFill(6, 1, 0.0);
          m_lift.resizeAndFill(6, 6, 0.0);
          m_tau.resizeAndFill(6, 1, 0.0);
          m_inertia_added_mass_n.resizeAndFill(6, 6, 0.0);
          m_coriolis_n.resizeAndFill(6, 6, 0.0);
          m_damping_n.resizeAndFill(6, 6, 0.0);
          m_restoring_n.resizeAndFill(6, 1, 0.0);
          m_lift_n.resizeAndFill(6, 6, 0.0);
          m_tau_n.resizeAndFill(6, 1, 0.0);
          m_thruster = 0;
          memset(m_servo_pos, 0, sizeof(m_servo_pos));

          // Vehicle Model coefficients
          memset(m_model_coeff, 0, sizeof(m_model_coeff));
          m_model_coef_init = false;

          // Covariance Variables
          m_cov_nu.resizeAndFill(6, 4, 0.0);
          m_cov_vel.resizeAndFill(6, 4, 0.0);
          m_vel_cov.resizeAndFill(6, 1, 0.0);
          memset(m_angular_vel, 0, sizeof(m_angular_vel));
          m_num_amostras = 0;
          m_cov_multiplier = 0;

          // RPM variables
          m_rpms = 0;

          // m_altitude variables
          m_altitude = 0;

          // Timers variables
          m_timers_init = false;

          //Register Consumers
          bind<IMC::EntityState>(this);
          bind<IMC::GpsFix>(this);
          bind<IMC::Depth>(this);
          bind<IMC::EulerAngles>(this);
          bind<IMC::GroundVelocity>(this);
          bind<IMC::AngularVelocity>(this);
          bind<IMC::SetThrusterActuation>(this);
          bind<IMC::ServoPosition>(this);
          bind<IMC::Rpm>(this);
          bind<IMC::Distance>(this);
        }

        void
        onResourceInitialization(void)
        {
          m_avg_alt = new MovingAverage<double>(20);
        }

        void
        onResourceRelease(void)
        {
          Memory::clear(m_avg_alt);
        }

        void
        onEntityResolution(void)
        {
          try
          {
            m_imu_entity_id = resolveEntity(m_args.imu_entity_name);
          }
          catch (...)
          {
            m_imu_entity_id = -1;
            m_flag_imu_active = false;
          }

          try
          {
            m_ahrs_entity_id = resolveEntity(m_args.ahrs_entity_name);
          }
          catch (...)
          {
            m_ahrs_entity_id = -1;
            m_flag_ahrs_active = false;
          }

          try
          {
            m_dvl_entity_id = resolveEntity(m_args.dvl_entity_name);
          }
          catch (...)
          {
            m_dvl_entity_id = -1;
            m_flag_dvl_active = false;
          }

          try
          {
            m_altitude_entity_id = resolveEntity(m_args.altitude_entity_name);
          }
          catch (...)
          {
            m_altitude_entity_id = -1;
            m_flag_altitude_active = false;
          }
        }

        void
        consume(const IMC::EntityState* msg)
        {
          if (msg->getSourceEntity() == m_imu_entity_id)
          {
            if (msg->state == IMC::EntityState::ESTA_NORMAL)
              m_flag_imu_active = true;
            else
              m_flag_imu_active = false;
          }

          if (msg->getSourceEntity() == m_ahrs_entity_id)
          {
            if (msg->state == IMC::EntityState::ESTA_NORMAL)
              m_flag_ahrs_active = true;
            else
              m_flag_ahrs_active = false;
          }

          if (msg->getSourceEntity() == m_dvl_entity_id)
          {
            if (msg->state == IMC::EntityState::ESTA_NORMAL && m_dvl_timeout.overflow() == 0)
              m_flag_dvl_active = true;
            else if(msg->state == IMC::EntityState::ESTA_NORMAL && m_dvl_timeout.overflow() == 1)
              m_flag_dvl_active = false;
            else
              m_flag_dvl_active = false;
          }

          if (msg->getSourceEntity() == m_altitude_entity_id)
          {
            if (msg->state == IMC::EntityState::ESTA_NORMAL && m_altitude_timeout.overflow() == 0)
              m_flag_altitude_active = true;
            else
              m_flag_altitude_active = false;
          }
        }

        void
        consume(const IMC::GpsFix* msg)
        {
          if (msg->validity & IMC::GpsFix::GFV_VALID_POS)
          {
            m_hacc_sum = m_hacc_sum + msg->hacc;
            m_counter++;
            m_hacc_average = m_hacc_sum / m_counter;

            if (std::abs(m_hacc_average - msg->hacc) < m_args.gps_average_treshold && msg->hacc < m_args.gps_absolute_treshold  && std::abs(msg->lat) < DUNE::Math::c_pi  && std::abs(msg->lon) < DUNE::Math::c_half_pi)
            {
              m_gps_fix[0] = msg->lat;
              m_gps_fix[1] = msg->lon;
              m_gps_fix[2] = msg->height;
              m_flag_valid_pos = true;

              if (!m_flag_initial_point)
              {
                m_gps_initial_point[0] = msg->lat;
                m_gps_initial_point[1] = msg->lon;
                m_gps_initial_point[2] = msg->height;
                m_flag_initial_point = true;
              }
            }

            if (std::abs(m_hacc_average - msg->hacc) > m_args.gps_average_treshold || msg->hacc > m_args.gps_absolute_treshold || std::abs(msg->lat) > DUNE::Math::c_pi || std::abs(msg->lon) > DUNE::Math::c_half_pi)
              m_flag_valid_pos = false;
          }

          if (!(msg->validity & IMC::GpsFix::GFV_VALID_POS))
            m_flag_valid_pos = false;
        }

        void
        consume(const IMC::Depth* msg)
        {
          m_depth = msg->value;
        }

        void
        consume(const IMC::EulerAngles* msg)
        {
          m_euler_angles[0] = msg->phi;
          m_euler_angles[1] = msg->theta;
          m_euler_angles[2] = msg->psi;

          if (!m_flag_initial_orientation)
          {
            m_flag_initial_orientation = true;
            m_nu(3,0) = msg->phi;
            m_nu(4,0) = msg->theta;
            m_nu(5,0) = msg->psi;
          }
        }

        void
        consume(const IMC::GroundVelocity* msg)
        {
          if (msg->validity & IMC::GroundVelocity::VAL_VEL_X)
            m_velocities[0] = msg->x;

          if (msg->validity & IMC::GroundVelocity::VAL_VEL_Y)
            m_velocities[1] = msg->y;

          if (msg->validity & IMC::GroundVelocity::VAL_VEL_Z)
            m_velocities[2] = msg->z;

          if ((msg->validity & IMC::GroundVelocity::VAL_VEL_X) || (msg->validity & IMC::GroundVelocity::VAL_VEL_Y) || (msg->validity & IMC::GroundVelocity::VAL_VEL_Z))
            m_dvl_timeout.reset();
        }

        void
        consume(const IMC::AngularVelocity* msg)
        {
          if (m_flag_imu_active && msg->getSourceEntity() == m_imu_entity_id)
          {
            m_velocities[3] = msg->x;
            m_velocities[4] = msg->y;
            m_velocities[5] = msg->z;
          }

          if (m_flag_ahrs_active && msg->getSourceEntity() == m_ahrs_entity_id)
          {
            m_angular_vel[0] = msg->x;
            m_angular_vel[1] = msg->y;
            m_angular_vel[2] = msg->z;
          }
        }

        void
        consume(const IMC::SetThrusterActuation* msg)
        {
          m_thruster = msg->value;
        }

        void
        consume(const IMC::ServoPosition* msg)
        {
          m_servo_pos[msg->id] = msg->value;
        }

        void
        consume(const IMC::Rpm* msg)
        {
          if(!m_flag_dvl_active)
          {
            m_rpms = msg->value;
            m_velocities[0] = m_rpms * 1.6 / 1400;
          }
        }

        void
        consume(const IMC::Distance* msg)
        {
          if (m_flag_altitude_active && msg->getSourceEntity() == m_altitude_entity_id && msg->validity == IMC::Distance::DV_VALID)
          {
            m_avg_alt->update(msg->value);
            m_altitude = m_avg_alt->mean();
            m_altitude_timeout.reset();
          }

          if (!m_flag_altitude_active)
            m_altitude = -1; // Default value for invalid m_altitude measurement
        }

        void
        auvModel(void)
        {
          // Calculate Vehicle Model Coefficients and M Matrix one time
          if (!m_model_coef_init)
          {
            m_dynamics.computeModelCoeff(m_args.mass, m_args.a, m_args.b, m_args.c, m_args.volume, m_args.l, m_args.d, m_args.density, m_args.sfin, m_model_coeff);
            m_inertia_added_mass = m_dynamics.computeM(m_args.mass, m_model_coeff, m_args.zG);
            m_model_coef_init = true;
          }
          // Calculate Vehicle Model Matrices
          m_coriolis = m_dynamics.computeC(m_args.mass, m_model_coeff, m_args.zG, m_vel_est);
          m_damping = m_dynamics.computeD(m_vel_est, m_args.damping);
          m_restoring = m_dynamics.computeG(m_model_coeff, m_args.zG, m_nu_est);
          m_lift = m_dynamics.computeL(m_vel_est, m_args.l, m_model_coeff);
          m_tau = m_dynamics.computeTau(m_thruster, m_servo_pos, m_vel, m_model_coeff);
        }

        void
        rotationMatrixDerivative(void)
        {
          // Calculate Derivative of rotational matrix
          m_rotation_matrix_delta = m_delta_rotation_matrix.getDelta();
          if (m_rotation_matrix_delta == -1)
            m_rotation_matrix_delta = 0.05;

          m_rotation_matrix_diff = (m_rotation_matrix - m_rotation_matrix_ant) / m_rotation_matrix_delta;
          m_rotation_matrix_ant = m_rotation_matrix;
        }

        // Task Management
        void
        stateManagement(void)
        {
          if (!m_flag_initial_point || !m_flag_initial_orientation)
          {
            setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_GPS_FIX);
            m_task_management = false;
          }

          if (m_flag_initial_point && m_flag_initial_orientation)
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            m_task_management = true;
          }
        }

        void
        task(void)
        {
          // Entity State Management
          stateManagement();

          if (m_task_management)
          {
            // Timers Init
            if (!m_timers_init)
            {
              m_altitude_timeout.setTop(m_args.timeout_altitude);
              m_dvl_timeout.setTop(m_args.timeout_dvl);
              m_timers_init = true;
            }

            // Sensors Fault Detection
            if (m_altitude_timeout.overflow() == 1)
              m_altitude = -1;

            // Rotation Matrix and Velocities
            m_rotation_matrix = m_dynamics.computeRotationMatrix(m_euler_angles);
            m_vel = Matrix(m_velocities, 6, 1);

            // GPS Signal Acquisition
            m_orientation_delta = m_delta_orientation.getDelta();
            if (m_flag_valid_pos)
            {
              Coordinates::WGS84::getNEBearingAndRange(m_gps_initial_point[0], m_gps_initial_point[1], m_gps_fix[0], m_gps_fix[1], &m_bearing, &m_range);

              m_nu = Aux::posFromBearingAndRange(m_nu, m_range, m_bearing, m_depth);

              if (m_flag_imu_active)
              {
                if (m_orientation_delta == -1)
                  m_orientation_delta = 0.05;

                m_nu_dot = m_rotation_matrix * m_vel;
                for (int k = 3; k < 6; k++)
                  m_nu(k, 0) = m_nu(k, 0) + m_nu_dot(k, 0) * m_orientation_delta;
              }

              if (!m_flag_imu_active)
                m_nu = Aux::orientationFromEulerAngles(m_nu, m_euler_angles);

              if (!m_init_nu_est)
              {
                m_nu = Aux::posFromBearingAndRange(m_nu, m_range, m_bearing, m_depth);
                m_nu = Aux::orientationFromEulerAngles(m_nu, m_euler_angles);
                m_init_nu_est = true;
              }
            }

            // Position from measured Velocities
            m_pos_from_vel_delta = delta_posfromvel.getDelta();
            if (!m_flag_valid_pos)
            {
              if (m_pos_from_vel_delta == -1)
                m_pos_from_vel_delta = 0.05;

              m_nu_dot = m_rotation_matrix * m_vel;
              m_nu = m_nu + m_nu_dot * m_pos_from_vel_delta;
              // Depth Sensor is always available
              m_nu(2,0) = m_depth;

              if (!m_flag_imu_active)
                m_nu = Aux::orientationFromEulerAngles(m_nu, m_euler_angles);
            }

            // Normalize Vehicle Orientation
            m_nu_est = Aux::normalizePositionOrientation(m_nu_est);

            // Sliding Mode Observer Error
            if (m_init_nu_est)
            {
              //Calculate error for Sliding Mode Observer
              m_nu_error = m_nu_est - m_nu;

              // Normalize orientation error
              m_nu_error = Aux::computeStandardError(m_nu_error);

              // To minimize peaks by GPS Corrections - to be used after code tested at sea
              for (int k = 0; k < 3; k++)
              {
                if (std::abs(m_nu_error(k, 0)) >= 2)
                {
                  m_nu_error(k, 0) = 0.0;
                  m_nu_est(k, 0) = m_nu(k, 0);
                }
              }

              auvModel();
              rotationMatrixDerivative();

              // Calculate Vehicle Mode in Earth-fixed Frame
              Aux::transformToEarthFrame(&m_inertia_added_mass_n, &m_coriolis_n, &m_damping_n, &m_restoring_n, &m_lift_n, &m_tau_n, m_rotation_matrix, m_inertia_added_mass, m_coriolis, m_damping, m_restoring, m_lift, m_tau, m_rotation_matrix_diff);

              // SMO
              m_nu_dot_est = m_rotation_matrix * m_vel_est;
              // Second Order Equation
              m_nu_dot_dot_est = m_smo.generalForm(GainMatrices::parseGain(m_args.alfa2), inverse(m_inertia_added_mass_n) * (m_tau_n - m_coriolis_n * m_nu_dot_est - m_damping_n * m_nu_dot_est - m_lift_n * m_nu_dot_est - m_restoring_n), GainMatrices::computeTanh(m_nu_error, m_args.vel_bound), GainMatrices::parseGain(m_args.k2), m_nu_error);

              m_acc_est =  inverse(m_rotation_matrix) * (m_nu_dot_dot_est - m_rotation_matrix_diff * m_vel_est);

              m_vel_est_delta = m_delta_vel_est.getDelta();
              if (m_vel_est_delta == -1)
                m_vel_est_delta = 0.05;

              m_vel_est = m_vel_est + m_acc_est * m_vel_est_delta;

              // First Order Equation
              m_nu_dot_est = m_smo.generalForm(GainMatrices::parseGain(m_args.alfa1), m_rotation_matrix * m_vel_est, GainMatrices::computeTanh(m_nu_error, m_args.nu_bound), GainMatrices::parseGain(m_args.k1), m_nu_error);

              m_nu_est_delta = m_delta_nu_est.getDelta();

              if (m_nu_est_delta == -1)
                m_nu_est_delta = 0.05;

              m_nu_est = m_nu_est + m_nu_dot_est * m_nu_est_delta;
              m_nu_est = Aux::normalizePositionOrientation(m_nu_est);
            }

            m_est.x = m_nu_est(0, 0);
            m_est.y = m_nu_est(1, 0);
            m_est.z = m_nu_est(2, 0);
            m_est.phi = m_nu_est(3, 0);
            m_est.theta = m_nu_est(4, 0);
            m_est.psi = m_nu_est(5, 0);
            m_est.u = m_vel_est(0, 0);
            m_est.v = m_vel_est(1, 0);
            m_est.w = m_vel_est(2, 0);
            m_est.p = m_vel_est(3, 0);
            m_est.q = m_vel_est(4, 0);
            m_est.r = m_vel_est(5, 0);
            // 1st Method - Velocity in the navigation frame.
            Coordinates::BodyFixedFrame::toInertialFrame(m_est.phi, m_est.theta, m_est.psi,
                                                         m_est.u,   m_est.v,     m_est.w,
                                                         &m_est.vx, &m_est.vy,   &m_est.vz);
            // 2nd Method
            /*m_est.vx=m_nu_dot_est(0,0);
              m_est.vy=m_nu_dot_est(1,0);
              m_est.vz=m_nu_dot_est(2,0);*/
            m_est.lat = m_gps_initial_point[0];
            m_est.lon = m_gps_initial_point[1];
            m_est.height = m_gps_initial_point[2];
            m_est.depth = m_nu_est(2, 0);
            m_est.alt = m_altitude;
            dispatch( m_est );

            // Covariance between measure and estimated
            m_num_amostras++;
            m_cov_nu = Aux::computeCov(m_cov_nu, m_nu_est, m_nu, m_num_amostras);

            // Verify what angular velocities to use IMU/AHRS
            if(m_flag_imu_active)
              m_vel_cov = m_vel;

            if (!m_flag_imu_active && m_flag_ahrs_active)
            {
              m_vel_cov(0) = m_vel(0);
              m_vel_cov(1) = m_vel(1);
              m_vel_cov(2) = m_vel(2);
              m_vel_cov(3) = m_angular_vel[0];
              m_vel_cov(4) = m_angular_vel[1];
              m_vel_cov(5) = m_angular_vel[2];
            }

            m_cov_vel = Aux::computeCov(m_cov_vel, m_vel_est, m_vel_cov, m_num_amostras);

            // If no GPS and/or no DVL is available, Cov increases more for X and Y
            if (m_flag_valid_pos)
            {
              m_cov_multiplier = 0;
              m_cov_nu.fill(0);
              m_cov_vel.fill(0);
              m_num_amostras = 0;
            }

            if (!m_flag_valid_pos && m_flag_dvl_active)
              m_cov_multiplier = 0.01;

            if (!m_flag_valid_pos && !m_flag_dvl_active)
              m_cov_multiplier = 0.1;

            m_uncertainty.x = m_cov_nu(0,2) * m_cov_multiplier;
            m_uncertainty.y = m_cov_nu(1,2) * m_cov_multiplier;
            m_uncertainty.z = m_cov_nu(2,2) * m_cov_multiplier;
            m_uncertainty.phi = m_cov_nu(3,2);
            m_uncertainty.theta = m_cov_nu(4,2);
            m_uncertainty.psi = m_cov_nu(5,2);
            m_uncertainty.u = m_cov_vel(0,2);
            m_uncertainty.v = m_cov_vel(1,2);
            m_uncertainty.w = m_cov_vel(2,2);
            m_uncertainty.p = m_cov_vel(3,2);
            m_uncertainty.q = m_cov_vel(4,2);
            m_uncertainty.r = m_cov_vel(5,2);

            dispatch(m_uncertainty);
          }
        }
      };
    }
  }
}

DUNE_TASK
