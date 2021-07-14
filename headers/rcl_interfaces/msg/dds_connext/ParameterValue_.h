

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParameterValue_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ParameterValue__567968995_h
#define ParameterValue__567968995_h

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

            extern const char *ParameterValue_TYPENAME;

            struct ParameterValue_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ParameterValue_TypeSupport;
            class ParameterValue_DataWriter;
            class ParameterValue_DataReader;
            #endif

            class ParameterValue_ 
            {
              public:
                typedef struct ParameterValue_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ParameterValue_TypeSupport TypeSupport;
                typedef ParameterValue_DataWriter DataWriter;
                typedef ParameterValue_DataReader DataReader;
                #endif

                DDS_Octet   type_ ;
                DDS_Boolean   bool_value_ ;
                DDS_LongLong   integer_value_ ;
                DDS_Double   double_value_ ;
                DDS_Char *   string_value_ ;
                DDS_OctetSeq  byte_array_value_ ;
                DDS_BooleanSeq  bool_array_value_ ;
                DDS_LongLongSeq  integer_array_value_ ;
                DDS_DoubleSeq  double_array_value_ ;
                DDS_StringSeq  string_array_value_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ParameterValue__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ParameterValue_Seq, ParameterValue_);

            NDDSUSERDllExport
            RTIBool ParameterValue__initialize(
                ParameterValue_* self);

            NDDSUSERDllExport
            RTIBool ParameterValue__initialize_ex(
                ParameterValue_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ParameterValue__initialize_w_params(
                ParameterValue_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ParameterValue__finalize(
                ParameterValue_* self);

            NDDSUSERDllExport
            void ParameterValue__finalize_ex(
                ParameterValue_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ParameterValue__finalize_w_params(
                ParameterValue_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ParameterValue__finalize_optional_members(
                ParameterValue_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ParameterValue__copy(
                ParameterValue_* dst,
                const ParameterValue_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace rcl_interfaces  */

#endif /* ParameterValue_ */

