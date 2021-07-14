#ifndef H_C4AD0AB78CC3E0CF773DCB82EEA8F2DA_ListParameters_SPLTYPES_H
#define H_C4AD0AB78CC3E0CF773DCB82EEA8F2DA_ListParameters_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_ListParameters_.h"
#include "rcl_interfaces/msg/dds_opensplice/ListParametersResult_SplDcps.h"



extern c_metaObject __ListParameters__rcl_interfaces__load (c_base base);

extern c_metaObject __ListParameters__rcl_interfaces_srv__load (c_base base);

extern c_metaObject __ListParameters__rcl_interfaces_srv_dds___load (c_base base);

extern c_metaObject __ListParameters__rcl_interfaces_srv_dds__ListParameters_Request_Constants__load (c_base base);

extern const char *rcl_interfaces_srv_dds__ListParameters_Request__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__ListParameters_Request__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__ListParameters_Request__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__ListParameters_Request___load (c_base base);
struct _rcl_interfaces_srv_dds__ListParameters_Request_ ;
extern  v_copyin_result __rcl_interfaces_srv_dds__ListParameters_Request___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::ListParameters_Request_ *from, struct _rcl_interfaces_srv_dds__ListParameters_Request_ *to);
extern  void __rcl_interfaces_srv_dds__ListParameters_Request___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__ListParameters_Request_ {
    c_sequence prefixes_;
    c_ulonglong depth_;
};

extern const char *rcl_interfaces_srv_dds__ListParameters_Response__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__ListParameters_Response__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__ListParameters_Response__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__ListParameters_Response___load (c_base base);
struct _rcl_interfaces_srv_dds__ListParameters_Response_ ;
extern  v_copyin_result __rcl_interfaces_srv_dds__ListParameters_Response___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::ListParameters_Response_ *from, struct _rcl_interfaces_srv_dds__ListParameters_Response_ *to);
extern  void __rcl_interfaces_srv_dds__ListParameters_Response___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__ListParameters_Response_ {
    struct _rcl_interfaces_msg_dds__ListParametersResult_ result_;
};

extern const char *rcl_interfaces_srv_dds__Sample_ListParameters_Request__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__Sample_ListParameters_Request__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__Sample_ListParameters_Request__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__Sample_ListParameters_Request___load (c_base base);
struct _rcl_interfaces_srv_dds__Sample_ListParameters_Request_ ;
extern  v_copyin_result __rcl_interfaces_srv_dds__Sample_ListParameters_Request___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::Sample_ListParameters_Request_ *from, struct _rcl_interfaces_srv_dds__Sample_ListParameters_Request_ *to);
extern  void __rcl_interfaces_srv_dds__Sample_ListParameters_Request___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__Sample_ListParameters_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _rcl_interfaces_srv_dds__ListParameters_Request_ request_;
};

extern const char *rcl_interfaces_srv_dds__Sample_ListParameters_Response__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__Sample_ListParameters_Response__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__Sample_ListParameters_Response__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__Sample_ListParameters_Response___load (c_base base);
struct _rcl_interfaces_srv_dds__Sample_ListParameters_Response_ ;
extern  v_copyin_result __rcl_interfaces_srv_dds__Sample_ListParameters_Response___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::Sample_ListParameters_Response_ *from, struct _rcl_interfaces_srv_dds__Sample_ListParameters_Response_ *to);
extern  void __rcl_interfaces_srv_dds__Sample_ListParameters_Response___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__Sample_ListParameters_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _rcl_interfaces_srv_dds__ListParameters_Response_ response_;
};

#undef OS_API
#endif
