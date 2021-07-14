

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParameterDescriptor_.idl using "rtiddsgen".
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

#include "ParameterDescriptor_.h"

#include <new>

namespace rcl_interfaces {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *ParameterDescriptor_TYPENAME = "rcl_interfaces::msg::dds_::ParameterDescriptor_";

            DDS_TypeCode* ParameterDescriptor__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ParameterDescriptor__g_tc_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ParameterDescriptor__g_tc_description__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ParameterDescriptor__g_tc_additional_constraints__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ParameterDescriptor__g_tc_floating_point_range__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((1),NULL);
                static DDS_TypeCode ParameterDescriptor__g_tc_integer_range__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE((1),NULL);
                static DDS_TypeCode_Member ParameterDescriptor__g_tc_members[7]=
                {

                    {
                        (char *)"name_",/* Member name */
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
                        (char *)"type_",/* Member name */
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
                        (char *)"description_",/* Member name */
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
                        (char *)"additional_constraints_",/* Member name */
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
                        (char *)"read_only_",/* Member name */
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
                    }, 
                    {
                        (char *)"floating_point_range_",/* Member name */
                        {
                            5,/* Representation ID */          
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
                        (char *)"integer_range_",/* Member name */
                        {
                            6,/* Representation ID */          
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

                static DDS_TypeCode ParameterDescriptor__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"rcl_interfaces::msg::dds_::ParameterDescriptor_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        ParameterDescriptor__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ParameterDescriptor_*/

                if (is_initialized) {
                    return &ParameterDescriptor__g_tc;
                }

                ParameterDescriptor__g_tc_floating_point_range__sequence._data._typeCode = (RTICdrTypeCode *)rcl_interfaces::msg::dds_::FloatingPointRange__get_typecode();

                ParameterDescriptor__g_tc_integer_range__sequence._data._typeCode = (RTICdrTypeCode *)rcl_interfaces::msg::dds_::IntegerRange__get_typecode();

                ParameterDescriptor__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&ParameterDescriptor__g_tc_name__string;

                ParameterDescriptor__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                ParameterDescriptor__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&ParameterDescriptor__g_tc_description__string;

                ParameterDescriptor__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&ParameterDescriptor__g_tc_additional_constraints__string;

                ParameterDescriptor__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                ParameterDescriptor__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& ParameterDescriptor__g_tc_floating_point_range__sequence;
                ParameterDescriptor__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& ParameterDescriptor__g_tc_integer_range__sequence;

                is_initialized = RTI_TRUE;

                return &ParameterDescriptor__g_tc;
            }

            RTIBool ParameterDescriptor__initialize(
                ParameterDescriptor_* sample) {
                return rcl_interfaces::msg::dds_::ParameterDescriptor__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ParameterDescriptor__initialize_ex(
                ParameterDescriptor_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return rcl_interfaces::msg::dds_::ParameterDescriptor__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ParameterDescriptor__initialize_w_params(
                ParameterDescriptor_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->name_= DDS_String_alloc ((0));
                    if (sample->name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->name_!= NULL) { 
                        sample->name_[0] = '\0';
                    }
                }

                if (!RTICdrType_initOctet(&sample->type_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->description_= DDS_String_alloc ((0));
                    if (sample->description_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->description_!= NULL) { 
                        sample->description_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->additional_constraints_= DDS_String_alloc ((0));
                    if (sample->additional_constraints_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->additional_constraints_!= NULL) { 
                        sample->additional_constraints_[0] = '\0';
                    }
                }

                if (!RTICdrType_initBoolean(&sample->read_only_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    rcl_interfaces::msg::dds_::FloatingPointRange_Seq_initialize(&sample->floating_point_range_ );
                    rcl_interfaces::msg::dds_::FloatingPointRange_Seq_set_element_allocation_params(&sample->floating_point_range_ ,allocParams);
                    rcl_interfaces::msg::dds_::FloatingPointRange_Seq_set_absolute_maximum(&sample->floating_point_range_ , (1));
                    if (!rcl_interfaces::msg::dds_::FloatingPointRange_Seq_set_maximum(&sample->floating_point_range_, (1))) {
                        return RTI_FALSE;
                    }
                } else { 
                    rcl_interfaces::msg::dds_::FloatingPointRange_Seq_set_length(&sample->floating_point_range_, 0);
                }
                if (allocParams->allocate_memory) {
                    rcl_interfaces::msg::dds_::IntegerRange_Seq_initialize(&sample->integer_range_ );
                    rcl_interfaces::msg::dds_::IntegerRange_Seq_set_element_allocation_params(&sample->integer_range_ ,allocParams);
                    rcl_interfaces::msg::dds_::IntegerRange_Seq_set_absolute_maximum(&sample->integer_range_ , (1));
                    if (!rcl_interfaces::msg::dds_::IntegerRange_Seq_set_maximum(&sample->integer_range_, (1))) {
                        return RTI_FALSE;
                    }
                } else { 
                    rcl_interfaces::msg::dds_::IntegerRange_Seq_set_length(&sample->integer_range_, 0);
                }
                return RTI_TRUE;
            }

            void ParameterDescriptor__finalize(
                ParameterDescriptor_* sample)
            {

                rcl_interfaces::msg::dds_::ParameterDescriptor__finalize_ex(sample,RTI_TRUE);
            }

            void ParameterDescriptor__finalize_ex(
                ParameterDescriptor_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                rcl_interfaces::msg::dds_::ParameterDescriptor__finalize_w_params(
                    sample,&deallocParams);
            }

            void ParameterDescriptor__finalize_w_params(
                ParameterDescriptor_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->name_ != NULL) {
                    DDS_String_free(sample->name_);
                    sample->name_=NULL;

                }

                if (sample->description_ != NULL) {
                    DDS_String_free(sample->description_);
                    sample->description_=NULL;

                }
                if (sample->additional_constraints_ != NULL) {
                    DDS_String_free(sample->additional_constraints_);
                    sample->additional_constraints_=NULL;

                }

                rcl_interfaces::msg::dds_::FloatingPointRange_Seq_set_element_deallocation_params(
                    &sample->floating_point_range_,deallocParams);
                rcl_interfaces::msg::dds_::FloatingPointRange_Seq_finalize(&sample->floating_point_range_);

                rcl_interfaces::msg::dds_::IntegerRange_Seq_set_element_deallocation_params(
                    &sample->integer_range_,deallocParams);
                rcl_interfaces::msg::dds_::IntegerRange_Seq_finalize(&sample->integer_range_);

            }

            void ParameterDescriptor__finalize_optional_members(
                ParameterDescriptor_* sample, RTIBool deletePointers)
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
                    length = rcl_interfaces::msg::dds_::FloatingPointRange_Seq_get_length(
                        &sample->floating_point_range_);

                    for (i = 0; i < length; i++) {
                        rcl_interfaces::msg::dds_::FloatingPointRange__finalize_optional_members(
                            rcl_interfaces::msg::dds_::FloatingPointRange_Seq_get_reference(
                                &sample->floating_point_range_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = rcl_interfaces::msg::dds_::IntegerRange_Seq_get_length(
                        &sample->integer_range_);

                    for (i = 0; i < length; i++) {
                        rcl_interfaces::msg::dds_::IntegerRange__finalize_optional_members(
                            rcl_interfaces::msg::dds_::IntegerRange_Seq_get_reference(
                                &sample->integer_range_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool ParameterDescriptor__copy(
                ParameterDescriptor_* dst,
                const ParameterDescriptor_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->name_, src->name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->type_, &src->type_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->description_, src->description_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->additional_constraints_, src->additional_constraints_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->read_only_, &src->read_only_)) { 
                        return RTI_FALSE;
                    }
                    if (!rcl_interfaces::msg::dds_::FloatingPointRange_Seq_copy(&dst->floating_point_range_ ,
                    &src->floating_point_range_ )) {
                        return RTI_FALSE;
                    }
                    if (!rcl_interfaces::msg::dds_::IntegerRange_Seq_copy(&dst->integer_range_ ,
                    &src->integer_range_ )) {
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
            * Configure and implement 'ParameterDescriptor_' sequence class.
            */
            #define T ParameterDescriptor_
            #define TSeq ParameterDescriptor_Seq

            #define T_initialize_w_params rcl_interfaces::msg::dds_::ParameterDescriptor__initialize_w_params

            #define T_finalize_w_params   rcl_interfaces::msg::dds_::ParameterDescriptor__finalize_w_params
            #define T_copy       rcl_interfaces::msg::dds_::ParameterDescriptor__copy

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

