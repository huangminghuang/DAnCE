// -*- C++ -*-
// $Id$

// ============================================================================
//
// = LIBRARY
//    PortableServer
//
// = FILENAME
//    Default_Acceptor_Filter.h
//
// = DESCRIPTION
//     Default strategy for populating mprofile
//
// = AUTHOR
//     Carlos O'Ryan
//
// ============================================================================

#ifndef TAO_DEFAULT_ACCEPTOR_FILTER_H
#define TAO_DEFAULT_ACCEPTOR_FILTER_H
#include "ace/pre.h"

#include "portableserver_export.h"
#include "tao/Acceptor_Filter.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

// This is to remove "inherits via dominance" warnings from MSVC.
// MSVC is being a little too paranoid.
#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

class TAO_Acceptor;

class TAO_PortableServer_Export TAO_Default_Acceptor_Filter : public TAO_Acceptor_Filter
{
  // = TITLE
  //   Default Acceptor_Filter.
  //
  // = DESCRIPTION
  //   Default strategy for populating mprofile: all available
  //   endpoints are included.
  //
public:
  TAO_Default_Acceptor_Filter (void);

  virtual int fill_mprofile (const TAO_ObjectKey &object_key,
                             TAO_MProfile &mprofile,
                             TAO_Acceptor **acceptors_begin,
                             TAO_Acceptor **acceptors_end);
  // Populate <mprofile> with all available endpoints.
};

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#include "ace/post.h"
#endif /* TAO_POA_H */
