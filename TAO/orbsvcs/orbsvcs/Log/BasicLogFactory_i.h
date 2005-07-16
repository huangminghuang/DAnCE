/* -*- C++ -*- */

//=============================================================================
/**
 *  @file   BasicLogFactory_i.h
 *
 *  $Id$
 *
 *  Implementation of the DsLogAdmin::BasicLogFactory interface.
 *
 *
 *  @author Matthew Braun <mjb2@cs.wustl.edu>
 *  @author Pradeep Gore <pradeep@cs.wustl.edu>
 *  @David A. Hanvey <d.hanvey@qub.ac.uk>
 */
//=============================================================================

#ifndef TAO_TLS_BASICLOGFACTORY_I_H
#define TAO_TLS_BASICLOGFACTORY_I_H
#include /**/ "ace/pre.h"

#include "orbsvcs/DsLogAdminS.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "orbsvcs/Log/LogMgr_i.h"
#include "orbsvcs/Log/BasicLog_i.h"

// This is to remove "inherits via dominance" warnings from MSVC.
// MSVC is being a little too paranoid.
#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#endif /* _MSC_VER */

class TAO_BasicLogActivator;

/**
 * @class TAO_BasicLogFactory_i
 *
 * @brief The BasicLogFactory is a factory that is used to create event-unaware Logs.
 */
class TAO_Log_Serv_Export TAO_BasicLogFactory_i :
  public POA_DsLogAdmin::BasicLogFactory,
  public TAO_LogMgr_i
{
public:

  //= Initialization and termination code.

  /// Constructor.
  TAO_BasicLogFactory_i ();

  /// Destructor.
  ~TAO_BasicLogFactory_i ();

  /// Activate this servant with the ORB and POA passed in.
  DsLogAdmin::BasicLogFactory_ptr
    activate (CORBA::ORB_ptr orb,
              PortableServer::POA_ptr poa
              ACE_ENV_ARG_DECL);

  /// Allows clients to create new BasicLog objects.
  /// Raises DsLogAdmin::InvalidThreshold.
  DsLogAdmin::BasicLog_ptr
    create (DsLogAdmin::LogFullActionType full_action,
            CORBA::ULongLong max_size,
            DsLogAdmin::LogId_out id
            ACE_ENV_ARG_DECL)
    ACE_THROW_SPEC ((CORBA::SystemException,
                     DsLogAdmin::InvalidLogFullAction
                     ));

  /// Same as create (), but allows clients to specify the id.
  DsLogAdmin::BasicLog_ptr
    create_with_id (DsLogAdmin::LogId id,
                    DsLogAdmin::LogFullActionType full_action,
                    CORBA::ULongLong max_size
                    ACE_ENV_ARG_DECL)
    ACE_THROW_SPEC ((
                     CORBA::SystemException,
                     DsLogAdmin::LogIdAlreadyExists,
                     DsLogAdmin::InvalidLogFullAction
                     ));

protected:
  virtual PortableServer::ObjectId* create_objectid (DsLogAdmin::LogId id);

  virtual DsLogAdmin::Log_ptr create_log_object (DsLogAdmin::LogId id);

  virtual DsLogAdmin::Log_ptr create_log_reference (DsLogAdmin::LogId id);

  /// Our object ref. after <active>ation.
  DsLogAdmin::LogMgr_var        log_mgr_;

  /// ORB.
  CORBA::ORB_var                orb_;

  /// POA.
  PortableServer::POA_var	poa_;

  /// Factory POA.
  PortableServer::POA_var	factory_poa_;

  /// Log POA.
  PortableServer::POA_var	log_poa_; 
};

#if defined(_MSC_VER)
#pragma warning(pop)
#endif /* _MSC_VER */

#include /**/ "ace/post.h"
#endif /* TAO_TLS_BASICLOGFACTORY_I_H */
