// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be\be_codegen.cpp:302


#include "PI_ForwardC.h"
#include "tao/CDR.h"
#include "tao/ORB_Core.h"
#include "tao/Typecode.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

#if !defined (__ACE_INLINE__)
#include "PI_ForwardC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:65

// Arg traits specializations.
namespace TAO
{
}


// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_PortableInterceptor_ServerId[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  45,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x506f7274), 
  ACE_NTOHL (0x61626c65), 
  ACE_NTOHL (0x496e7465), 
  ACE_NTOHL (0x72636570), 
  ACE_NTOHL (0x746f722f), 
  ACE_NTOHL (0x53657276), 
  ACE_NTOHL (0x65724964), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/PortableInterceptor/ServerId:1.0
    9,
  ACE_NTOHL (0x53657276), 
  ACE_NTOHL (0x65724964), 
  ACE_NTOHL (0x0),  // name = ServerId
    CORBA::tk_string, 
  0U, // string length
};

static CORBA::TypeCode _tc_TAO_tc_PortableInterceptor_ServerId (
    CORBA::tk_alias,
    sizeof (_oc_PortableInterceptor_ServerId),
    (char *) &_oc_PortableInterceptor_ServerId,
    0,
    0
  );

namespace PortableInterceptor
{
  ::CORBA::TypeCode_ptr _tc_ServerId =
    &_tc_TAO_tc_PortableInterceptor_ServerId;
}

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_PortableInterceptor_ORBId[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  42,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x506f7274), 
  ACE_NTOHL (0x61626c65), 
  ACE_NTOHL (0x496e7465), 
  ACE_NTOHL (0x72636570), 
  ACE_NTOHL (0x746f722f), 
  ACE_NTOHL (0x4f524249), 
  ACE_NTOHL (0x643a312e), 
  ACE_NTOHL (0x30000000),  // repository ID = IDL:omg.org/PortableInterceptor/ORBId:1.0
    6,
  ACE_NTOHL (0x4f524249), 
  ACE_NTOHL (0x64000000),  // name = ORBId
    CORBA::tk_string, 
  0U, // string length
};

static CORBA::TypeCode _tc_TAO_tc_PortableInterceptor_ORBId (
    CORBA::tk_alias,
    sizeof (_oc_PortableInterceptor_ORBId),
    (char *) &_oc_PortableInterceptor_ORBId,
    0,
    0
  );

namespace PortableInterceptor
{
  ::CORBA::TypeCode_ptr _tc_ORBId =
    &_tc_TAO_tc_PortableInterceptor_ORBId;
}

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_PortableInterceptor_AdapterName[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  48,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x506f7274), 
  ACE_NTOHL (0x61626c65), 
  ACE_NTOHL (0x496e7465), 
  ACE_NTOHL (0x72636570), 
  ACE_NTOHL (0x746f722f), 
  ACE_NTOHL (0x41646170), 
  ACE_NTOHL (0x7465724e), 
  ACE_NTOHL (0x616d653a), 
  ACE_NTOHL (0x312e3000),  // repository ID = IDL:omg.org/PortableInterceptor/AdapterName:1.0
    12,
  ACE_NTOHL (0x41646170), 
  ACE_NTOHL (0x7465724e), 
  ACE_NTOHL (0x616d6500),  // name = AdapterName
    CORBA::tk_alias, // typecode kind for typedefs
  80, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    32,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x434f5242), 
    ACE_NTOHL (0x412f5374), 
    ACE_NTOHL (0x72696e67), 
    ACE_NTOHL (0x5365713a), 
    ACE_NTOHL (0x312e3000),  // repository ID = IDL:omg.org/CORBA/StringSeq:1.0
        10,
    ACE_NTOHL (0x53747269), 
    ACE_NTOHL (0x6e675365), 
    ACE_NTOHL (0x71000000),  // name = StringSeq
        CORBA::tk_sequence, // typecode kind
    16, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      CORBA::tk_string, 
      0U, // string length
      0U,


};

static CORBA::TypeCode _tc_TAO_tc_PortableInterceptor_AdapterName (
    CORBA::tk_alias,
    sizeof (_oc_PortableInterceptor_AdapterName),
    (char *) &_oc_PortableInterceptor_AdapterName,
    0,
    0
  );

