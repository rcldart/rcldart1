

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ListParametersResult_.idl using "rtiddsgen".
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

#include "ListParametersResult_.h"

#include <new>

namespace rcl_interfaces {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *ListParametersResult_TYPENAME = "rcl_interfaces::msg::dds_::ListParametersResult_";

            DDS_TypeCode* ListParametersResult__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ListParametersResult__g_tc_names__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ListParametersResult__g_tc_names__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ListParametersResult__g_tc_prefixes__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ListParametersResult__g_tc_prefixes__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member ListParametersResult__g_tc_members[2]=
                {

                    {
                        (char *)"names_",/* Member name */
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
                        (char *)"prefixes_",/* Member name */
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

                static DDS_TypeCode ListParametersResult__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"rcl_interfaces::msg::dds_::ListParametersResult_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ListParametersResult__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ListParametersResult_*/

                if (is_initialized) {
                    return &ListParametersResult__g_tc;
                }

                ListParametersResult__g_tc_names__sequence._data._typeCode = (RTICdrTypeCode *)&ListParametersResult__g_tc_names__string;

                ListParametersResult__g_tc_prefixes__sequence._data._typeCode = (RTICdrTypeCode *)&ListParametersResult__g_tc_prefixes__string;

                ListParametersResult__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& ListParametersResult__g_tc_names__sequence;
                ListParametersResult__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& ListParametersResult__g_tc_prefixes__sequence;

                is_initialized = RTI_TRUE;

                return &ListParametersResult__g_tc;
            }

            RTIBool ListParametersResult__initialize(
                ListParametersResult_* sample) {
                return rcl_interfaces::msg::dds_::ListParametersResult__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ListParametersResult__initialize_ex(
                ListParametersResult_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return rcl_interfaces::msg::dds_::ListParametersResult__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ListParametersResult__initialize_w_params(
                ListParametersResult_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    DDS_StringSeq_initialize(&sample->names_  );
                    DDS_StringSeq_set_absolute_maximum(&sample->names_ , RTI_INT32_MAX);
                    if (!DDS_StringSeq_set_maximum(&sample->names_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_StringSeq_get_contiguous_bufferI(
                        &sample->names_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_StringSeq_set_length(&sample->names_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_StringSeq_initialize(&sample->prefixes_  );
                    DDS_StringSeq_set_absolute_maximum(&sample->prefixes_ , RTI_INT32_MAX);
                    if (!DDS_StringSeq_set_maximum(&sample->prefixes_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_StringSeq_get_contiguous_bufferI(
                        &sample->prefixes_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_StringSeq_set_length(&sample->prefixes_, 0);
                }
                return RTI_TRUE;
            }

            void ListParametersResult__finalize(
                ListParametersResult_* sample)
            {

                rcl_interfaces::msg::dds_::ListParametersResult__finalize_ex(sample,RTI_TRUE);
            }

            void ListParametersResult__finalize_ex(
                ListParametersResult_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                rcl_interfaces::msg::dds_::ListParametersResult__finalize_w_params(
                    sample,&deallocParams);
            }

            void ListParametersResult__finalize_w_params(
                ListParametersResult_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                DDS_StringSeq_finalize(&sample->names_);

                DDS_StringSeq_finalize(&sample->prefixes_);

            }

            void ListParametersResult__finalize_optional_members(
                ListParametersResult_* sample, RTIBool deletePointers)
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

            RTIBool ListParametersResult__copy(
                ListParametersResult_* dst,
                const ListParametersResult_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!DDS_StringSeq_copy(&dst->names_ ,
                    &src->names_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_StringSeq_copy(&dst->prefixes_ ,
                    &src->prefixes_ )) {
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
            * Configure and implement 'ListParametersResult_' sequence class.
            */
            #define T ListParametersResult_
            #define TSeq ListParametersResult_Seq

            #define T_initialize_w_params rcl_interfaces::msg::dds_::ListParametersResult__initialize_w_params

            #define T_finalize_w_params   rcl_interfaces::msg::dds_::ListParametersResult__finalize_w_params
            #define T_copy       rcl_interfaces::msg::dds_::ListParametersResult__copy

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

