

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetParameters_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetParameters__1591893070_h
#define GetParameters__1591893070_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "rcl_interfaces/msg/dds_connext/ParameterValue_.h"
namespace rcl_interfaces {
    namespace srv {
        namespace dds_ {

            extern const char *GetParameters_Request_TYPENAME;

            struct GetParameters_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetParameters_Request_TypeSupport;
            class GetParameters_Request_DataWriter;
            class GetParameters_Request_DataReader;
            #endif

            class GetParameters_Request_ 
            {
              public:
                typedef struct GetParameters_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetParameters_Request_TypeSupport TypeSupport;
                typedef GetParameters_Request_DataWriter DataWriter;
                typedef GetParameters_Request_DataReader DataReader;
                #endif

                DDS_StringSeq  names_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetParameters_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetParameters_Request_Seq, GetParameters_Request_);

            NDDSUSERDllExport
            RTIBool GetParameters_Request__initialize(
                GetParameters_Request_* self);

            NDDSUSERDllExport
            RTIBool GetParameters_Request__initialize_ex(
                GetParameters_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetParameters_Request__initialize_w_params(
                GetParameters_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetParameters_Request__finalize(
                GetParameters_Request_* self);

            NDDSUSERDllExport
            void GetParameters_Request__finalize_ex(
                GetParameters_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetParameters_Request__finalize_w_params(
                GetParameters_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetParameters_Request__finalize_optional_members(
                GetParameters_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetParameters_Request__copy(
                GetParameters_Request_* dst,
                const GetParameters_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace rcl_interfaces  */
namespace rcl_interfaces {
    namespace srv {
        namespace dds_ {

            extern const char *GetParameters_Response_TYPENAME;

            struct GetParameters_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetParameters_Response_TypeSupport;
            class GetParameters_Response_DataWriter;
            class GetParameters_Response_DataReader;
            #endif

            class GetParameters_Response_ 
            {
              public:
                typedef struct GetParameters_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetParameters_Response_TypeSupport TypeSupport;
                typedef GetParameters_Response_DataWriter DataWriter;
                typedef GetParameters_Response_DataReader DataReader;
                #endif

                rcl_interfaces::msg::dds_::ParameterValue_Seq  values_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetParameters_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetParameters_Response_Seq, GetParameters_Response_);

            NDDSUSERDllExport
            RTIBool GetParameters_Response__initialize(
                GetParameters_Response_* self);

            NDDSUSERDllExport
            RTIBool GetParameters_Response__initialize_ex(
                GetParameters_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetParameters_Response__initialize_w_params(
                GetParameters_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetParameters_Response__finalize(
                GetParameters_Response_* self);

            NDDSUSERDllExport
            void GetParameters_Response__finalize_ex(
                GetParameters_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetParameters_Response__finalize_w_params(
                GetParameters_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetParameters_Response__finalize_optional_members(
                GetParameters_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetParameters_Response__copy(
                GetParameters_Response_* dst,
                const GetParameters_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace rcl_interfaces  */

#endif /* GetParameters_ */

