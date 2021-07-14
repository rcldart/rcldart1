#ifndef H_9C934AF65C478D973FEE8EC7BE61E794_Log_SPLTYPES_H
#define H_9C934AF65C478D973FEE8EC7BE61E794_Log_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Log_.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_SplDcps.h"



extern c_metaObject __Log__rcl_interfaces__load (c_base base);

extern c_metaObject __Log__rcl_interfaces_msg__load (c_base base);

extern c_metaObject __Log__rcl_interfaces_msg_dds___load (c_base base);

extern c_metaObject __Log__rcl_interfaces_msg_dds__Log_Constants__load (c_base base);

extern const char *rcl_interfaces_msg_dds__Log__metaDescriptor[];
extern const int rcl_interfaces_msg_dds__Log__metaDescriptorArrLength;
extern const int rcl_interfaces_msg_dds__Log__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_msg_dds__Log___load (c_base base);
struct _rcl_interfaces_msg_dds__Log_ ;
extern  v_copyin_result __rcl_interfaces_msg_dds__Log___copyIn(c_base base, const struct rcl_interfaces::msg::dds_::Log_ *from, struct _rcl_interfaces_msg_dds__Log_ *to);
extern  void __rcl_interfaces_msg_dds__Log___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_msg_dds__Log_ {
    struct _builtin_interfaces_msg_dds__Time_ stamp_;
    c_octet level_;
    c_string name_;
    c_string msg_;
    c_string file_;
    c_string function_;
    c_ulong line_;
};

#undef OS_API
#endif
