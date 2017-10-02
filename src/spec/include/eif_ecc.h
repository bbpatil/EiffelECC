#ifdef EIF_WINDOWS
/* To avoid a warning because _WINSOCKAPI_ is already defined, we remove its definition temporarely. */
#ifdef _WINSOCKAPI_
#undef _WINSOCKAPI_
#define EIF_WINSOCKAPI_OVERRIDE
#endif

#include <winsock2.h>

/* If we have disabled _WINSOCKAPI, we have to restore it in case <winsock2.h> didn't.
 * Also remove EIF_WINSOCKAPI_OVERRIDE as it was just for this current header file. */
#ifdef EIF_WINSOCKAPI_OVERRIDE
#ifndef _WINSOCKAPI_
#define _WINSOCKAPI_
#endif
#undef EIF_WINSOCKAPI_OVERRIDE
#endif

#endif

#include <openssl/ec.h>      // for EC_GROUP_new_by_curve_name, EC_GROUP_free, EC_KEY_new, EC_KEY_set_group, EC_KEY_generate_key, EC_KEY_free
#include <openssl/ecdsa.h>   // for ECDSA_do_sign, ECDSA_do_verify
#include <openssl/obj_mac.h> // for NID_secp192k1
#include <openssl/bn.h> 	 // for BN_bn2hex, 


