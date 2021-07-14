#ifndef H_17CD01243F280EEE30DC42A34E957340_GetParameterTypes_SPLTYPES_H
#define H_17CD01243F280EEE30DC42A34E957340_GetParameterTypes_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GetParameterTypes_.h"


extern c_metaObject __GetParameterTypes__rcl_interfaces__load (c_base base);

extern c_metaObject __GetParameterTypes__rcl_interfaces_srv__load (c_base base);

extern c_metaObject __GetParameterTypes__rcl_interfaces_srv_dds___load (c_base base);

extern const char *rcl_interfaces_srv_dds__GetParameterTypes_Request__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__GetParameterTypes_Request__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__GetParameterTypes_Request__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__GetParameterTypes_Request___load (c_base base);
struct _rcl_interfaces_srv_dds__GetParameterTypes_Request_ ;
extern  v_copyin_result __rcl_interfaces_srv_dds__GetParameterTypes_Request___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::GetParameterTypes_Request_ *from, struct _rcl_interfaces_srv_dds__GetParameterTypes_Request_ *to);
extern  void __rcl_interfaces_srv_dds__GetParameterTypes_Request___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__GetParameterTypes_Request_ {
    c_sequence names_;
};

extern const char *rcl_interfaces_srv_dds__GetParameterTypes_Response__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__GetParameterTypes_Response__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__GetParameterTypes_Response__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__GetParameterTypes_Response___load (c_base base);
struct _rcl_interfaces_srv_dds__GetParameterTypes_Response_ ;
extern  v_copyin_result __rcl_interfaces_srv_dds__GetParameterTypes_Response___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::GetParameterTypes_Response_ *from, struct _rcl_interfaces_srv_dds__GetParameterTypes_Response_ *to);
extern  void __rcl_interfaces_srv_dds__GetParameterTypes_Response___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__GetParameterTypes_Response_ {
    c_sequence types_;
};

extern const char *rcl_interfaces_srv_dds__Sample_GetParameterTypes_Request__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__Sample_GetParameterTypes_Request__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__Sample_GetParameterTypes_Request__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__Sample_GetParameterTypes_Request___load (c_base base);
struct _rcl_interfaces_srv_dds__Sample_GetParameterTypes_Request_ ;
extern  v_copyin_result __rcl_interfaces_srv_dds__Sample_GetParameterTypes_Request___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Request_ *from, struct _rcl_interfaces_srv_dds__Sample_GetParameterTypes_Request_ *to);
extern  void __rcl_interfaces_srv_dds__Sample_GetParameterTypes_Request___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__Sample_GetParameterTypes_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _rcl_interfaces_srv_dds__GetParameterTypes_Request_ request_;
};

extern const char *rcl_interfaces_srv_dds__Sample_GetParameterTypes_Response__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__Sample_GetParameterTypes_Response__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__Sample_GetParameterTypes_Response__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__Sample_GetParameterTypes_Response___load (c_base base);
struct _rcl_interfaces_srv_dds__Sample_GetParameterTypes_Response_ ;
extern  v_copyin_result __rcl_interfaces_srv_dds__Sample_GetParameterTypes_Response___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::Sample_GetParameterTypes_Response_ *from, struct _rcl_interfaces_srv_dds__Sample_GetParameterTypes_Response_ *to);
extern  void __rcl_interfaces_srv_dds__Sample_GetParameterTypes_Response___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__Sample_GetParameterTypes_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _rcl_interfaces_srv_dds__GetParameterTypes_Response_ response_;
};

#undef OS_API
#endif
