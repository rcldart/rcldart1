

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParameterType_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ParameterType__1541494742_h
#define ParameterType__1541494742_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace rcl_interfaces {
    namespace msg {
        namespace dds_ {
            namespace ParameterType_Constants {
                static const DDS_Octet PARAMETER_NOT_SET_= 0;
                static const DDS_Octet PARAMETER_BOOL_= 1;
                static const DDS_Octet PARAMETER_INTEGER_= 2;
                static const DDS_Octet PARAMETER_DOUBLE_= 3;
                static const DDS_Octet PARAMETER_STRING_= 4;
                static const DDS_Octet PARAMETER_BYTE_ARRAY_= 5;
                static const DDS_Octet PARAMETER_BOOL_ARRAY_= 6;
                static const DDS_Octet PARAMETER_INTEGER_ARRAY_= 7;
                static const DDS_Octet PARAMETER_DOUBLE_ARRAY_= 8;
                static const DDS_Octet PARAMETER_STRING_ARRAY_= 9;
            } /* namespace ParameterType_Constants  */

            extern const char *ParameterType_TYPENAME;

            struct ParameterType_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ParameterType_TypeSupport;
            class ParameterType_DataWriter;
            class ParameterType_DataReader;
            #endif

            class ParameterType_ 
            {
              public:
                typedef struct ParameterType_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ParameterType_TypeSupport TypeSupport;
                typedef ParameterType_DataWriter DataWriter;
                typedef ParameterType_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ParameterType__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ParameterType_Seq, ParameterType_);

            NDDSUSERDllExport
            RTIBool ParameterType__initialize(
                ParameterType_* self);

            NDDSUSERDllExport
            RTIBool ParameterType__initialize_ex(
                ParameterType_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ParameterType__initialize_w_params(
                ParameterType_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ParameterType__finalize(
                ParameterType_* self);

            NDDSUSERDllExport
            void ParameterType__finalize_ex(
                ParameterType_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ParameterType__finalize_w_params(
                ParameterType_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ParameterType__finalize_optional_members(
                ParameterType_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ParameterType__copy(
                ParameterType_* dst,
                const ParameterType_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace rcl_interfaces  */

#endif /* ParameterType_ */

