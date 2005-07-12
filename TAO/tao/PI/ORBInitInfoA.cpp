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

#include "ORBInitInfoC.h"
#include "tao/Null_RefCount_Policy.h"
#include "tao/TypeCode_Constants.h"
#include "tao/Alias_TypeCode_Static.h"
#include "tao/Objref_TypeCode_Static.h"
#include "tao/String_TypeCode_Static.h"
#include "tao/Struct_TypeCode_Static.h"
#include "tao/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/Any.h"
#include "tao/Any_Impl_T.h"
#include "tao/Any_Dual_Impl_T.h"

// TAO_IDL - Generated from
// be\be_visitor_typecode/alias_typecode.cpp:50

static TAO::TypeCode::Alias<char const *,
                            CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_PortableInterceptor_ORBInitInfo_ObjectId (
    CORBA::tk_alias,
    "IDL:omg.org/PortableInterceptor/ORBInitInfo/ObjectId:1.0",
    "ObjectId",
    &CORBA::_tc_string);
  
::CORBA::TypeCode_ptr const PortableInterceptor::ORBInitInfo::_tc_ObjectId =
  &_tao_tc_PortableInterceptor_ORBInitInfo_ObjectId;

// TAO_IDL - Generated from
// be\be_visitor_typecode/struct_typecode.cpp:87

static TAO::TypeCode::Struct_Field<char const *, CORBA::TypeCode_ptr const *> const _tao_fields_PortableInterceptor_ORBInitInfo_DuplicateName[] =
  {
    { "name", &CORBA::_tc_string }
    
  };
static TAO::TypeCode::Struct<char const *,
                      CORBA::TypeCode_ptr const *,
                      TAO::TypeCode::Struct_Field<char const *, CORBA::TypeCode_ptr const *> const *,
                      TAO::Null_RefCount_Policy>
  _tao_tc_PortableInterceptor_ORBInitInfo_DuplicateName (
    CORBA::tk_except,
    "IDL:omg.org/PortableInterceptor/ORBInitInfo/DuplicateName:1.0",
    "DuplicateName",
    _tao_fields_PortableInterceptor_ORBInitInfo_DuplicateName,
    1);
  
::CORBA::TypeCode_ptr const PortableInterceptor::ORBInitInfo::_tc_DuplicateName =
  &_tao_tc_PortableInterceptor_ORBInitInfo_DuplicateName;

// TAO_IDL - Generated from
// be\be_visitor_typecode/struct_typecode.cpp:87

static TAO::TypeCode::Struct_Field<char const *, CORBA::TypeCode_ptr const *> const * const _tao_fields_PortableInterceptor_ORBInitInfo_InvalidName = 0;
static TAO::TypeCode::Struct<char const *,
                      CORBA::TypeCode_ptr const *,
                      TAO::TypeCode::Struct_Field<char const *, CORBA::TypeCode_ptr const *> const *,
                      TAO::Null_RefCount_Policy>
  _tao_tc_PortableInterceptor_ORBInitInfo_InvalidName (
    CORBA::tk_except,
    "IDL:omg.org/PortableInterceptor/ORBInitInfo/InvalidName:1.0",
    "InvalidName",
    _tao_fields_PortableInterceptor_ORBInitInfo_InvalidName,
    0);
  
::CORBA::TypeCode_ptr const PortableInterceptor::ORBInitInfo::_tc_InvalidName =
  &_tao_tc_PortableInterceptor_ORBInitInfo_InvalidName;

// TAO_IDL - Generated from
// be\be_visitor_typecode/objref_typecode.cpp:76

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_PortableInterceptor_ORBInitInfo (
    CORBA::tk_local_interface,
    "IDL:omg.org/PortableInterceptor/ORBInitInfo:1.0",
    "ORBInitInfo");
  
namespace PortableInterceptor
{
  ::CORBA::TypeCode_ptr const _tc_ORBInitInfo =
    &_tao_tc_PortableInterceptor_ORBInitInfo;
}



// TAO_IDL - Generated from
// be\be_visitor_interface/any_op_cs.cpp:50

