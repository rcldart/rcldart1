#ifndef H_D7C06703178A5FD853D3BC72D70A11D0_SetParametersResult_SPLTYPES_H
#define H_D7C06703178A5FD853D3BC72D70A11D0_SetParametersResult_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_SetParametersResult_.h"


extern c_metaObject __SetParametersResult__rcl_interfaces__load (c_base base);

extern c_metaObject __SetParametersResult__rcl_interfaces_msg__load (c_base base);

extern c_metaObject __SetParametersResult__rcl_interfaces_msg_dds___load (c_base base);

extern const char *rcl_interfaces_msg_dds__SetParametersResult__metaDescriptor[];
extern const int rcl_interfaces_msg_dds__SetParametersResult__metaDescriptorArrLength;
extern const int rcl_interfaces_msg_dds__SetParametersResult__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_msg_dds__SetParametersResult___load (c_base base);
struct _rcl_interfaces_msg_dds__SetParametersResult_ ;
extern  v_copyin_result __rcl_interfaces_msg_dds__SetParametersResult___copyIn(c_base base, const struct rcl_interfaces::msg::dds_::SetParametersResult_ *from, struct _rcl_interfaces_msg_dds__SetParametersResult_ *to);
extern  void __rcl_interfaces_msg_dds__SetParametersResult___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_msg_dds__SetParametersResult_ {
    c_bool successful_;
    c_string reason_;
};

#undef OS_API
#endif
