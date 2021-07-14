

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from IntraProcessMessage_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef IntraProcessMessage__501161066_h
#define IntraProcessMessage__501161066_h

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

            extern const char *IntraProcessMessage_TYPENAME;

            struct IntraProcessMessage_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class IntraProcessMessage_TypeSupport;
            class IntraProcessMessage_DataWriter;
            class IntraProcessMessage_DataReader;
            #endif

            class IntraProcessMessage_ 
            {
              public:
                typedef struct IntraProcessMessage_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef IntraProcessMessage_TypeSupport TypeSupport;
                typedef IntraProcessMessage_DataWriter DataWriter;
                typedef IntraProcessMessage_DataReader DataReader;
                #endif

                DDS_UnsignedLongLong   publisher_id_ ;
                DDS_UnsignedLongLong   message_sequence_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* IntraProcessMessage__get_typecode(void); /* Type code */

            DDS_SEQUENCE(IntraProcessMessage_Seq, IntraProcessMessage_);

            NDDSUSERDllExport
            RTIBool IntraProcessMessage__initialize(
                IntraProcessMessage_* self);

            NDDSUSERDllExport
            RTIBool IntraProcessMessage__initialize_ex(
                IntraProcessMessage_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool IntraProcessMessage__initialize_w_params(
                IntraProcessMessage_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void IntraProcessMessage__finalize(
                IntraProcessMessage_* self);

            NDDSUSERDllExport
            void IntraProcessMessage__finalize_ex(
                IntraProcessMessage_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void IntraProcessMessage__finalize_w_params(
                IntraProcessMessage_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void IntraProcessMessage__finalize_optional_members(
                IntraProcessMessage_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool IntraProcessMessage__copy(
                IntraProcessMessage_* dst,
                const IntraProcessMessage_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace rcl_interfaces  */

#endif /* IntraProcessMessage_ */