namespace TAO
{
  template<>
  CORBA::Boolean
  Any_Impl_T<PortableInterceptor::ORBInitInfo>::to_object (
      CORBA::Object_ptr &_tao_elem
    ) const
  {
    _tao_elem = CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  CORBA::Boolean
  Any_Impl_T<PortableInterceptor::ORBInitInfo>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }
  
  template<>
  CORBA::Boolean
  Any_Impl_T<PortableInterceptor::ORBInitInfo>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    PortableInterceptor::ORBInitInfo_ptr _tao_elem
  )
{
  PortableInterceptor::ORBInitInfo_ptr _tao_objptr =
    PortableInterceptor::ORBInitInfo::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    PortableInterceptor::ORBInitInfo_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<PortableInterceptor::ORBInitInfo>::insert (
      _tao_any,
      PortableInterceptor::ORBInitInfo::_tao_any_destructor,
      PortableInterceptor::_tc_ORBInitInfo,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    PortableInterceptor::ORBInitInfo_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<PortableInterceptor::ORBInitInfo>::extract (
        _tao_any,
        PortableInterceptor::ORBInitInfo::_tao_any_destructor,
        PortableInterceptor::_tc_ORBInitInfo,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// be\be_visitor_exception/any_op_cs.cpp:50

namespace TAO
{
  template<>
  CORBA::Boolean
  Any_Dual_Impl_T<PortableInterceptor::ORBInitInfo::DuplicateName>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }
  
  template<>
  CORBA::Boolean
  Any_Dual_Impl_T<PortableInterceptor::ORBInitInfo::DuplicateName>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const PortableInterceptor::ORBInitInfo::DuplicateName &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<PortableInterceptor::ORBInitInfo::DuplicateName>::insert_copy (
      _tao_any,
      PortableInterceptor::ORBInitInfo::DuplicateName::_tao_any_destructor,
      PortableInterceptor::ORBInitInfo::_tc_DuplicateName,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    PortableInterceptor::ORBInitInfo::DuplicateName *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<PortableInterceptor::ORBInitInfo::DuplicateName>::insert (
      _tao_any,
      PortableInterceptor::ORBInitInfo::DuplicateName::_tao_any_destructor,
      PortableInterceptor::ORBInitInfo::_tc_DuplicateName,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    PortableInterceptor::ORBInitInfo::DuplicateName *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const PortableInterceptor::ORBInitInfo::DuplicateName *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const PortableInterceptor::ORBInitInfo::DuplicateName *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<PortableInterceptor::ORBInitInfo::DuplicateName>::extract (
        _tao_any,
        PortableInterceptor::ORBInitInfo::DuplicateName::_tao_any_destructor,
        PortableInterceptor::ORBInitInfo::_tc_DuplicateName,
        _tao_elem
      );
}

// TAO_IDL - Generated from 
// be\be_visitor_exception/any_op_cs.cpp:50

namespace TAO
{
  template<>
  CORBA::Boolean
  Any_Dual_Impl_T<PortableInterceptor::ORBInitInfo::InvalidName>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }
  
  template<>
  CORBA::Boolean
  Any_Dual_Impl_T<PortableInterceptor::ORBInitInfo::InvalidName>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const PortableInterceptor::ORBInitInfo::InvalidName &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<PortableInterceptor::ORBInitInfo::InvalidName>::insert_copy (
      _tao_any,
      PortableInterceptor::ORBInitInfo::InvalidName::_tao_any_destructor,
      PortableInterceptor::ORBInitInfo::_tc_InvalidName,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    PortableInterceptor::ORBInitInfo::InvalidName *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<PortableInterceptor::ORBInitInfo::InvalidName>::insert (
      _tao_any,
      PortableInterceptor::ORBInitInfo::InvalidName::_tao_any_destructor,
      PortableInterceptor::ORBInitInfo::_tc_InvalidName,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    PortableInterceptor::ORBInitInfo::InvalidName *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const PortableInterceptor::ORBInitInfo::InvalidName *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const PortableInterceptor::ORBInitInfo::InvalidName *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<PortableInterceptor::ORBInitInfo::InvalidName>::extract (
        _tao_any,
        PortableInterceptor::ORBInitInfo::InvalidName::_tao_any_destructor,
        PortableInterceptor::ORBInitInfo::_tc_InvalidName,
        _tao_elem
      );
}
