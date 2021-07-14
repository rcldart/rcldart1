

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from IntegerRange_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef IntegerRange__422700913_h
#define IntegerRange__422700913_h

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

            extern const char *IntegerRange_TYPENAME;

            struct IntegerRange_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class IntegerRange_TypeSupport;
            class IntegerRange_DataWriter;
            class IntegerRange_DataReader;
            #endif

            class IntegerRange_ 
            {
              public:
                typedef struct IntegerRange_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef IntegerRange_TypeSupport TypeSupport;
                typedef IntegerRange_DataWriter DataWriter;
                typedef IntegerRange_DataReader DataReader;
                #endif

                DDS_LongLong   from_value_ ;
                DDS_LongLong   to_value_ ;
                DDS_UnsignedLongLong   step_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* IntegerRange__get_typecode(void); /* Type code */

            DDS_SEQUENCE(IntegerRange_Seq, IntegerRange_);

            NDDSUSERDllExport
            RTIBool IntegerRange__initialize(
                IntegerRange_* self);

            NDDSUSERDllExport
            RTIBool IntegerRange__initialize_ex(
                IntegerRange_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool IntegerRange__initialize_w_params(
                IntegerRange_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void IntegerRange__finalize(
                IntegerRange_* self);

            NDDSUSERDllExport
            void IntegerRange__finalize_ex(
                IntegerRange_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void IntegerRange__finalize_w_params(
                IntegerRange_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void IntegerRange__finalize_optional_members(
                IntegerRange_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool IntegerRange__copy(
                IntegerRange_* dst,
                const IntegerRange_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace rcl_interfaces  */

#endif /* IntegerRange_ */

