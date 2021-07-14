

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FloatingPointRange_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FloatingPointRange__675838060_h
#define FloatingPointRange__675838060_h

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

            extern const char *FloatingPointRange_TYPENAME;

            struct FloatingPointRange_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FloatingPointRange_TypeSupport;
            class FloatingPointRange_DataWriter;
            class FloatingPointRange_DataReader;
            #endif

            class FloatingPointRange_ 
            {
              public:
                typedef struct FloatingPointRange_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FloatingPointRange_TypeSupport TypeSupport;
                typedef FloatingPointRange_DataWriter DataWriter;
                typedef FloatingPointRange_DataReader DataReader;
                #endif

                DDS_Double   from_value_ ;
                DDS_Double   to_value_ ;
                DDS_Double   step_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FloatingPointRange__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FloatingPointRange_Seq, FloatingPointRange_);

            NDDSUSERDllExport
            RTIBool FloatingPointRange__initialize(
                FloatingPointRange_* self);

            NDDSUSERDllExport
            RTIBool FloatingPointRange__initialize_ex(
                FloatingPointRange_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FloatingPointRange__initialize_w_params(
                FloatingPointRange_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FloatingPointRange__finalize(
                FloatingPointRange_* self);

            NDDSUSERDllExport
            void FloatingPointRange__finalize_ex(
                FloatingPointRange_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FloatingPointRange__finalize_w_params(
                FloatingPointRange_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FloatingPointRange__finalize_optional_members(
                FloatingPointRange_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FloatingPointRange__copy(
                FloatingPointRange_* dst,
                const FloatingPointRange_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace rcl_interfaces  */

#endif /* FloatingPointRange_ */

