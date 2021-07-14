#ifndef H_F3BE3C1CB5C290001F76542C4D9560BD_IntegerRange_SPLTYPES_H
#define H_F3BE3C1CB5C290001F76542C4D9560BD_IntegerRange_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_IntegerRange_.h"


extern c_metaObject __IntegerRange__rcl_interfaces__load (c_base base);

extern c_metaObject __IntegerRange__rcl_interfaces_msg__load (c_base base);

extern c_metaObject __IntegerRange__rcl_interfaces_msg_dds___load (c_base base);

extern const char *rcl_interfaces_msg_dds__IntegerRange__metaDescriptor[];
extern const int rcl_interfaces_msg_dds__IntegerRange__metaDescriptorArrLength;
extern const int rcl_interfaces_msg_dds__IntegerRange__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_msg_dds__IntegerRange___load (c_base base);
struct _rcl_interfaces_msg_dds__IntegerRange_ ;
extern  v_copyin_result __rcl_interfaces_msg_dds__IntegerRange___copyIn(c_base base, const struct rcl_interfaces::msg::dds_::IntegerRange_ *from, struct _rcl_interfaces_msg_dds__IntegerRange_ *to);
extern  void __rcl_interfaces_msg_dds__IntegerRange___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_msg_dds__IntegerRange_ {
    c_longlong from_value_;
    c_longlong to_value_;
    c_ulonglong step_;
};

#undef OS_API
#endif
