
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ParameterValue_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <string.h>

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include <new>

#include "ParameterValue_Plugin.h"

namespace rcl_interfaces {
    namespace msg {
        namespace dds_ {

            /* ----------------------------------------------------------------------------
            *  Type ParameterValue_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            ParameterValue_*
            ParameterValue_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                ParameterValue_ *sample = NULL;

                sample = new (std::nothrow) ParameterValue_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!rcl_interfaces::msg::dds_::ParameterValue__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            ParameterValue_ *
            ParameterValue_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                ParameterValue_ *sample = NULL;

                sample = new (std::nothrow) ParameterValue_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!rcl_interfaces::msg::dds_::ParameterValue__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            ParameterValue_ *
            ParameterValue_PluginSupport_create_data(void)
            {
                return rcl_interfaces::msg::dds_::ParameterValue_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            ParameterValue_PluginSupport_destroy_data_w_params(
                ParameterValue_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                rcl_interfaces::msg::dds_::ParameterValue__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            ParameterValue_PluginSupport_destroy_data_ex(
                ParameterValue_ *sample,RTIBool deallocate_pointers) {

                rcl_interfaces::msg::dds_::ParameterValue__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            ParameterValue_PluginSupport_destroy_data(
                ParameterValue_ *sample) {

                rcl_interfaces::msg::dds_::ParameterValue_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            ParameterValue_PluginSupport_copy_data(
                ParameterValue_ *dst,
                const ParameterValue_ *src)
            {
                return rcl_interfaces::msg::dds_::ParameterValue__copy(dst,(const ParameterValue_*) src);
            }

            void 
            ParameterValue_PluginSupport_print_data(
                const ParameterValue_ *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                RTICdrType_printOctet(
                    &sample->type_, "type_", indent_level + 1);    

                RTICdrType_printBoolean(
                    &sample->bool_value_, "bool_value_", indent_level + 1);    

                RTICdrType_printLongLong(
                    &sample->integer_value_, "integer_value_", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->double_value_, "double_value_", indent_level + 1);    

                if (sample->string_value_==NULL) {
                    RTICdrType_printString(
                        NULL,"string_value_", indent_level + 1);
                } else {
                    RTICdrType_printString(
                        sample->string_value_,"string_value_", indent_level + 1);    
                }

                if (DDS_OctetSeq_get_contiguous_bufferI(&sample->byte_array_value_) != NULL) {
                    RTICdrType_printArray(
                        DDS_OctetSeq_get_contiguous_bufferI(&sample->byte_array_value_),
                        DDS_OctetSeq_get_length(&sample->byte_array_value_),
                        RTI_CDR_OCTET_SIZE,
                        (RTICdrTypePrintFunction)RTICdrType_printOctet,
                        "byte_array_value_", indent_level + 1);
                } else {
                    RTICdrType_printPointerArray(
                        DDS_OctetSeq_get_discontiguous_bufferI(&sample->byte_array_value_),
                        DDS_OctetSeq_get_length(&sample->byte_array_value_ ),
                        (RTICdrTypePrintFunction)RTICdrType_printOctet,
                        "byte_array_value_", indent_level + 1);
                }

                if (DDS_BooleanSeq_get_contiguous_bufferI(&sample->bool_array_value_) != NULL) {
                    RTICdrType_printArray(
                        DDS_BooleanSeq_get_contiguous_bufferI(&sample->bool_array_value_),
                        DDS_BooleanSeq_get_length(&sample->bool_array_value_),
                        RTI_CDR_BOOLEAN_SIZE,
                        (RTICdrTypePrintFunction)RTICdrType_printBoolean,
                        "bool_array_value_", indent_level + 1);
                } else {
                    RTICdrType_printPointerArray(
                        DDS_BooleanSeq_get_discontiguous_bufferI(&sample->bool_array_value_),
                        DDS_BooleanSeq_get_length(&sample->bool_array_value_ ),
                        (RTICdrTypePrintFunction)RTICdrType_printBoolean,
                        "bool_array_value_", indent_level + 1);
                }

                if (DDS_LongLongSeq_get_contiguous_bufferI(&sample->integer_array_value_) != NULL) {
                    RTICdrType_printArray(
                        DDS_LongLongSeq_get_contiguous_bufferI(&sample->integer_array_value_),
                        DDS_LongLongSeq_get_length(&sample->integer_array_value_),
                        RTI_CDR_LONG_LONG_SIZE,
                        (RTICdrTypePrintFunction)RTICdrType_printLongLong,
                        "integer_array_value_", indent_level + 1);
                } else {
                    RTICdrType_printPointerArray(
                        DDS_LongLongSeq_get_discontiguous_bufferI(&sample->integer_array_value_),
                        DDS_LongLongSeq_get_length(&sample->integer_array_value_ ),
                        (RTICdrTypePrintFunction)RTICdrType_printLongLong,
                        "integer_array_value_", indent_level + 1);
                }

                if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->double_array_value_) != NULL) {
                    RTICdrType_printArray(
                        DDS_DoubleSeq_get_contiguous_bufferI(&sample->double_array_value_),
                        DDS_DoubleSeq_get_length(&sample->double_array_value_),
                        RTI_CDR_DOUBLE_SIZE,
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "double_array_value_", indent_level + 1);
                } else {
                    RTICdrType_printPointerArray(
                        DDS_DoubleSeq_get_discontiguous_bufferI(&sample->double_array_value_),
                        DDS_DoubleSeq_get_length(&sample->double_array_value_ ),
                        (RTICdrTypePrintFunction)RTICdrType_printDouble,
                        "double_array_value_", indent_level + 1);
                }

                if (DDS_StringSeq_get_contiguous_bufferI(&sample->string_array_value_) != NULL) {
                    RTICdrType_printStringArray(
                        DDS_StringSeq_get_contiguous_bufferI(&sample->string_array_value_),
                        DDS_StringSeq_get_length(&sample->string_array_value_),
                        "string_array_value_", indent_level + 1,
                        RTI_CDR_CHAR_TYPE);
                } else {
                    RTICdrType_printStringPointerArray(
                        DDS_StringSeq_get_discontiguous_bufferI(&sample->string_array_value_),
                        DDS_StringSeq_get_length(&sample->string_array_value_),
                        "string_array_value_", indent_level + 1,
                        RTI_CDR_CHAR_TYPE);
                }

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            ParameterValue_Plugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */

