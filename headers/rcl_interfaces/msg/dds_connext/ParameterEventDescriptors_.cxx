

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParameterEventDescriptors_.idl using "rtiddsgen".
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

#include "ParameterEventDescriptors_.h"

#include <new>

namespace rcl_interfaces {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *ParameterEventDescriptors_TYPENAME = "rcl_interfaces::msg::dds_::ParameterEventDescriptors_";

            DDS_TypeCode* ParameterEventDescriptors__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ParameterEventDescriptors__g_tc_new_parameters__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ParameterEventDescriptors__g_tc_changed_parameters__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ParameterEventDescriptors__g_tc_deleted_parameters__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member ParameterEventDescriptors__g_tc_members[3]=
                {

                    {
                        (char *)"new_parameters_",/* Member name */
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
                        (char *)"changed_parameters_",/* Member name */
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
                        (char *)"deleted_parameters_",/* Member name */
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
                    }
                };

                static DDS_TypeCode ParameterEventDescriptors__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"rcl_interfaces::msg::dds_::ParameterEventDescriptors_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        ParameterEventDescriptors__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ParameterEventDescriptors_*/

                if (is_initialized) {
                    return &ParameterEventDescriptors__g_tc;
                }

                ParameterEventDescriptors__g_tc_new_parameters__sequence._data._typeCode = (RTICdrTypeCode *)rcl_interfaces::msg::dds_::ParameterDescriptor__get_typecode();

                ParameterEventDescriptors__g_tc_changed_parameters__sequence._data._typeCode = (RTICdrTypeCode *)rcl_interfaces::msg::dds_::ParameterDescriptor__get_typecode();

                ParameterEventDescriptors__g_tc_deleted_parameters__sequence._data._typeCode = (RTICdrTypeCode *)rcl_interfaces::msg::dds_::ParameterDescriptor__get_typecode();

                ParameterEventDescriptors__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& ParameterEventDescriptors__g_tc_new_parameters__sequence;
                ParameterEventDescriptors__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& ParameterEventDescriptors__g_tc_changed_parameters__sequence;
                ParameterEventDescriptors__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& ParameterEventDescriptors__g_tc_deleted_parameters__sequence;

                is_initialized = RTI_TRUE;

                return &ParameterEventDescriptors__g_tc;
            }

            RTIBool ParameterEventDescriptors__initialize(
                ParameterEventDescriptors_* sample) {
                return rcl_interfaces::msg::dds_::ParameterEventDescriptors__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ParameterEventDescriptors__initialize_ex(
                ParameterEventDescriptors_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return rcl_interfaces::msg::dds_::ParameterEventDescriptors__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ParameterEventDescriptors__initialize_w_params(
                ParameterEventDescriptors_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_initialize(&sample->new_parameters_ );
                    rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_set_element_allocation_params(&sample->new_parameters_ ,allocParams);
                    rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_set_absolute_maximum(&sample->new_parameters_ , RTI_INT32_MAX);
                    if (!rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_set_maximum(&sample->new_parameters_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_set_length(&sample->new_parameters_, 0);
                }
                if (allocParams->allocate_memory) {
                    rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_initialize(&sample->changed_parameters_ );
                    rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_set_element_allocation_params(&sample->changed_parameters_ ,allocParams);
                    rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_set_absolute_maximum(&sample->changed_parameters_ , RTI_INT32_MAX);
                    if (!rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_set_maximum(&sample->changed_parameters_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_set_length(&sample->changed_parameters_, 0);
                }
                if (allocParams->allocate_memory) {
                    rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_initialize(&sample->deleted_parameters_ );
                    rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_set_element_allocation_params(&sample->deleted_parameters_ ,allocParams);
                    rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_set_absolute_maximum(&sample->deleted_parameters_ , RTI_INT32_MAX);
                    if (!rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_set_maximum(&sample->deleted_parameters_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_set_length(&sample->deleted_parameters_, 0);
                }
                return RTI_TRUE;
            }

            void ParameterEventDescriptors__finalize(
                ParameterEventDescriptors_* sample)
            {

                rcl_interfaces::msg::dds_::ParameterEventDescriptors__finalize_ex(sample,RTI_TRUE);
            }

            void ParameterEventDescriptors__finalize_ex(
                ParameterEventDescriptors_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                rcl_interfaces::msg::dds_::ParameterEventDescriptors__finalize_w_params(
                    sample,&deallocParams);
            }

            void ParameterEventDescriptors__finalize_w_params(
                ParameterEventDescriptors_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_set_element_deallocation_params(
                    &sample->new_parameters_,deallocParams);
                rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_finalize(&sample->new_parameters_);

                rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_set_element_deallocation_params(
                    &sample->changed_parameters_,deallocParams);
                rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_finalize(&sample->changed_parameters_);

                rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_set_element_deallocation_params(
                    &sample->deleted_parameters_,deallocParams);
                rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_finalize(&sample->deleted_parameters_);

            }

            void ParameterEventDescriptors__finalize_optional_members(
                ParameterEventDescriptors_* sample, RTIBool deletePointers)
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

                {
                    DDS_UnsignedLong i, length;
                    length = rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_get_length(
                        &sample->new_parameters_);

                    for (i = 0; i < length; i++) {
                        rcl_interfaces::msg::dds_::ParameterDescriptor__finalize_optional_members(
                            rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_get_reference(
                                &sample->new_parameters_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_get_length(
                        &sample->changed_parameters_);

                    for (i = 0; i < length; i++) {
                        rcl_interfaces::msg::dds_::ParameterDescriptor__finalize_optional_members(
                            rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_get_reference(
                                &sample->changed_parameters_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_get_length(
                        &sample->deleted_parameters_);

                    for (i = 0; i < length; i++) {
                        rcl_interfaces::msg::dds_::ParameterDescriptor__finalize_optional_members(
                            rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_get_reference(
                                &sample->deleted_parameters_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool ParameterEventDescriptors__copy(
                ParameterEventDescriptors_* dst,
                const ParameterEventDescriptors_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_copy(&dst->new_parameters_ ,
                    &src->new_parameters_ )) {
                        return RTI_FALSE;
                    }
                    if (!rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_copy(&dst->changed_parameters_ ,
                    &src->changed_parameters_ )) {
                        return RTI_FALSE;
                    }
                    if (!rcl_interfaces::msg::dds_::ParameterDescriptor_Seq_copy(&dst->deleted_parameters_ ,
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
            * Configure and implement 'ParameterEventDescriptors_' sequence class.
            */
            #define T ParameterEventDescriptors_
            #define TSeq ParameterEventDescriptors_Seq

            #define T_initialize_w_params rcl_interfaces::msg::dds_::ParameterEventDescriptors__initialize_w_params

            #define T_finalize_w_params   rcl_interfaces::msg::dds_::ParameterEventDescriptors__finalize_w_params
            #define T_copy       rcl_interfaces::msg::dds_::ParameterEventDescriptors__copy

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

