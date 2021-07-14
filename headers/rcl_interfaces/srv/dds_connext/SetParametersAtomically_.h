

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetParametersAtomically_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetParametersAtomically__1622528600_h
#define SetParametersAtomically__1622528600_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "rcl_interfaces/msg/dds_connext/Parameter_.h"
#include "rcl_interfaces/msg/dds_connext/SetParametersResult_.h"
namespace rcl_interfaces {
    namespace srv {
        namespace dds_ {

            extern const char *SetParametersAtomically_Request_TYPENAME;

            struct SetParametersAtomically_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetParametersAtomically_Request_TypeSupport;
            class SetParametersAtomically_Request_DataWriter;
            class SetParametersAtomically_Request_DataReader;
            #endif

            class SetParametersAtomically_Request_ 
            {
              public:
                typedef struct SetParametersAtomically_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetParametersAtomically_Request_TypeSupport TypeSupport;
                typedef SetParametersAtomically_Request_DataWriter DataWriter;
                typedef SetParametersAtomically_Request_DataReader DataReader;
                #endif

                rcl_interfaces::msg::dds_::Parameter_Seq  parameters_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetParametersAtomically_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetParametersAtomically_Request_Seq, SetParametersAtomically_Request_);

            NDDSUSERDllExport
            RTIBool SetParametersAtomically_Request__initialize(
                SetParametersAtomically_Request_* self);

            NDDSUSERDllExport
            RTIBool SetParametersAtomically_Request__initialize_ex(
                SetParametersAtomically_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetParametersAtomically_Request__initialize_w_params(
                SetParametersAtomically_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetParametersAtomically_Request__finalize(
                SetParametersAtomically_Request_* self);

            NDDSUSERDllExport
            void SetParametersAtomically_Request__finalize_ex(
                SetParametersAtomically_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetParametersAtomically_Request__finalize_w_params(
                SetParametersAtomically_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetParametersAtomically_Request__finalize_optional_members(
                SetParametersAtomically_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetParametersAtomically_Request__copy(
                SetParametersAtomically_Request_* dst,
                const SetParametersAtomically_Request_* src);

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

            extern const char *SetParametersAtomically_Response_TYPENAME;

            struct SetParametersAtomically_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetParametersAtomically_Response_TypeSupport;
            class SetParametersAtomically_Response_DataWriter;
            class SetParametersAtomically_Response_DataReader;
            #endif

            class SetParametersAtomically_Response_ 
            {
              public:
                typedef struct SetParametersAtomically_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetParametersAtomically_Response_TypeSupport TypeSupport;
                typedef SetParametersAtomically_Response_DataWriter DataWriter;
                typedef SetParametersAtomically_Response_DataReader DataReader;
                #endif

                rcl_interfaces::msg::dds_::SetParametersResult_   result_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetParametersAtomically_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetParametersAtomically_Response_Seq, SetParametersAtomically_Response_);

            NDDSUSERDllExport
            RTIBool SetParametersAtomically_Response__initialize(
                SetParametersAtomically_Response_* self);

            NDDSUSERDllExport
            RTIBool SetParametersAtomically_Response__initialize_ex(
                SetParametersAtomically_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetParametersAtomically_Response__initialize_w_params(
                SetParametersAtomically_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetParametersAtomically_Response__finalize(
                SetParametersAtomically_Response_* self);

            NDDSUSERDllExport
            void SetParametersAtomically_Response__finalize_ex(
                SetParametersAtomically_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetParametersAtomically_Response__finalize_w_params(
                SetParametersAtomically_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetParametersAtomically_Response__finalize_optional_members(
                SetParametersAtomically_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetParametersAtomically_Response__copy(
                SetParametersAtomically_Response_* dst,
                const SetParametersAtomically_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace rcl_interfaces  */

#endif /* SetParametersAtomically_ */

