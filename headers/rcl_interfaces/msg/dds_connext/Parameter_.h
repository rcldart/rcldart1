

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Parameter_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Parameter__129250574_h
#define Parameter__129250574_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "rcl_interfaces/msg/dds_connext/ParameterValue_.h"
namespace rcl_interfaces {
    namespace msg {
        namespace dds_ {

            extern const char *Parameter_TYPENAME;

            struct Parameter_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Parameter_TypeSupport;
            class Parameter_DataWriter;
            class Parameter_DataReader;
            #endif

            class Parameter_ 
            {
              public:
                typedef struct Parameter_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Parameter_TypeSupport TypeSupport;
                typedef Parameter_DataWriter DataWriter;
                typedef Parameter_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;
                rcl_interfaces::msg::dds_::ParameterValue_   value_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Parameter__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Parameter_Seq, Parameter_);

            NDDSUSERDllExport
            RTIBool Parameter__initialize(
                Parameter_* self);

            NDDSUSERDllExport
            RTIBool Parameter__initialize_ex(
                Parameter_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Parameter__initialize_w_params(
                Parameter_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Parameter__finalize(
                Parameter_* self);

            NDDSUSERDllExport
            void Parameter__finalize_ex(
                Parameter_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Parameter__finalize_w_params(
                Parameter_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Parameter__finalize_optional_members(
                Parameter_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Parameter__copy(
                Parameter_* dst,
                const Parameter_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace rcl_interfaces  */

#endif /* Parameter_ */

