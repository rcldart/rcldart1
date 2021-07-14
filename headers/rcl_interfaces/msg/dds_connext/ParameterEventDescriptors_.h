

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParameterEventDescriptors_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ParameterEventDescriptors__1954958922_h
#define ParameterEventDescriptors__1954958922_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "rcl_interfaces/msg/dds_connext/ParameterDescriptor_.h"
namespace rcl_interfaces {
    namespace msg {
        namespace dds_ {

            extern const char *ParameterEventDescriptors_TYPENAME;

            struct ParameterEventDescriptors_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ParameterEventDescriptors_TypeSupport;
            class ParameterEventDescriptors_DataWriter;
            class ParameterEventDescriptors_DataReader;
            #endif

            class ParameterEventDescriptors_ 
            {
              public:
                typedef struct ParameterEventDescriptors_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ParameterEventDescriptors_TypeSupport TypeSupport;
                typedef ParameterEventDescriptors_DataWriter DataWriter;
                typedef ParameterEventDescriptors_DataReader DataReader;
                #endif

                rcl_interfaces::msg::dds_::ParameterDescriptor_Seq  new_parameters_ ;
                rcl_interfaces::msg::dds_::ParameterDescriptor_Seq  changed_parameters_ ;
                rcl_interfaces::msg::dds_::ParameterDescriptor_Seq  deleted_parameters_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ParameterEventDescriptors__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ParameterEventDescriptors_Seq, ParameterEventDescriptors_);

            NDDSUSERDllExport
            RTIBool ParameterEventDescriptors__initialize(
                ParameterEventDescriptors_* self);

            NDDSUSERDllExport
            RTIBool ParameterEventDescriptors__initialize_ex(
                ParameterEventDescriptors_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ParameterEventDescriptors__initialize_w_params(
                ParameterEventDescriptors_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ParameterEventDescriptors__finalize(
                ParameterEventDescriptors_* self);

            NDDSUSERDllExport
            void ParameterEventDescriptors__finalize_ex(
                ParameterEventDescriptors_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ParameterEventDescriptors__finalize_w_params(
                ParameterEventDescriptors_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ParameterEventDescriptors__finalize_optional_members(
                ParameterEventDescriptors_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ParameterEventDescriptors__copy(
                ParameterEventDescriptors_* dst,
                const ParameterEventDescriptors_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace rcl_interfaces  */

#endif /* ParameterEventDescriptors_ */

