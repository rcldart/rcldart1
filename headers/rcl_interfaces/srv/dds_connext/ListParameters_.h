

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ListParameters_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ListParameters__878500876_h
#define ListParameters__878500876_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "rcl_interfaces/msg/dds_connext/ListParametersResult_.h"
namespace rcl_interfaces {
    namespace srv {
        namespace dds_ {
            namespace ListParameters_Request_Constants {
                static const DDS_UnsignedLongLong DEPTH_RECURSIVE_= 0ULL;
            } /* namespace ListParameters_Request_Constants  */

            extern const char *ListParameters_Request_TYPENAME;

            struct ListParameters_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ListParameters_Request_TypeSupport;
            class ListParameters_Request_DataWriter;
            class ListParameters_Request_DataReader;
            #endif

            class ListParameters_Request_ 
            {
              public:
                typedef struct ListParameters_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ListParameters_Request_TypeSupport TypeSupport;
                typedef ListParameters_Request_DataWriter DataWriter;
                typedef ListParameters_Request_DataReader DataReader;
                #endif

                DDS_StringSeq  prefixes_ ;
                DDS_UnsignedLongLong   depth_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ListParameters_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ListParameters_Request_Seq, ListParameters_Request_);

            NDDSUSERDllExport
            RTIBool ListParameters_Request__initialize(
                ListParameters_Request_* self);

            NDDSUSERDllExport
            RTIBool ListParameters_Request__initialize_ex(
                ListParameters_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ListParameters_Request__initialize_w_params(
                ListParameters_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ListParameters_Request__finalize(
                ListParameters_Request_* self);

            NDDSUSERDllExport
            void ListParameters_Request__finalize_ex(
                ListParameters_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ListParameters_Request__finalize_w_params(
                ListParameters_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ListParameters_Request__finalize_optional_members(
                ListParameters_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ListParameters_Request__copy(
                ListParameters_Request_* dst,
                const ListParameters_Request_* src);

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

            extern const char *ListParameters_Response_TYPENAME;

            struct ListParameters_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ListParameters_Response_TypeSupport;
            class ListParameters_Response_DataWriter;
            class ListParameters_Response_DataReader;
            #endif

            class ListParameters_Response_ 
            {
              public:
                typedef struct ListParameters_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ListParameters_Response_TypeSupport TypeSupport;
                typedef ListParameters_Response_DataWriter DataWriter;
                typedef ListParameters_Response_DataReader DataReader;
                #endif

                rcl_interfaces::msg::dds_::ListParametersResult_   result_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ListParameters_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ListParameters_Response_Seq, ListParameters_Response_);

            NDDSUSERDllExport
            RTIBool ListParameters_Response__initialize(
                ListParameters_Response_* self);

            NDDSUSERDllExport
            RTIBool ListParameters_Response__initialize_ex(
                ListParameters_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ListParameters_Response__initialize_w_params(
                ListParameters_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ListParameters_Response__finalize(
                ListParameters_Response_* self);

            NDDSUSERDllExport
            void ListParameters_Response__finalize_ex(
                ListParameters_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ListParameters_Response__finalize_w_params(
                ListParameters_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ListParameters_Response__finalize_optional_members(
                ListParameters_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ListParameters_Response__copy(
                ListParameters_Response_* dst,
                const ListParameters_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace rcl_interfaces  */

#endif /* ListParameters_ */

