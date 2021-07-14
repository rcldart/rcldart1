

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ListParametersResult_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ListParametersResult__1034316301_h
#define ListParametersResult__1034316301_h

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

            extern const char *ListParametersResult_TYPENAME;

            struct ListParametersResult_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ListParametersResult_TypeSupport;
            class ListParametersResult_DataWriter;
            class ListParametersResult_DataReader;
            #endif

            class ListParametersResult_ 
            {
              public:
                typedef struct ListParametersResult_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ListParametersResult_TypeSupport TypeSupport;
                typedef ListParametersResult_DataWriter DataWriter;
                typedef ListParametersResult_DataReader DataReader;
                #endif

                DDS_StringSeq  names_ ;
                DDS_StringSeq  prefixes_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ListParametersResult__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ListParametersResult_Seq, ListParametersResult_);

            NDDSUSERDllExport
            RTIBool ListParametersResult__initialize(
                ListParametersResult_* self);

            NDDSUSERDllExport
            RTIBool ListParametersResult__initialize_ex(
                ListParametersResult_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ListParametersResult__initialize_w_params(
                ListParametersResult_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ListParametersResult__finalize(
                ListParametersResult_* self);

            NDDSUSERDllExport
            void ListParametersResult__finalize_ex(
                ListParametersResult_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ListParametersResult__finalize_w_params(
                ListParametersResult_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ListParametersResult__finalize_optional_members(
                ListParametersResult_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ListParametersResult__copy(
                ListParametersResult_* dst,
                const ListParametersResult_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace rcl_interfaces  */

#endif /* ListParametersResult_ */

