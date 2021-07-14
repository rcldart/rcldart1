

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParameterValue_.idl using "rtiddsgen".
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

#include "ParameterValue_.h"

#include <new>

namespace rcl_interfaces {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *ParameterValue_TYPENAME = "rcl_interfaces::msg::dds_::ParameterValue_";

            DDS_TypeCode* ParameterValue__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ParameterValue__g_tc_string_value__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ParameterValue__g_tc_byte_array_value__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ParameterValue__g_tc_bool_array_value__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ParameterValue__g_tc_integer_array_value__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ParameterValue__g_tc_double_array_value__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode ParameterValue__g_tc_string_array_value__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ParameterValue__g_tc_string_array_value__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member ParameterValue__g_tc_members[10]=
                {

                    {
                        (char *)"type_",/* Member name */
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
                        (char *)"bool_value_",/* Member name */
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
                        (char *)"integer_value_",/* Member name */
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
                        (char *)"double_value_",/* Member name */
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
                        (char *)"string_value_",/* Member name */
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
                        (char *)"byte_array_value_",/* Member name */
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
                        (char *)"bool_array_value_",/* Member name */
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
                    }, 
                    {
                        (char *)"integer_array_value_",/* Member name */
                        {
                            7,/* Representation ID */          
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
                        (char *)"double_array_value_",/* Member name */
                        {
                            8,/* Representation ID */          
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
                        (char *)"string_array_value_",/* Member name */
                        {
                            9,/* Representation ID */          
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

                static DDS_TypeCode ParameterValue__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"rcl_interfaces::msg::dds_::ParameterValue_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        10, /* Number of members */
                        ParameterValue__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ParameterValue_*/

                if (is_initialized) {
                    return &ParameterValue__g_tc;
                }

                ParameterValue__g_tc_byte_array_value__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                ParameterValue__g_tc_bool_array_value__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                ParameterValue__g_tc_integer_array_value__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

                ParameterValue__g_tc_double_array_value__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                ParameterValue__g_tc_string_array_value__sequence._data._typeCode = (RTICdrTypeCode *)&ParameterValue__g_tc_string_array_value__string;

                ParameterValue__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                ParameterValue__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                ParameterValue__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

                ParameterValue__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                ParameterValue__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&ParameterValue__g_tc_string_value__string;

                ParameterValue__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& ParameterValue__g_tc_byte_array_value__sequence;
                ParameterValue__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& ParameterValue__g_tc_bool_array_value__sequence;
                ParameterValue__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)& ParameterValue__g_tc_integer_array_value__sequence;
                ParameterValue__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)& ParameterValue__g_tc_double_array_value__sequence;
                ParameterValue__g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)& ParameterValue__g_tc_string_array_value__sequence;

                is_initialized = RTI_TRUE;

                return &ParameterValue__g_tc;
            }

            RTIBool ParameterValue__initialize(
                ParameterValue_* sample) {
                return rcl_interfaces::msg::dds_::ParameterValue__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ParameterValue__initialize_ex(
                ParameterValue_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return rcl_interfaces::msg::dds_::ParameterValue__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ParameterValue__initialize_w_params(
                ParameterValue_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->type_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->bool_value_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLongLong(&sample->integer_value_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->double_value_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->string_value_= DDS_String_alloc ((0));
                    if (sample->string_value_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->string_value_!= NULL) { 
                        sample->string_value_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory) {
                    DDS_OctetSeq_initialize(&sample->byte_array_value_  );
                    DDS_OctetSeq_set_absolute_maximum(&sample->byte_array_value_ , RTI_INT32_MAX);
                    if (!DDS_OctetSeq_set_maximum(&sample->byte_array_value_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_OctetSeq_set_length(&sample->byte_array_value_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_BooleanSeq_initialize(&sample->bool_array_value_  );
                    DDS_BooleanSeq_set_absolute_maximum(&sample->bool_array_value_ , RTI_INT32_MAX);
                    if (!DDS_BooleanSeq_set_maximum(&sample->bool_array_value_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_BooleanSeq_set_length(&sample->bool_array_value_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_LongLongSeq_initialize(&sample->integer_array_value_  );
                    DDS_LongLongSeq_set_absolute_maximum(&sample->integer_array_value_ , RTI_INT32_MAX);
                    if (!DDS_LongLongSeq_set_maximum(&sample->integer_array_value_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_LongLongSeq_set_length(&sample->integer_array_value_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->double_array_value_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->double_array_value_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->double_array_value_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->double_array_value_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_StringSeq_initialize(&sample->string_array_value_  );
                    DDS_StringSeq_set_absolute_maximum(&sample->string_array_value_ , RTI_INT32_MAX);
                    if (!DDS_StringSeq_set_maximum(&sample->string_array_value_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_StringSeq_get_contiguous_bufferI(
                        &sample->string_array_value_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_StringSeq_set_length(&sample->string_array_value_, 0);
                }
                return RTI_TRUE;
            }

            void ParameterValue__finalize(
                ParameterValue_* sample)
            {

                rcl_interfaces::msg::dds_::ParameterValue__finalize_ex(sample,RTI_TRUE);
            }

            void ParameterValue__finalize_ex(
                ParameterValue_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                rcl_interfaces::msg::dds_::ParameterValue__finalize_w_params(
                    sample,&deallocParams);
            }

            void ParameterValue__finalize_w_params(
                ParameterValue_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->string_value_ != NULL) {
                    DDS_String_free(sample->string_value_);
                    sample->string_value_=NULL;

                }
                DDS_OctetSeq_finalize(&sample->byte_array_value_);

                DDS_BooleanSeq_finalize(&sample->bool_array_value_);

                DDS_LongLongSeq_finalize(&sample->integer_array_value_);

                DDS_DoubleSeq_finalize(&sample->double_array_value_);

                DDS_StringSeq_finalize(&sample->string_array_value_);

            }

            void ParameterValue__finalize_optional_members(
                ParameterValue_* sample, RTIBool deletePointers)
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

            RTIBool ParameterValue__copy(
                ParameterValue_* dst,
                const ParameterValue_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->type_, &src->type_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->bool_value_, &src->bool_value_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLongLong (
                        &dst->integer_value_, &src->integer_value_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->double_value_, &src->double_value_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->string_value_, src->string_value_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!DDS_OctetSeq_copy(&dst->byte_array_value_ ,
                    &src->byte_array_value_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_BooleanSeq_copy(&dst->bool_array_value_ ,
                    &src->bool_array_value_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_LongLongSeq_copy(&dst->integer_array_value_ ,
                    &src->integer_array_value_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->double_array_value_ ,
                    &src->double_array_value_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_StringSeq_copy(&dst->string_array_value_ ,
                    &src->string_array_value_ )) {
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
            * Configure and implement 'ParameterValue_' sequence class.
            */
            #define T ParameterValue_
            #define TSeq ParameterValue_Seq

            #define T_initialize_w_params rcl_interfaces::msg::dds_::ParameterValue__initialize_w_params

            #define T_finalize_w_params   rcl_interfaces::msg::dds_::ParameterValue__finalize_w_params
            #define T_copy       rcl_interfaces::msg::dds_::ParameterValue__copy

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

