

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DescribeParameters_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DescribeParameters__755967466_h
#define DescribeParameters__755967466_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "rcl_interfaces/msg/dds_connext/ParameterDescriptor_.h"
namespace rcl_interfaces {
    namespace srv {
        namespace dds_ {

            extern const char *DescribeParameters_Request_TYPENAME;

            struct DescribeParameters_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DescribeParameters_Request_TypeSupport;
            class DescribeParameters_Request_DataWriter;
            class DescribeParameters_Request_DataReader;
            #endif

            class DescribeParameters_Request_ 
            {
              public:
                typedef struct DescribeParameters_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DescribeParameters_Request_TypeSupport TypeSupport;
                typedef DescribeParameters_Request_DataWriter DataWriter;
                typedef DescribeParameters_Request_DataReader DataReader;
                #endif

                DDS_StringSeq  names_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* DescribeParameters_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DescribeParameters_Request_Seq, DescribeParameters_Request_);

            NDDSUSERDllExport
            RTIBool DescribeParameters_Request__initialize(
                DescribeParameters_Request_* self);

            NDDSUSERDllExport
            RTIBool DescribeParameters_Request__initialize_ex(
                DescribeParameters_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DescribeParameters_Request__initialize_w_params(
                DescribeParameters_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DescribeParameters_Request__finalize(
                DescribeParameters_Request_* self);

            NDDSUSERDllExport
            void DescribeParameters_Request__finalize_ex(
                DescribeParameters_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DescribeParameters_Request__finalize_w_params(
                DescribeParameters_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DescribeParameters_Request__finalize_optional_members(
                DescribeParameters_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DescribeParameters_Request__copy(
                DescribeParameters_Request_* dst,
                const DescribeParameters_Request_* src);

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

            extern const char *DescribeParameters_Response_TYPENAME;

            struct DescribeParameters_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DescribeParameters_Response_TypeSupport;
            class DescribeParameters_Response_DataWriter;
            class DescribeParameters_Response_DataReader;
            #endif

            class DescribeParameters_Response_ 
            {
              public:
                typedef struct DescribeParameters_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DescribeParameters_Response_TypeSupport TypeSupport;
                typedef DescribeParameters_Response_DataWriter DataWriter;
                typedef DescribeParameters_Response_DataReader DataReader;
                #endif

                rcl_interfaces::msg::dds_::ParameterDescriptor_Seq  descriptors_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* DescribeParameters_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DescribeParameters_Response_Seq, DescribeParameters_Response_);

            NDDSUSERDllExport
            RTIBool DescribeParameters_Response__initialize(
                DescribeParameters_Response_* self);

            NDDSUSERDllExport
            RTIBool DescribeParameters_Response__initialize_ex(
                DescribeParameters_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DescribeParameters_Response__initialize_w_params(
                DescribeParameters_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DescribeParameters_Response__finalize(
                DescribeParameters_Response_* self);

            NDDSUSERDllExport
            void DescribeParameters_Response__finalize_ex(
                DescribeParameters_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DescribeParameters_Response__finalize_w_params(
                DescribeParameters_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DescribeParameters_Response__finalize_optional_members(
                DescribeParameters_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DescribeParameters_Response__copy(
                DescribeParameters_Response_* dst,
                const DescribeParameters_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace rcl_interfaces  */

#endif /* DescribeParameters_ */

