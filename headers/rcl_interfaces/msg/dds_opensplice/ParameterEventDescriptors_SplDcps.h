#ifndef H_84552A72AA7717486A3AA5CC4651D8D5_ParameterEventDescriptors_SPLTYPES_H
#define H_84552A72AA7717486A3AA5CC4651D8D5_ParameterEventDescriptors_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_ParameterEventDescriptors_.h"
#include "rcl_interfaces/msg/dds_opensplice/ParameterDescriptor_SplDcps.h"



extern c_metaObject __ParameterEventDescriptors__rcl_interfaces__load (c_base base);

extern c_metaObject __ParameterEventDescriptors__rcl_interfaces_msg__load (c_base base);

extern c_metaObject __ParameterEventDescriptors__rcl_interfaces_msg_dds___load (c_base base);

extern const char *rcl_interfaces_msg_dds__ParameterEventDescriptors__metaDescriptor[];
extern const int rcl_interfaces_msg_dds__ParameterEventDescriptors__metaDescriptorArrLength;
extern const int rcl_interfaces_msg_dds__ParameterEventDescriptors__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_msg_dds__ParameterEventDescriptors___load (c_base base);
struct _rcl_interfaces_msg_dds__ParameterEventDescriptors_ ;
extern  v_copyin_result __rcl_interfaces_msg_dds__ParameterEventDescriptors___copyIn(c_base base, const struct rcl_interfaces::msg::dds_::ParameterEventDescriptors_ *from, struct _rcl_interfaces_msg_dds__ParameterEventDescriptors_ *to);
extern  void __rcl_interfaces_msg_dds__ParameterEventDescriptors___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_msg_dds__ParameterEventDescriptors_ {
    c_sequence new_parameters_;
    c_sequence changed_parameters_;
    c_sequence deleted_parameters_;
};

#undef OS_API
#endif
