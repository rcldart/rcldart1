

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetParametersResult_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "SetParametersResult_.h"

#include <new>

namespace rcl_interfaces {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *SetParametersResult_TYPENAME = "rcl_interfaces::msg::dds_::SetParametersResult_";

            DDS_TypeCode* SetParametersResult__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SetParametersResult__g_tc_reason__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member SetParametersResult__g_tc_members[2]=
                {

                    {
                        (char *)"successful_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"reason_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode SetParametersResult__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"rcl_interfaces::msg::dds_::SetParametersResult_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        SetParametersResult__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetParametersResult_*/

                if (is_initialized) {
                    return &SetParametersResult__g_tc;
                }

                SetParametersResult__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                SetParametersResult__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&SetParametersResult__g_tc_reason__string;

                is_initialized = RTI_TRUE;

                return &SetParametersResult__g_tc;
            }

            RTIBool SetParametersResult__initialize(
                SetParametersResult_* sample) {
                return rcl_interfaces::msg::dds_::SetParametersResult__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetParametersResult__initialize_ex(
                SetParametersResult_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return rcl_interfaces::msg::dds_::SetParametersResult__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetParametersResult__initialize_w_params(
                SetParametersResult_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->successful_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->reason_= DDS_String_alloc ((0));
                    if (sample->reason_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->reason_!= NULL) { 
                        sample->reason_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void SetParametersResult__finalize(
                SetParametersResult_* sample)
            {

                rcl_interfaces::msg::dds_::SetParametersResult__finalize_ex(sample,RTI_TRUE);
            }

            void SetParametersResult__finalize_ex(
                SetParametersResult_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                rcl_interfaces::msg::dds_::SetParametersResult__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetParametersResult__finalize_w_params(
                SetParametersResult_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->reason_ != NULL) {
                    DDS_String_free(sample->reason_);
                    sample->reason_=NULL;

                }
            }

            void SetParametersResult__finalize_optional_members(
                SetParametersResult_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

            }

            RTIBool SetParametersResult__copy(
                SetParametersResult_* dst,
                const SetParametersResult_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->successful_, &src->successful_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->reason_, src->reason_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'SetParametersResult_' sequence class.
            */
            #define T SetParametersResult_
            #define TSeq SetParametersResult_Seq

            #define T_initialize_w_params rcl_interfaces::msg::dds_::SetParametersResult__initialize_w_params

            #define T_finalize_w_params   rcl_interfaces::msg::dds_::SetParametersResult__finalize_w_params
            #define T_copy       rcl_interfaces::msg::dds_::SetParametersResult__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace rcl_interfaces  */

