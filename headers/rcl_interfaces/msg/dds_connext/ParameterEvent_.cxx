

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParameterEvent_.idl using "rtiddsgen".
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

#include "ParameterEvent_.h"

#include <new>

namespace rcl_interfaces {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *ParameterEvent_TYPENAME = "rcl_interfaces::msg::dds_::ParameterEvent_";

            DDS_TypeCode* ParameterEvent__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ParameterEvent__g_tc_node__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ParameterEvent__g_tc_new_parameters__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ParameterEvent__g_tc_changed_parameters__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ParameterEvent__g_tc_deleted_parameters__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member ParameterEvent__g_tc_members[5]=
                {

                    {
                        (char *)"stamp_",/* Member name */
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
                        (char *)"node_",/* Member name */
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
                    }, 
                    {
                        (char *)"new_parameters_",/* Member name */
                        {
                            2,/* Representation ID */          
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
                        (char *)"changed_parameters_",/* Member name */
                        {
                            3,/* Representation ID */          
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
                        (char *)"deleted_parameters_",/* Member name */
                        {
                            4,/* Representation ID */          
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

                static DDS_TypeCode ParameterEvent__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"rcl_interfaces::msg::dds_::ParameterEvent_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        ParameterEvent__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ParameterEvent_*/

                if (is_initialized) {
                    return &ParameterEvent__g_tc;
                }

                ParameterEvent__g_tc_new_parameters__sequence._data._typeCode = (RTICdrTypeCode *)rcl_interfaces::msg::dds_::Parameter__get_typecode();

                ParameterEvent__g_tc_changed_parameters__sequence._data._typeCode = (RTICdrTypeCode *)rcl_interfaces::msg::dds_::Parameter__get_typecode();

                ParameterEvent__g_tc_deleted_parameters__sequence._data._typeCode = (RTICdrTypeCode *)rcl_interfaces::msg::dds_::Parameter__get_typecode();

                ParameterEvent__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                ParameterEvent__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&ParameterEvent__g_tc_node__string;

                ParameterEvent__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& ParameterEvent__g_tc_new_parameters__sequence;
                ParameterEvent__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& ParameterEvent__g_tc_changed_parameters__sequence;
                ParameterEvent__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& ParameterEvent__g_tc_deleted_parameters__sequence;

                is_initialized = RTI_TRUE;

                return &ParameterEvent__g_tc;
            }

            RTIBool ParameterEvent__initialize(
                ParameterEvent_* sample) {
                return rcl_interfaces::msg::dds_::ParameterEvent__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ParameterEvent__initialize_ex(
                ParameterEvent_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return rcl_interfaces::msg::dds_::ParameterEvent__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ParameterEvent__initialize_w_params(
                ParameterEvent_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!builtin_interfaces::msg::dds_::Time__initialize_w_params(&sample->stamp_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory){
                    sample->node_= DDS_String_alloc ((0));
                    if (sample->node_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->node_!= NULL) { 
                        sample->node_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory) {
                    rcl_interfaces::msg::dds_::Parameter_Seq_initialize(&sample->new_parameters_ );
                    rcl_interfaces::msg::dds_::Parameter_Seq_set_element_allocation_params(&sample->new_parameters_ ,allocParams);
                    rcl_interfaces::msg::dds_::Parameter_Seq_set_absolute_maximum(&sample->new_parameters_ , RTI_INT32_MAX);
                    if (!rcl_interfaces::msg::dds_::Parameter_Seq_set_maximum(&sample->new_parameters_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    rcl_interfaces::msg::dds_::Parameter_Seq_set_length(&sample->new_parameters_, 0);
                }
                if (allocParams->allocate_memory) {
                    rcl_interfaces::msg::dds_::Parameter_Seq_initialize(&sample->changed_parameters_ );
                    rcl_interfaces::msg::dds_::Parameter_Seq_set_element_allocation_params(&sample->changed_parameters_ ,allocParams);
                    rcl_interfaces::msg::dds_::Parameter_Seq_set_absolute_maximum(&sample->changed_parameters_ , RTI_INT32_MAX);
                    if (!rcl_interfaces::msg::dds_::Parameter_Seq_set_maximum(&sample->changed_parameters_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    rcl_interfaces::msg::dds_::Parameter_Seq_set_length(&sample->changed_parameters_, 0);
                }
                if (allocParams->allocate_memory) {
                    rcl_interfaces::msg::dds_::Parameter_Seq_initialize(&sample->deleted_parameters_ );
                    rcl_interfaces::msg::dds_::Parameter_Seq_set_element_allocation_params(&sample->deleted_parameters_ ,allocParams);
                    rcl_interfaces::msg::dds_::Parameter_Seq_set_absolute_maximum(&sample->deleted_parameters_ , RTI_INT32_MAX);
                    if (!rcl_interfaces::msg::dds_::Parameter_Seq_set_maximum(&sample->deleted_parameters_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    rcl_interfaces::msg::dds_::Parameter_Seq_set_length(&sample->deleted_parameters_, 0);
                }
                return RTI_TRUE;
            }

            void ParameterEvent__finalize(
                ParameterEvent_* sample)
            {

                rcl_interfaces::msg::dds_::ParameterEvent__finalize_ex(sample,RTI_TRUE);
            }

            void ParameterEvent__finalize_ex(
                ParameterEvent_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                rcl_interfaces::msg::dds_::ParameterEvent__finalize_w_params(
                    sample,&deallocParams);
            }

            void ParameterEvent__finalize_w_params(
                ParameterEvent_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->stamp_,deallocParams);

                if (sample->node_ != NULL) {
                    DDS_String_free(sample->node_);
                    sample->node_=NULL;

                }
                rcl_interfaces::msg::dds_::Parameter_Seq_set_element_deallocation_params(
                    &sample->new_parameters_,deallocParams);
                rcl_interfaces::msg::dds_::Parameter_Seq_finalize(&sample->new_parameters_);

                rcl_interfaces::msg::dds_::Parameter_Seq_set_element_deallocation_params(
                    &sample->changed_parameters_,deallocParams);
                rcl_interfaces::msg::dds_::Parameter_Seq_finalize(&sample->changed_parameters_);

                rcl_interfaces::msg::dds_::Parameter_Seq_set_element_deallocation_params(
                    &sample->deleted_parameters_,deallocParams);
                rcl_interfaces::msg::dds_::Parameter_Seq_finalize(&sample->deleted_parameters_);

            }

            void ParameterEvent__finalize_optional_members(
                ParameterEvent_* sample, RTIBool deletePointers)
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

                builtin_interfaces::msg::dds_::Time__finalize_optional_members(&sample->stamp_, deallocParams->delete_pointers);
                {
                    DDS_UnsignedLong i, length;
                    length = rcl_interfaces::msg::dds_::Parameter_Seq_get_length(
                        &sample->new_parameters_);

                    for (i = 0; i < length; i++) {
                        rcl_interfaces::msg::dds_::Parameter__finalize_optional_members(
                            rcl_interfaces::msg::dds_::Parameter_Seq_get_reference(
                                &sample->new_parameters_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = rcl_interfaces::msg::dds_::Parameter_Seq_get_length(
                        &sample->changed_parameters_);

                    for (i = 0; i < length; i++) {
                        rcl_interfaces::msg::dds_::Parameter__finalize_optional_members(
                            rcl_interfaces::msg::dds_::Parameter_Seq_get_reference(
                                &sample->changed_parameters_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = rcl_interfaces::msg::dds_::Parameter_Seq_get_length(
                        &sample->deleted_parameters_);

                    for (i = 0; i < length; i++) {
                        rcl_interfaces::msg::dds_::Parameter__finalize_optional_members(
                            rcl_interfaces::msg::dds_::Parameter_Seq_get_reference(
                                &sample->deleted_parameters_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool ParameterEvent__copy(
                ParameterEvent_* dst,
                const ParameterEvent_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!builtin_interfaces::msg::dds_::Time__copy(
                        &dst->stamp_,(const builtin_interfaces::msg::dds_::Time_*)&src->stamp_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyStringEx (
                        &dst->node_, src->node_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!rcl_interfaces::msg::dds_::Parameter_Seq_copy(&dst->new_parameters_ ,
                    &src->new_parameters_ )) {
                        return RTI_FALSE;
                    }
                    if (!rcl_interfaces::msg::dds_::Parameter_Seq_copy(&dst->changed_parameters_ ,
                    &src->changed_parameters_ )) {
                        return RTI_FALSE;
                    }
                    if (!rcl_interfaces::msg::dds_::Parameter_Seq_copy(&dst->deleted_parameters_ ,
                    &src->deleted_parameters_ )) {
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
            * Configure and implement 'ParameterEvent_' sequence class.
            */
            #define T ParameterEvent_
            #define TSeq ParameterEvent_Seq

            #define T_initialize_w_params rcl_interfaces::msg::dds_::ParameterEvent__initialize_w_params

            #define T_finalize_w_params   rcl_interfaces::msg::dds_::ParameterEvent__finalize_w_params
            #define T_copy       rcl_interfaces::msg::dds_::ParameterEvent__copy

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

