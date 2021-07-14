

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetParametersResult_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetParametersResult__852881146_h
#define SetParametersResult__852881146_h

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

            extern const char *SetParametersResult_TYPENAME;

            struct SetParametersResult_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetParametersResult_TypeSupport;
            class SetParametersResult_DataWriter;
            class SetParametersResult_DataReader;
            #endif

            class SetParametersResult_ 
            {
              public:
                typedef struct SetParametersResult_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetParametersResult_TypeSupport TypeSupport;
                typedef SetParametersResult_DataWriter DataWriter;
                typedef SetParametersResult_DataReader DataReader;
                #endif

                DDS_Boolean   successful_ ;
                DDS_Char *   reason_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetParametersResult__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetParametersResult_Seq, SetParametersResult_);

            NDDSUSERDllExport
            RTIBool SetParametersResult__initialize(
                SetParametersResult_* self);

            NDDSUSERDllExport
            RTIBool SetParametersResult__initialize_ex(
                SetParametersResult_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetParametersResult__initialize_w_params(
                SetParametersResult_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetParametersResult__finalize(
                SetParametersResult_* self);

            NDDSUSERDllExport
            void SetParametersResult__finalize_ex(
                SetParametersResult_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetParametersResult__finalize_w_params(
                SetParametersResult_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetParametersResult__finalize_optional_members(
                SetParametersResult_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetParametersResult__copy(
                SetParametersResult_* dst,
                const SetParametersResult_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace rcl_interfaces  */

#endif /* SetParametersResult_ */

