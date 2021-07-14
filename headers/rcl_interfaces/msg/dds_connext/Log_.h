

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Log_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Log__2076272399_h
#define Log__2076272399_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Time_.h"
namespace rcl_interfaces {
    namespace msg {
        namespace dds_ {
            namespace Log_Constants {
                static const DDS_Octet DEBUG_= 10;
                static const DDS_Octet INFO_= 20;
                static const DDS_Octet WARN_= 30;
                static const DDS_Octet ERROR_= 40;
                static const DDS_Octet FATAL_= 50;
            } /* namespace Log_Constants  */

            extern const char *Log_TYPENAME;

            struct Log_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Log_TypeSupport;
            class Log_DataWriter;
            class Log_DataReader;
            #endif

            class Log_ 
            {
              public:
                typedef struct Log_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Log_TypeSupport TypeSupport;
                typedef Log_DataWriter DataWriter;
                typedef Log_DataReader DataReader;
                #endif

                builtin_interfaces::msg::dds_::Time_   stamp_ ;
                DDS_Octet   level_ ;
                DDS_Char *   name_ ;
                DDS_Char *   msg_ ;
                DDS_Char *   file_ ;
                DDS_Char *   function_ ;
                DDS_UnsignedLong   line_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Log__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Log_Seq, Log_);

            NDDSUSERDllExport
            RTIBool Log__initialize(
                Log_* self);

            NDDSUSERDllExport
            RTIBool Log__initialize_ex(
                Log_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Log__initialize_w_params(
                Log_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Log__finalize(
                Log_* self);

            NDDSUSERDllExport
            void Log__finalize_ex(
                Log_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Log__finalize_w_params(
                Log_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Log__finalize_optional_members(
                Log_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Log__copy(
                Log_* dst,
                const Log_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace rcl_interfaces  */

#endif /* Log_ */

