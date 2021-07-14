

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetParametersAtomically_.idl using "rtiddsgen".
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

#include "SetParametersAtomically_.h"

#include <new>

namespace rcl_interfaces {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *SetParametersAtomically_Request_TYPENAME = "rcl_interfaces::srv::dds_::SetParametersAtomically_Request_";

            DDS_TypeCode* SetParametersAtomically_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SetParametersAtomically_Request__g_tc_parameters__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member SetParametersAtomically_Request__g_tc_members[1]=
                {

                    {
                        (char *)"parameters_",/* Member name */
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
                    }
                };

                static DDS_TypeCode SetParametersAtomically_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"rcl_interfaces::srv::dds_::SetParametersAtomically_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SetParametersAtomically_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetParametersAtomically_Request_*/

                if (is_initialized) {
                    return &SetParametersAtomically_Request__g_tc;
                }

                SetParametersAtomically_Request__g_tc_parameters__sequence._data._typeCode = (RTICdrTypeCode *)rcl_interfaces::msg::dds_::Parameter__get_typecode();

                SetParametersAtomically_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& SetParametersAtomically_Request__g_tc_parameters__sequence;

                is_initialized = RTI_TRUE;

                return &SetParametersAtomically_Request__g_tc;
            }

            RTIBool SetParametersAtomically_Request__initialize(
                SetParametersAtomically_Request_* sample) {
                return rcl_interfaces::srv::dds_::SetParametersAtomically_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetParametersAtomically_Request__initialize_ex(
                SetParametersAtomically_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return rcl_interfaces::srv::dds_::SetParametersAtomically_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetParametersAtomically_Request__initialize_w_params(
                SetParametersAtomically_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    rcl_interfaces::msg::dds_::Parameter_Seq_initialize(&sample->parameters_ );
                    rcl_interfaces::msg::dds_::Parameter_Seq_set_element_allocation_params(&sample->parameters_ ,allocParams);
                    rcl_interfaces::msg::dds_::Parameter_Seq_set_absolute_maximum(&sample->parameters_ , RTI_INT32_MAX);
                    if (!rcl_interfaces::msg::dds_::Parameter_Seq_set_maximum(&sample->parameters_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    rcl_interfaces::msg::dds_::Parameter_Seq_set_length(&sample->parameters_, 0);
                }
                return RTI_TRUE;
            }

            void SetParametersAtomically_Request__finalize(
                SetParametersAtomically_Request_* sample)
            {

                rcl_interfaces::srv::dds_::SetParametersAtomically_Request__finalize_ex(sample,RTI_TRUE);
            }

            void SetParametersAtomically_Request__finalize_ex(
                SetParametersAtomically_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                rcl_interfaces::srv::dds_::SetParametersAtomically_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetParametersAtomically_Request__finalize_w_params(
                SetParametersAtomically_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                rcl_interfaces::msg::dds_::Parameter_Seq_set_element_deallocation_params(
                    &sample->parameters_,deallocParams);
                rcl_interfaces::msg::dds_::Parameter_Seq_finalize(&sample->parameters_);

            }

            void SetParametersAtomically_Request__finalize_optional_members(
                SetParametersAtomically_Request_* sample, RTIBool deletePointers)
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
                    length = rcl_interfaces::msg::dds_::Parameter_Seq_get_length(
                        &sample->parameters_);

                    for (i = 0; i < length; i++) {
                        rcl_interfaces::msg::dds_::Parameter__finalize_optional_members(
                            rcl_interfaces::msg::dds_::Parameter_Seq_get_reference(
                                &sample->parameters_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool SetParametersAtomically_Request__copy(
                SetParametersAtomically_Request_* dst,
                const SetParametersAtomically_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!rcl_interfaces::msg::dds_::Parameter_Seq_copy(&dst->parameters_ ,
                    &src->parameters_ )) {
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
            * Configure and implement 'SetParametersAtomically_Request_' sequence class.
            */
            #define T SetParametersAtomically_Request_
            #define TSeq SetParametersAtomically_Request_Seq

            #define T_initialize_w_params rcl_interfaces::srv::dds_::SetParametersAtomically_Request__initialize_w_params

            #define T_finalize_w_params   rcl_interfaces::srv::dds_::SetParametersAtomically_Request__finalize_w_params
            #define T_copy       rcl_interfaces::srv::dds_::SetParametersAtomically_Request__copy

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
    } /* namespace srv  */
} /* namespace rcl_interfaces  */
namespace rcl_interfaces {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *SetParametersAtomically_Response_TYPENAME = "rcl_interfaces::srv::dds_::SetParametersAtomically_Response_";

            DDS_TypeCode* SetParametersAtomically_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SetParametersAtomically_Response__g_tc_members[1]=
                {

                    {
                        (char *)"result_",/* Member name */
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
                    }
                };

                static DDS_TypeCode SetParametersAtomically_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"rcl_interfaces::srv::dds_::SetParametersAtomically_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SetParametersAtomically_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetParametersAtomically_Response_*/

                if (is_initialized) {
                    return &SetParametersAtomically_Response__g_tc;
                }

                SetParametersAtomically_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)rcl_interfaces::msg::dds_::SetParametersResult__get_typecode();

                is_initialized = RTI_TRUE;

                return &SetParametersAtomically_Response__g_tc;
            }

            RTIBool SetParametersAtomically_Response__initialize(
                SetParametersAtomically_Response_* sample) {
                return rcl_interfaces::srv::dds_::SetParametersAtomically_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetParametersAtomically_Response__initialize_ex(
                SetParametersAtomically_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return rcl_interfaces::srv::dds_::SetParametersAtomically_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetParametersAtomically_Response__initialize_w_params(
                SetParametersAtomically_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!rcl_interfaces::msg::dds_::SetParametersResult__initialize_w_params(&sample->result_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void SetParametersAtomically_Response__finalize(
                SetParametersAtomically_Response_* sample)
            {

                rcl_interfaces::srv::dds_::SetParametersAtomically_Response__finalize_ex(sample,RTI_TRUE);
            }

            void SetParametersAtomically_Response__finalize_ex(
                SetParametersAtomically_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                rcl_interfaces::srv::dds_::SetParametersAtomically_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetParametersAtomically_Response__finalize_w_params(
                SetParametersAtomically_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                rcl_interfaces::msg::dds_::SetParametersResult__finalize_w_params(&sample->result_,deallocParams);

            }

            void SetParametersAtomically_Response__finalize_optional_members(
                SetParametersAtomically_Response_* sample, RTIBool deletePointers)
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

                rcl_interfaces::msg::dds_::SetParametersResult__finalize_optional_members(&sample->result_, deallocParams->delete_pointers);
            }

            RTIBool SetParametersAtomically_Response__copy(
                SetParametersAtomically_Response_* dst,
                const SetParametersAtomically_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!rcl_interfaces::msg::dds_::SetParametersResult__copy(
                        &dst->result_,(const rcl_interfaces::msg::dds_::SetParametersResult_*)&src->result_)) {
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
            * Configure and implement 'SetParametersAtomically_Response_' sequence class.
            */
            #define T SetParametersAtomically_Response_
            #define TSeq SetParametersAtomically_Response_Seq

            #define T_initialize_w_params rcl_interfaces::srv::dds_::SetParametersAtomically_Response__initialize_w_params

            #define T_finalize_w_params   rcl_interfaces::srv::dds_::SetParametersAtomically_Response__finalize_w_params
            #define T_copy       rcl_interfaces::srv::dds_::SetParametersAtomically_Response__copy

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
    } /* namespace srv  */
} /* namespace rcl_interfaces  */