namespace PortableInterceptor
{
  ::CORBA::TypeCode_ptr _tc_AdapterName =
    &_tc_TAO_tc_PortableInterceptor_AdapterName;
}

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_PortableInterceptor_ObjectId[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  45,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x506f7274), 
  ACE_NTOHL (0x61626c65), 
  ACE_NTOHL (0x496e7465), 
  ACE_NTOHL (0x72636570), 
  ACE_NTOHL (0x746f722f), 
  ACE_NTOHL (0x4f626a65), 
  ACE_NTOHL (0x63744964), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/PortableInterceptor/ObjectId:1.0
    9,
  ACE_NTOHL (0x4f626a65), 
  ACE_NTOHL (0x63744964), 
  ACE_NTOHL (0x0),  // name = ObjectId
    CORBA::tk_alias, // typecode kind for typedefs
  76, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    31,
    ACE_NTOHL (0x49444c3a), 
    ACE_NTOHL (0x6f6d672e), 
    ACE_NTOHL (0x6f72672f), 
    ACE_NTOHL (0x434f5242), 
    ACE_NTOHL (0x412f4f63), 
    ACE_NTOHL (0x74657453), 
    ACE_NTOHL (0x65713a31), 
    ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/CORBA/OctetSeq:1.0
        9,
    ACE_NTOHL (0x4f637465), 
    ACE_NTOHL (0x74536571), 
    ACE_NTOHL (0x0),  // name = OctetSeq
        CORBA::tk_sequence, // typecode kind
    12, // encapsulation length
      TAO_ENCAP_BYTE_ORDER, // byte order
      CORBA::tk_octet,

      0U,


};

static CORBA::TypeCode _tc_TAO_tc_PortableInterceptor_ObjectId (
    CORBA::tk_alias,
    sizeof (_oc_PortableInterceptor_ObjectId),
    (char *) &_oc_PortableInterceptor_ObjectId,
    0,
    0
  );

namespace PortableInterceptor
{
  ::CORBA::TypeCode_ptr _tc_ObjectId =
    &_tc_TAO_tc_PortableInterceptor_ObjectId;
}

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_PortableInterceptor_AdapterManagerId[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  53,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x506f7274), 
  ACE_NTOHL (0x61626c65), 
  ACE_NTOHL (0x496e7465), 
  ACE_NTOHL (0x72636570), 
  ACE_NTOHL (0x746f722f), 
  ACE_NTOHL (0x41646170), 
  ACE_NTOHL (0x7465724d), 
  ACE_NTOHL (0x616e6167), 
  ACE_NTOHL (0x65724964), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/PortableInterceptor/AdapterManagerId:1.0
    17,
  ACE_NTOHL (0x41646170), 
  ACE_NTOHL (0x7465724d), 
  ACE_NTOHL (0x616e6167), 
  ACE_NTOHL (0x65724964), 
  ACE_NTOHL (0x0),  // name = AdapterManagerId
    CORBA::tk_long,

};

static CORBA::TypeCode _tc_TAO_tc_PortableInterceptor_AdapterManagerId (
    CORBA::tk_alias,
    sizeof (_oc_PortableInterceptor_AdapterManagerId),
    (char *) &_oc_PortableInterceptor_AdapterManagerId,
    0,
    0
  );

namespace PortableInterceptor
{
  ::CORBA::TypeCode_ptr _tc_AdapterManagerId =
    &_tc_TAO_tc_PortableInterceptor_AdapterManagerId;
}

// TAO_IDL - Generated from
// be\be_visitor_typecode/typecode_defn.cpp:295

static const CORBA::Long _oc_PortableInterceptor_AdapterState[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  49,
  ACE_NTOHL (0x49444c3a), 
  ACE_NTOHL (0x6f6d672e), 
  ACE_NTOHL (0x6f72672f), 
  ACE_NTOHL (0x506f7274), 
  ACE_NTOHL (0x61626c65), 
  ACE_NTOHL (0x496e7465), 
  ACE_NTOHL (0x72636570), 
  ACE_NTOHL (0x746f722f), 
  ACE_NTOHL (0x41646170), 
  ACE_NTOHL (0x74657253), 
  ACE_NTOHL (0x74617465), 
  ACE_NTOHL (0x3a312e30), 
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/PortableInterceptor/AdapterState:1.0
    13,
  ACE_NTOHL (0x41646170), 
  ACE_NTOHL (0x74657253), 
  ACE_NTOHL (0x74617465), 
  ACE_NTOHL (0x0),  // name = AdapterState
    CORBA::tk_short,

};

static CORBA::TypeCode _tc_TAO_tc_PortableInterceptor_AdapterState (
    CORBA::tk_alias,
    sizeof (_oc_PortableInterceptor_AdapterState),
    (char *) &_oc_PortableInterceptor_AdapterState,
    0,
    0
  );

namespace PortableInterceptor
{
  ::CORBA::TypeCode_ptr _tc_AdapterState =
    &_tc_TAO_tc_PortableInterceptor_AdapterState;
}

// TAO_IDL - Generated from
// be\be_visitor_root/root.cpp:1629

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 
