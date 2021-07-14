

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParameterEvent_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ParameterEvent__1626936507_h
#define ParameterEvent__1626936507_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Time_.h"
#include "rcl_interfaces/msg/dds_connext/Parameter_.h"
namespace rcl_interfaces {
    namespace msg {
        namespace dds_ {

            extern const char *ParameterEvent_TYPENAME;

            struct ParameterEvent_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ParameterEvent_TypeSupport;
            class ParameterEvent_DataWriter;
            class ParameterEvent_DataReader;
            #endif

            class ParameterEvent_ 
            {
              public:
                typedef struct ParameterEvent_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ParameterEvent_TypeSupport TypeSupport;
                typedef ParameterEvent_DataWriter DataWriter;
                typedef ParameterEvent_DataReader DataReader;
                #endif

                builtin_interfaces::msg::dds_::Time_   stamp_ ;
                DDS_Char *   node_ ;
                rcl_interfaces::msg::dds_::Parameter_Seq  new_parameters_ ;
                rcl_interfaces::msg::dds_::Parameter_Seq  changed_parameters_ ;
                rcl_interfaces::msg::dds_::Parameter_Seq  deleted_parameters_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ParameterEvent__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ParameterEvent_Seq, ParameterEvent_);

            NDDSUSERDllExport
            RTIBool ParameterEvent__initialize(
                ParameterEvent_* self);

            NDDSUSERDllExport
            RTIBool ParameterEvent__initialize_ex(
                ParameterEvent_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ParameterEvent__initialize_w_params(
                ParameterEvent_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ParameterEvent__finalize(
                ParameterEvent_* self);

            NDDSUSERDllExport
            void ParameterEvent__finalize_ex(
                ParameterEvent_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ParameterEvent__finalize_w_params(
                ParameterEvent_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ParameterEvent__finalize_optional_members(
                ParameterEvent_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ParameterEvent__copy(
                ParameterEvent_* dst,
                const ParameterEvent_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace rcl_interfaces  */

#endif /* ParameterEvent_ */

