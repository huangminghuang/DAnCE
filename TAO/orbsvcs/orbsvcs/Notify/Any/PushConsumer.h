/* -*- C++ -*- */
/**
 *  @file PushConsumer.h
 *
 *  $Id$
 *
 *  @author Pradeep Gore <pradeep@oomworks.com>
 *
 *
 */

#ifndef TAO_Notify_PUSHCONSUMER_H
#define TAO_Notify_PUSHCONSUMER_H
#include /**/ "ace/pre.h"

#include "../notify_serv_export.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "orbsvcs/CosNotifyCommC.h"
#include "../Consumer.h"

/**
 * @class TAO_Notify_PushConsumer
 *
 * @brief Wrapper for the PushConsumer that connect to the EventChannel.
 *
 */
class TAO_Notify_Serv_Export TAO_Notify_PushConsumer : public TAO_Notify_Consumer
{
public:
  /// Constuctor
  TAO_Notify_PushConsumer (TAO_Notify_ProxySupplier* proxy);

  /// Destructor
  ~TAO_Notify_PushConsumer ();

  /// Init
  void init (CosEventComm::PushConsumer_ptr push_consumer ACE_ENV_ARG_DECL);

  /// TAO_Notify_Destroy_Callback methods.
  virtual void release (void);

  /// Push <event> to this consumer.
//  virtual void push_i (const TAO_Notify_Event* event ACE_ENV_ARG_DECL);

  /// Push <event> to this consumer.
  virtual void push (const CORBA::Any& event ACE_ENV_ARG_DECL);

  /// Push <event> to this consumer.
  virtual void push (const CosNotification::StructuredEvent& event ACE_ENV_ARG_DECL);

  /// Push a batch of events to this consumer.
  virtual void push (const CosNotification::EventBatch& event ACE_ENV_ARG_DECL);

  /// Retrieve the ior of this peer
  virtual bool get_ior (ACE_CString & iorstr) const;

  /// on reconnect we need to move events from the old consumer
  /// to the new one
  virtual void reconnect_from_consumer (
    TAO_Notify_Consumer* old_consumer
    ACE_ENV_ARG_DECL);

protected:
  /// The Consumer
  CosEventComm::PushConsumer_var push_consumer_;
};

#include /**/ "ace/post.h"
#endif /* TAO_Notify_PUSHCONSUMER_H */
