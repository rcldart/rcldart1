

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetParameterTypes_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetParameterTypes__2117690795_h
#define GetParameterTypes__2117690795_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace rcl_interfaces {
    namespace srv {
        namespace dds_ {

            extern const char *GetParameterTypes_Request_TYPENAME;

            struct GetParameterTypes_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetParameterTypes_Request_TypeSupport;
            class GetParameterTypes_Request_DataWriter;
            class GetParameterTypes_Request_DataReader;
            #endif

            class GetParameterTypes_Request_ 
            {
              public:
                typedef struct GetParameterTypes_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetParameterTypes_Request_TypeSupport TypeSupport;
                typedef GetParameterTypes_Request_DataWriter DataWriter;
                typedef GetParameterTypes_Request_DataReader DataReader;
                #endif

                DDS_StringSeq  names_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetParameterTypes_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetParameterTypes_Request_Seq, GetParameterTypes_Request_);

            NDDSUSERDllExport
            RTIBool GetParameterTypes_Request__initialize(
                GetParameterTypes_Request_* self);

            NDDSUSERDllExport
            RTIBool GetParameterTypes_Request__initialize_ex(
                GetParameterTypes_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetParameterTypes_Request__initialize_w_params(
                GetParameterTypes_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetParameterTypes_Request__finalize(
                GetParameterTypes_Request_* self);

            NDDSUSERDllExport
            void GetParameterTypes_Request__finalize_ex(
                GetParameterTypes_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetParameterTypes_Request__finalize_w_params(
                GetParameterTypes_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetParameterTypes_Request__finalize_optional_members(
                GetParameterTypes_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetParameterTypes_Request__copy(
                GetParameterTypes_Request_* dst,
                const GetParameterTypes_Request_* src);

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

            extern const char *GetParameterTypes_Response_TYPENAME;

            struct GetParameterTypes_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetParameterTypes_Response_TypeSupport;
            class GetParameterTypes_Response_DataWriter;
            class GetParameterTypes_Response_DataReader;
            #endif

            class GetParameterTypes_Response_ 
            {
              public:
                typedef struct GetParameterTypes_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetParameterTypes_Response_TypeSupport TypeSupport;
                typedef GetParameterTypes_Response_DataWriter DataWriter;
                typedef GetParameterTypes_Response_DataReader DataReader;
                #endif

                DDS_OctetSeq  types_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetParameterTypes_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetParameterTypes_Response_Seq, GetParameterTypes_Response_);

            NDDSUSERDllExport
            RTIBool GetParameterTypes_Response__initialize(
                GetParameterTypes_Response_* self);

            NDDSUSERDllExport
            RTIBool GetParameterTypes_Response__initialize_ex(
                GetParameterTypes_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetParameterTypes_Response__initialize_w_params(
                GetParameterTypes_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetParameterTypes_Response__finalize(
                GetParameterTypes_Response_* self);

            NDDSUSERDllExport
            void GetParameterTypes_Response__finalize_ex(
                GetParameterTypes_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetParameterTypes_Response__finalize_w_params(
                GetParameterTypes_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetParameterTypes_Response__finalize_optional_members(
                GetParameterTypes_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetParameterTypes_Response__copy(
                GetParameterTypes_Response_* dst,
                const GetParameterTypes_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace rcl_interfaces  */

#endif /* GetParameterTypes_ */

