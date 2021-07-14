

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParameterDescriptor_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ParameterDescriptor__403476414_h
#define ParameterDescriptor__403476414_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "rcl_interfaces/msg/dds_connext/FloatingPointRange_.h"
#include "rcl_interfaces/msg/dds_connext/IntegerRange_.h"
namespace rcl_interfaces {
    namespace msg {
        namespace dds_ {

            extern const char *ParameterDescriptor_TYPENAME;

            struct ParameterDescriptor_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ParameterDescriptor_TypeSupport;
            class ParameterDescriptor_DataWriter;
            class ParameterDescriptor_DataReader;
            #endif

            class ParameterDescriptor_ 
            {
              public:
                typedef struct ParameterDescriptor_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ParameterDescriptor_TypeSupport TypeSupport;
                typedef ParameterDescriptor_DataWriter DataWriter;
                typedef ParameterDescriptor_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;
                DDS_Octet   type_ ;
                DDS_Char *   description_ ;
                DDS_Char *   additional_constraints_ ;
                DDS_Boolean   read_only_ ;
                rcl_interfaces::msg::dds_::FloatingPointRange_Seq  floating_point_range_ ;
                rcl_interfaces::msg::dds_::IntegerRange_Seq  integer_range_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ParameterDescriptor__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ParameterDescriptor_Seq, ParameterDescriptor_);

            NDDSUSERDllExport
            RTIBool ParameterDescriptor__initialize(
                ParameterDescriptor_* self);

            NDDSUSERDllExport
            RTIBool ParameterDescriptor__initialize_ex(
                ParameterDescriptor_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ParameterDescriptor__initialize_w_params(
                ParameterDescriptor_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ParameterDescriptor__finalize(
                ParameterDescriptor_* self);

            NDDSUSERDllExport
            void ParameterDescriptor__finalize_ex(
                ParameterDescriptor_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ParameterDescriptor__finalize_w_params(
                ParameterDescriptor_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ParameterDescriptor__finalize_optional_members(
                ParameterDescriptor_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ParameterDescriptor__copy(
                ParameterDescriptor_* dst,
                const ParameterDescriptor_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace rcl_interfaces  */

#endif /* ParameterDescriptor_ */