                return PRESTypePluginDefaultParticipantData_new(participant_info);

            }

            void 
            ParameterValue_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            ParameterValue_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                PRESTypePluginEndpointData epd = NULL;

                unsigned int serializedSampleMaxSize;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    rcl_interfaces::msg::dds_::ParameterValue_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    rcl_interfaces::msg::dds_::ParameterValue_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = rcl_interfaces::msg::dds_::ParameterValue_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        rcl_interfaces::msg::dds_::ParameterValue_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        rcl_interfaces::msg::dds_::ParameterValue_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            ParameterValue_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            ParameterValue_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                ParameterValue_ *sample,
                void *handle)
            {

                ParameterValue__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            ParameterValue_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                ParameterValue_ *dst,
                const ParameterValue_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return rcl_interfaces::msg::dds_::ParameterValue_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            ParameterValue_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            ParameterValue_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const ParameterValue_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;
                RTIBool retval = RTI_TRUE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_sample) {

                    if (!RTICdrStream_serializeOctet(
                        stream, &sample->type_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeBoolean(
                        stream, &sample->bool_value_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeLongLong(
                        stream, &sample->integer_value_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeDouble(
                        stream, &sample->double_value_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeString(
                        stream, sample->string_value_, (RTI_INT32_MAX-1) + 1)) {
                        return RTI_FALSE;
                    }

                    if (DDS_OctetSeq_get_contiguous_bufferI(&sample->byte_array_value_) != NULL) {
                        if (!RTICdrStream_serializePrimitiveSequence(
                            stream,
                            DDS_OctetSeq_get_contiguous_bufferI(&sample->byte_array_value_),
                            DDS_OctetSeq_get_length(&sample->byte_array_value_),
                            (RTI_INT32_MAX-1),
                            RTI_CDR_OCTET_TYPE)) {
                            return RTI_FALSE;
                        } 
                    } else {
                        if (!RTICdrStream_serializePrimitivePointerSequence(
                            stream,
                            (const void **) DDS_OctetSeq_get_discontiguous_bufferI(&sample->byte_array_value_),
                            DDS_OctetSeq_get_length(&sample->byte_array_value_),
                            (RTI_INT32_MAX-1), 
                            RTI_CDR_OCTET_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }

                    if (DDS_BooleanSeq_get_contiguous_bufferI(&sample->bool_array_value_) != NULL) {
                        if (!RTICdrStream_serializePrimitiveSequence(
                            stream,
                            DDS_BooleanSeq_get_contiguous_bufferI(&sample->bool_array_value_),
                            DDS_BooleanSeq_get_length(&sample->bool_array_value_),
                            (RTI_INT32_MAX-1),
                            RTI_CDR_BOOLEAN_TYPE)) {
                            return RTI_FALSE;
                        } 
                    } else {
                        if (!RTICdrStream_serializePrimitivePointerSequence(
                            stream,
                            (const void **) DDS_BooleanSeq_get_discontiguous_bufferI(&sample->bool_array_value_),
                            DDS_BooleanSeq_get_length(&sample->bool_array_value_),
                            (RTI_INT32_MAX-1), 
                            RTI_CDR_BOOLEAN_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }

                    if (DDS_LongLongSeq_get_contiguous_bufferI(&sample->integer_array_value_) != NULL) {
                        if (!RTICdrStream_serializePrimitiveSequence(
                            stream,
                            DDS_LongLongSeq_get_contiguous_bufferI(&sample->integer_array_value_),
                            DDS_LongLongSeq_get_length(&sample->integer_array_value_),
                            (RTI_INT32_MAX-1),
                            RTI_CDR_LONG_LONG_TYPE)) {
                            return RTI_FALSE;
                        } 
                    } else {
                        if (!RTICdrStream_serializePrimitivePointerSequence(
                            stream,
                            (const void **) DDS_LongLongSeq_get_discontiguous_bufferI(&sample->integer_array_value_),
                            DDS_LongLongSeq_get_length(&sample->integer_array_value_),
                            (RTI_INT32_MAX-1), 
                            RTI_CDR_LONG_LONG_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }

                    if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->double_array_value_) != NULL) {
                        if (!RTICdrStream_serializePrimitiveSequence(
                            stream,
                            DDS_DoubleSeq_get_contiguous_bufferI(&sample->double_array_value_),
                            DDS_DoubleSeq_get_length(&sample->double_array_value_),
                            (RTI_INT32_MAX-1),
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    } else {
                        if (!RTICdrStream_serializePrimitivePointerSequence(
                            stream,
                            (const void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->double_array_value_),
                            DDS_DoubleSeq_get_length(&sample->double_array_value_),
                            (RTI_INT32_MAX-1), 
                            RTI_CDR_DOUBLE_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }

                    if (DDS_StringSeq_get_contiguous_bufferI(&sample->string_array_value_) != NULL) {
                        if (!RTICdrStream_serializeStringSequence(
                            stream,
                            DDS_StringSeq_get_contiguous_bufferI(&sample->string_array_value_),
                            DDS_StringSeq_get_length(&sample->string_array_value_),
                            (RTI_INT32_MAX-1),
                            (RTI_INT32_MAX-1) +1,
                            RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    } else {
                        if (!RTICdrStream_serializeStringPointerSequence(
                            stream,
                            (const void **) DDS_StringSeq_get_discontiguous_bufferI(&sample->string_array_value_),
                            DDS_StringSeq_get_length(&sample->string_array_value_),
                            (RTI_INT32_MAX-1), 
                            (RTI_INT32_MAX-1) +1,
                            RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return retval;
            }

            RTIBool 
            ParameterValue_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                ParameterValue_ *sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                char * position = NULL;

                RTIBool done = RTI_FALSE;

                try {

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */
                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if(deserialize_sample) {

                        rcl_interfaces::msg::dds_::ParameterValue__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        if (!RTICdrStream_deserializeOctet(
                            stream, &sample->type_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeBoolean(
                            stream, &sample->bool_value_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeLongLong(
                            stream, &sample->integer_value_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeDouble(
                            stream, &sample->double_value_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeStringEx(
                            stream,&sample->string_value_, (RTI_INT32_MAX-1) + 1,RTI_TRUE)) {
                            goto fin; 
                        }
                        {
                            RTICdrUnsignedLong sequence_length;
                            if (!RTICdrStream_lookUnsignedLong(stream,&sequence_length)) {
                                goto fin; 
                            }
                            if (!DDS_OctetSeq_set_maximum(&sample->byte_array_value_,sequence_length)) {
                                return RTI_FALSE;
                            }
                            if (DDS_OctetSeq_get_contiguous_bufferI(&sample->byte_array_value_) != NULL) {
                                if (!RTICdrStream_deserializePrimitiveSequence(
                                    stream,
                                    DDS_OctetSeq_get_contiguous_bufferI(&sample->byte_array_value_),
                                    &sequence_length,
                                    DDS_OctetSeq_get_maximum(&sample->byte_array_value_),
                                    RTI_CDR_OCTET_TYPE)){
                                    goto fin; 
                                }
                            } else {
                                if (!RTICdrStream_deserializePrimitivePointerSequence(
                                    stream,
                                    (void **) DDS_OctetSeq_get_discontiguous_bufferI(&sample->byte_array_value_),
                                    &sequence_length,
                                    DDS_OctetSeq_get_maximum(&sample->byte_array_value_),
                                    RTI_CDR_OCTET_TYPE)){
                                    goto fin; 
                                }
                            }
                            if (!DDS_OctetSeq_set_length(&sample->byte_array_value_, sequence_length)) {
                                return RTI_FALSE;
                            }

                        }
                        {
                            RTICdrUnsignedLong sequence_length;
                            if (!RTICdrStream_lookUnsignedLong(stream,&sequence_length)) {
                                goto fin; 
                            }
                            if (!DDS_BooleanSeq_set_maximum(&sample->bool_array_value_,sequence_length)) {
                                return RTI_FALSE;
                            }
                            if (DDS_BooleanSeq_get_contiguous_bufferI(&sample->bool_array_value_) != NULL) {
                                if (!RTICdrStream_deserializePrimitiveSequence(
                                    stream,
                                    DDS_BooleanSeq_get_contiguous_bufferI(&sample->bool_array_value_),
                                    &sequence_length,
                                    DDS_BooleanSeq_get_maximum(&sample->bool_array_value_),
                                    RTI_CDR_BOOLEAN_TYPE)){
                                    goto fin; 
                                }
                            } else {
                                if (!RTICdrStream_deserializePrimitivePointerSequence(
                                    stream,
                                    (void **) DDS_BooleanSeq_get_discontiguous_bufferI(&sample->bool_array_value_),
                                    &sequence_length,
                                    DDS_BooleanSeq_get_maximum(&sample->bool_array_value_),
                                    RTI_CDR_BOOLEAN_TYPE)){
                                    goto fin; 
                                }
                            }
                            if (!DDS_BooleanSeq_set_length(&sample->bool_array_value_, sequence_length)) {
                                return RTI_FALSE;
                            }

                        }
                        {
                            RTICdrUnsignedLong sequence_length;
                            if (!RTICdrStream_lookUnsignedLong(stream,&sequence_length)) {
                                goto fin; 
                            }
                            if (!DDS_LongLongSeq_set_maximum(&sample->integer_array_value_,sequence_length)) {
                                return RTI_FALSE;
                            }
                            if (DDS_LongLongSeq_get_contiguous_bufferI(&sample->integer_array_value_) != NULL) {
                                if (!RTICdrStream_deserializePrimitiveSequence(
                                    stream,
                                    DDS_LongLongSeq_get_contiguous_bufferI(&sample->integer_array_value_),
                                    &sequence_length,
                                    DDS_LongLongSeq_get_maximum(&sample->integer_array_value_),
                                    RTI_CDR_LONG_LONG_TYPE)){
                                    goto fin; 
                                }
                            } else {
                                if (!RTICdrStream_deserializePrimitivePointerSequence(
                                    stream,
                                    (void **) DDS_LongLongSeq_get_discontiguous_bufferI(&sample->integer_array_value_),
                                    &sequence_length,
                                    DDS_LongLongSeq_get_maximum(&sample->integer_array_value_),
                                    RTI_CDR_LONG_LONG_TYPE)){
                                    goto fin; 
                                }
                            }
                            if (!DDS_LongLongSeq_set_length(&sample->integer_array_value_, sequence_length)) {
                                return RTI_FALSE;
                            }

                        }
                        {
                            RTICdrUnsignedLong sequence_length;
                            if (!RTICdrStream_lookUnsignedLong(stream,&sequence_length)) {
                                goto fin; 
                            }
                            if (!DDS_DoubleSeq_set_maximum(&sample->double_array_value_,sequence_length)) {
                                return RTI_FALSE;
                            }
                            if (DDS_DoubleSeq_get_contiguous_bufferI(&sample->double_array_value_) != NULL) {
                                if (!RTICdrStream_deserializePrimitiveSequence(
                                    stream,
                                    DDS_DoubleSeq_get_contiguous_bufferI(&sample->double_array_value_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->double_array_value_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            } else {
                                if (!RTICdrStream_deserializePrimitivePointerSequence(
                                    stream,
                                    (void **) DDS_DoubleSeq_get_discontiguous_bufferI(&sample->double_array_value_),
                                    &sequence_length,
                                    DDS_DoubleSeq_get_maximum(&sample->double_array_value_),
                                    RTI_CDR_DOUBLE_TYPE)){
                                    goto fin; 
                                }
                            }
                            if (!DDS_DoubleSeq_set_length(&sample->double_array_value_, sequence_length)) {
                                return RTI_FALSE;
                            }

                        }
                        {
                            RTICdrUnsignedLong sequence_length;
                            if (!RTICdrStream_lookUnsignedLong(stream,&sequence_length)) {
                                goto fin; 
                            }
                            if (!DDS_StringSeq_set_maximum(&sample->string_array_value_,sequence_length)) {
                                return RTI_FALSE;
                            }
                            if (DDS_StringSeq_get_contiguous_bufferI(&sample->string_array_value_) != NULL) {
                                if (!RTICdrStream_deserializeStringSequenceEx(
                                    stream,
                                    DDS_StringSeq_get_contiguous_bufferI(&sample->string_array_value_),
                                    &sequence_length,
                                    DDS_StringSeq_get_maximum(&sample->string_array_value_),
                                    (RTI_INT32_MAX-1) +1,RTI_CDR_CHAR_TYPE,RTI_TRUE)){
                                    goto fin; 
                                }
                            } else {
                                if (!RTICdrStream_deserializeStringPointerSequenceEx(
                                    stream,
                                    (void **) DDS_StringSeq_get_discontiguous_bufferI(&sample->string_array_value_),
                                    &sequence_length,
                                    DDS_StringSeq_get_maximum(&sample->string_array_value_),
                                    (RTI_INT32_MAX-1) +1,RTI_CDR_CHAR_TYPE,RTI_TRUE)){
                                    goto fin; 
                                }
                            }
                            if (!DDS_StringSeq_set_length(&sample->string_array_value_, sequence_length)) {
                                return RTI_FALSE;
                            }

                        }
                    }

                    done = RTI_TRUE;
                  fin:
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            ParameterValue_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const ParameterValue_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                ParameterValue_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    ParameterValue_Plugin_get_serialized_sample_size(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        RTICdrEncapsulation_getNativeCdrEncapsulationId(),
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = rcl_interfaces::msg::dds_::ParameterValue_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            ParameterValue_Plugin_deserialize_from_cdr_buffer(
                ParameterValue_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                ParameterValue__finalize_optional_members(sample, RTI_TRUE);
                return ParameterValue_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            ParameterValue_Plugin_data_to_string(
                const ParameterValue_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property)
            {
                DDS_DynamicData *data = NULL;
                char *buffer = NULL;
                unsigned int length = 0;
                struct DDS_PrintFormat printFormat;
                DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

                if (sample == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (str_size == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (property == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (!ParameterValue_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!ParameterValue_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    ParameterValue__get_typecode(), 
                    &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
                if (data == NULL) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_PrintFormatProperty_to_print_format(
                    property, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_DynamicDataFormatter_to_string_w_format(
                    data, 
                    str,
                    str_size, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                RTIOsapiHeap_freeBuffer(buffer);
                DDS_DynamicData_delete(data);
                return DDS_RETCODE_OK;
            }

            RTIBool 
            ParameterValue_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                ParameterValue_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "ParameterValue_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= rcl_interfaces::msg::dds_::ParameterValue_Plugin_deserialize_sample( 
                    endpoint_data, (sample != NULL)?*sample:NULL,
                    stream, deserialize_encapsulation, deserialize_sample, 
                    endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                if (!result && stream->_xTypesState.unassignable ) {

                    RTICdrLog_exception(
                        METHOD_NAME, 
                        &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
                        "ParameterValue_");

                }

                return result;

            }

            RTIBool ParameterValue_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream,   
                RTIBool skip_encapsulation,
                RTIBool skip_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(skip_encapsulation) {
                    if (!RTICdrStream_skipEncapsulation(stream)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if (skip_sample) {

                    if (!RTICdrStream_skipOctet (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipBoolean (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipLongLong (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipDouble (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipString (stream, (RTI_INT32_MAX-1)+1)) {
                        goto fin; 
                    }
                    {
                        RTICdrUnsignedLong sequence_length;
                        if (!RTICdrStream_skipPrimitiveSequence(
                            stream,
                            &sequence_length,
                            RTI_CDR_OCTET_TYPE)){
                            goto fin; 
                        }
                    }
                    {
                        RTICdrUnsignedLong sequence_length;
                        if (!RTICdrStream_skipPrimitiveSequence(
                            stream,
                            &sequence_length,
                            RTI_CDR_BOOLEAN_TYPE)){
                            goto fin; 
                        }
                    }
                    {
                        RTICdrUnsignedLong sequence_length;
                        if (!RTICdrStream_skipPrimitiveSequence(
                            stream,
                            &sequence_length,
                            RTI_CDR_LONG_LONG_TYPE)){
                            goto fin; 
                        }
                    }
                    {
                        RTICdrUnsignedLong sequence_length;
                        if (!RTICdrStream_skipPrimitiveSequence(
                            stream,
                            &sequence_length,
                            RTI_CDR_DOUBLE_TYPE)){
                            goto fin; 
                        }
                    }
                    {
                        RTICdrUnsignedLong sequence_length;
                        if (!RTICdrStream_skipStringSequence(
                            stream,
                            &sequence_length,
                            (RTI_INT32_MAX-1) + 1,     RTI_CDR_CHAR_TYPE)){
                            goto fin; 
                        }
                    }
                }

                done = RTI_TRUE;
              fin:
                if (done != RTI_TRUE && 
                RTICdrStream_getRemainder(stream) >=
                RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                    return RTI_FALSE;   
                }
                if(skip_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            unsigned int 
            ParameterValue_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                if (endpoint_data) {} /* To avoid warnings */
                if (include_encapsulation) {}
                if (encapsulation_id) {}
                if (current_alignment) {}

                if (overflow != NULL) {
                    *overflow = RTI_TRUE;
                }

                return RTI_CDR_MAX_SERIALIZED_SIZE;

            }

            unsigned int 
            ParameterValue_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = ParameterValue_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            ParameterValue_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */ 

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getLongLongMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getStringMaxSizeSerialized(
                    current_alignment, 1);
                current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
                    current_alignment,0, RTI_CDR_OCTET_TYPE);
                current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
                    current_alignment,0, RTI_CDR_BOOLEAN_TYPE);
                current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
                    current_alignment,0, RTI_CDR_LONG_LONG_TYPE);
                current_alignment +=    RTICdrType_getPrimitiveSequenceMaxSizeSerialized(
                    current_alignment,0, RTI_CDR_DOUBLE_TYPE);
                current_alignment +=    RTICdrType_getStringSequenceMaxSizeSerialized(
                    current_alignment,0,1, RTI_CDR_CHAR_TYPE);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            /* Returns the size of the sample in its serialized form (in bytes).
            * It can also be an estimation in excess of the real buffer needed 
            * during a call to the serialize() function.
            * The value reported does not have to include the space for the
            * encapsulation flags.
            */
            unsigned int
            ParameterValue_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const ParameterValue_ * sample) 
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;
                struct PRESTypePluginDefaultEndpointData epd;   

                if (sample==NULL) {
                    return 0;
                }
                if (endpoint_data == NULL) {
                    endpoint_data = (PRESTypePluginEndpointData) &epd;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);        
                }

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);
                }

                current_alignment += RTICdrType_getOctetMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getBooleanMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getLongLongMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getStringSerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), sample->string_value_);

                current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        DDS_OctetSeq_get_length(&sample->byte_array_value_),
                        RTI_CDR_OCTET_TYPE);

                current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        DDS_BooleanSeq_get_length(&sample->bool_array_value_),
                        RTI_CDR_BOOLEAN_TYPE);

                current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        DDS_LongLongSeq_get_length(&sample->integer_array_value_),
                        RTI_CDR_LONG_LONG_TYPE);

                current_alignment += RTICdrType_getPrimitiveSequenceSerializedSize(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        DDS_DoubleSeq_get_length(&sample->double_array_value_),
                        RTI_CDR_DOUBLE_TYPE);

                if (DDS_StringSeq_get_contiguous_bufferI(&sample->string_array_value_) != NULL) {
                    current_alignment += RTICdrStream_getStringSequenceSerializedSize(
                        PRESTypePluginDefaultEndpointData_getAlignment(
                            endpoint_data, current_alignment),
                            DDS_StringSeq_get_contiguous_bufferI(&sample->string_array_value_),
                            DDS_StringSeq_get_length(&sample->string_array_value_),
                            RTI_CDR_CHAR_TYPE);
                } else {
                    current_alignment += RTICdrStream_getStringPointerSequenceSerializedSize(
                        PRESTypePluginDefaultEndpointData_getAlignment(
                            endpoint_data,current_alignment),
                            (const void **)DDS_StringSeq_get_discontiguous_bufferI(&sample->string_array_value_),
                            DDS_StringSeq_get_length(&sample->string_array_value_),
                            RTI_CDR_CHAR_TYPE);
                }

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            ParameterValue_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            ParameterValue_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const ParameterValue_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_key) {

                    if (!rcl_interfaces::msg::dds_::ParameterValue_Plugin_serialize(
                        endpoint_data,
                        sample,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            RTIBool ParameterValue_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                ParameterValue_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {

                    char * position = NULL;

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */

                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if (deserialize_key) {

                        if (!rcl_interfaces::msg::dds_::ParameterValue_Plugin_deserialize_sample(
                            endpoint_data, sample, stream, 
                            RTI_FALSE, RTI_TRUE, 
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                        }
                    }

                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool ParameterValue_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                ParameterValue_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= rcl_interfaces::msg::dds_::ParameterValue_Plugin_deserialize_key_sample(
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }

                return result;    

            }

            unsigned int
            ParameterValue_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */
                if (overflow) {} /* To avoid warnings */

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment += rcl_interfaces::msg::dds_::ParameterValue_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            ParameterValue_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = ParameterValue_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            ParameterValue_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                ParameterValue_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;
                RTIBool error = RTI_FALSE;

                if (stream == NULL) {
                    error = RTI_TRUE;
                    goto fin;
                }
                if(deserialize_encapsulation) {
                    if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                        return RTI_FALSE;
                    }
                    position = RTICdrStream_resetAlignment(stream);
                }

                if (deserialize_key) {

                    if (!rcl_interfaces::msg::dds_::ParameterValue_Plugin_deserialize_sample(
                        endpoint_data, sample, stream, RTI_FALSE, 
                        RTI_TRUE, endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                done = RTI_TRUE;
              fin:
                if(!error) {
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                } else {
                    return RTI_FALSE;
                }       

                if(deserialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *ParameterValue_Plugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);

                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                rcl_interfaces::msg::dds_::ParameterValue_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                rcl_interfaces::msg::dds_::ParameterValue_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                rcl_interfaces::msg::dds_::ParameterValue_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                rcl_interfaces::msg::dds_::ParameterValue_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                rcl_interfaces::msg::dds_::ParameterValue_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                ParameterValue_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                ParameterValue_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                ParameterValue__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                rcl_interfaces::msg::dds_::ParameterValue_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                rcl_interfaces::msg::dds_::ParameterValue_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                rcl_interfaces::msg::dds_::ParameterValue_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                rcl_interfaces::msg::dds_::ParameterValue_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                ParameterValue_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                ParameterValue_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                rcl_interfaces::msg::dds_::ParameterValue_Plugin_get_key_kind;

                /* These functions are only used for keyed types. As this is not a keyed
                type they are all set to NULL
                */
                plugin->serializeKeyFnc = NULL ;    
                plugin->deserializeKeyFnc = NULL;  
                plugin->getKeyFnc = NULL;
                plugin->returnKeyFnc = NULL;
                plugin->instanceToKeyFnc = NULL;
                plugin->keyToInstanceFnc = NULL;
                plugin->getSerializedKeyMaxSizeFnc = NULL;
                plugin->instanceToKeyHashFnc = NULL;
                plugin->serializedSampleToKeyHashFnc = NULL;
                plugin->serializedKeyToKeyHashFnc = NULL;    
                plugin->typeCode =  (struct RTICdrTypeCode *)rcl_interfaces::msg::dds_::ParameterValue__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                ParameterValue_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                ParameterValue_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                rcl_interfaces::msg::dds_::ParameterValue_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = ParameterValue_TYPENAME;

                return plugin;
            }

            void
            ParameterValue_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace rcl_interfaces  */
#undef RTI_CDR_CURRENT_SUBMODULE 
