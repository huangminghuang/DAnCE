
// @author Jeff Mirwaisi <jeff_mirwaisi@yahoo.com>
// @author Iliyan Jeliazkov <iliyan2ociweb.com>

//the following is a simplification of the above problems and the different
//scenarios minus the creation of the servant the service manager or threads
//even without the servant to demonstrate that the server is capable of
//responding (which in some cases it isnt) problems can allready be seen
//in the multiple orb scenarios AB b isnt prompted for a new certificate
//password, MA ssliop isnt loaded at all etc


/// It's a test - we need ACE_ASSERT
#ifdef ACE_NDEBUG
#  undef ACE_NDEBUG
#endif

#include "tao/corba.h"
#include "ace/ARGV.h"

#define MORB_MA

ACE_RCSID (tests, server, "$Id$")


#include "Service_Configuration_Per_ORB.h"

// @brief The "new" interfaces must be compatible with the "old" ones

int
testBug14559 (int , ACE_TCHAR *[])
{
  ACE_TRACE ("testBug14559");
  const char argA[] = "-ORBId ORB-A -ORBSvcConf a.conf";

  //dynamic SSLIOP_Factory Service_Object * TAO_SSLIOP:_make_TAO_SSLIOP_Protocol_Factory() "-SSLAuthenticate SERVER_AND_CLIENT -SSLPrivateKey PEM:server_key.pem -SSLCertificate PEM:server_cert.pem";
  //static Resource_Factory "-ORBProtocolFactory SSLIOP_Factory"

  //  const char argB[] = "-ORBSvcConf b.conf";

  //dynamic SSLIOP_Factory Service_Object * TAO_SSLIOP:_make_TAO_SSLIOP_Protocol_Factory() "-SSLAuthenticate SERVER_AND_CLIENT -SSLPrivateKey PEM:client_key.pem -SSLCertificate PEM:client_cert.pem"
  //static Resource_Factory "-ORBProtocolFactory SSLIOP_Factory"

  const char argM[] = "-ORBId ORB-M -ORBSvcConf m.conf";

//dynamic UIPMC_Factory Service_Object * TAO_PortableGroup:_make_TAO_UIPMC_Protocol_Factory() ""
//static Resource_Factory "-ORBProtocolFactory IIOP_Factory -ORBProtocolFactory UIPMC_Factory"
//#static PortableGroup_Loader ""
//dynamic PortableGroup_Loader Service_Object * TAO_PortableGroup:_make_TAO_PortableGroup_Loader() ""

//  const char argAM[] = "-ORBSvcConf am.conf";

//combination of A followed by M (above)

//  const char argMA[] = "-ORBSvcConf ma.conf";

//combination of M followed by A (above)

  try
  {

#ifdef SORB_AM
    ACE_ARGV arg0(argAM);
    int n = arg0.argc();
    CORBA::ORB_var ORBA = CORBA::ORB_init(n,arg0.argv());
#else
    ACE_UNUSED_ARG (argAM);
#endif /* SORB_AM */

#ifdef SORB_MA
    ACE_ARGV arg0(argMA);
    int n = arg0.argc();
    CORBA::ORB_var ORBA = CORBA::ORB_init(n,arg0.argv());
#else
    ACE_UNUSED_ARG (argMA);
#endif /* SORB_MA */

#ifdef MORB_AB
    ACE_ARGV arg0(argA);
    int n = arg0.argc();
    CORBA::ORB_var ORBA = CORBA::ORB_init(n,arg0.argv());
    ACE_ARGV arg1(argB);
    n = arg1.argc();
    CORBA::ORB_var ORBB = CORBA::ORB_init(n,arg1.argv());
#else
    ACE_UNUSED_ARG (argA);
    ACE_UNUSED_ARG (argB);
#endif /* MORB_AB */

#ifdef MORB_AM
    ACE_ARGV arg0(argA);
    int n = arg0.argc();
    CORBA::ORB_var ORBA = CORBA::ORB_init(n,arg0.argv());
    ACE_ARGV arg1(argM);
    n = arg1.argc();
    CORBA::ORB_var ORBB = CORBA::ORB_init(n,arg1.argv());
#else
    ACE_UNUSED_ARG (argA);
    ACE_UNUSED_ARG (argM);
#endif /* MORB_AM */

#ifdef MORB_MA
    int n = 0;
    ACE_ARGV arg0(argM);
    n = arg0.argc();
    CORBA::ORB_var ORBA = CORBA::ORB_init(n, arg0.argv());

    ACE_ARGV arg1(argA);
    n = arg1.argc();
    CORBA::ORB_var ORBB = CORBA::ORB_init(n, arg1.argv());
#else
    ACE_UNUSED_ARG (argM);
    ACE_UNUSED_ARG (argA);
#endif /* MORB_MA */

  }
  catch(const CORBA::Exception& ex)
    {
      ACE_PRINT_EXCEPTION (ex, "Unhandled exception caught");
      return -1;
    }
  catch(...)
    {
      ACE_ERROR ((LM_ERROR, "Uhandled exception\n"));
    }
  return 0;
}

// @brief the main driver

int
run_main(int argc, ACE_TCHAR *argv[])
{
  return testBug14559(argc, argv);
}
