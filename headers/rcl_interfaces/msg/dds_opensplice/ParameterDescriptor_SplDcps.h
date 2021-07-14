#ifndef H_F15EC4838A259565FE70A124EE9FD8A9_ParameterDescriptor_SPLTYPES_H
#define H_F15EC4838A259565FE70A124EE9FD8A9_ParameterDescriptor_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_ParameterDescriptor_.h"
#include "rcl_interfaces/msg/dds_opensplice/FloatingPointRange_SplDcps.h"
#include "rcl_interfaces/msg/dds_opensplice/IntegerRange_SplDcps.h"



extern c_metaObject __ParameterDescriptor__rcl_interfaces__load (c_base base);

extern c_metaObject __ParameterDescriptor__rcl_interfaces_msg__load (c_base base);

extern c_metaObject __ParameterDescriptor__rcl_interfaces_msg_dds___load (c_base base);

extern const char *rcl_interfaces_msg_dds__ParameterDescriptor__metaDescriptor[];
extern const int rcl_interfaces_msg_dds__ParameterDescriptor__metaDescriptorArrLength;
extern const int rcl_interfaces_msg_dds__ParameterDescriptor__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_msg_dds__ParameterDescriptor___load (c_base base);
struct _rcl_interfaces_msg_dds__ParameterDescriptor_ ;
extern  v_copyin_result __rcl_interfaces_msg_dds__ParameterDescriptor___copyIn(c_base base, const struct rcl_interfaces::msg::dds_::ParameterDescriptor_ *from, struct _rcl_interfaces_msg_dds__ParameterDescriptor_ *to);
extern  void __rcl_interfaces_msg_dds__ParameterDescriptor___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_msg_dds__ParameterDescriptor_ {
    c_string name_;
    c_octet type_;
    c_string description_;
    c_string additional_constraints_;
    c_bool read_only_;
    c_sequence floating_point_range_;
    c_sequence integer_range_;
};

#undef OS_API
#endif
