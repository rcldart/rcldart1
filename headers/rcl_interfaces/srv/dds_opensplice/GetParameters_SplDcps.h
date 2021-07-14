#ifndef H_37E8461378925AFC5ACFD69BA147967C_GetParameters_SPLTYPES_H
#define H_37E8461378925AFC5ACFD69BA147967C_GetParameters_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_GetParameters_.h"
#include "rcl_interfaces/msg/dds_opensplice/ParameterValue_SplDcps.h"



extern c_metaObject __GetParameters__rcl_interfaces__load (c_base base);

extern c_metaObject __GetParameters__rcl_interfaces_srv__load (c_base base);

extern c_metaObject __GetParameters__rcl_interfaces_srv_dds___load (c_base base);

extern const char *rcl_interfaces_srv_dds__GetParameters_Request__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__GetParameters_Request__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__GetParameters_Request__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__GetParameters_Request___load (c_base base);
struct _rcl_interfaces_srv_dds__GetParameters_Request_ ;
extern  v_copyin_result __rcl_interfaces_srv_dds__GetParameters_Request___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::GetParameters_Request_ *from, struct _rcl_interfaces_srv_dds__GetParameters_Request_ *to);
extern  void __rcl_interfaces_srv_dds__GetParameters_Request___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__GetParameters_Request_ {
    c_sequence names_;
};

extern const char *rcl_interfaces_srv_dds__GetParameters_Response__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__GetParameters_Response__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__GetParameters_Response__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__GetParameters_Response___load (c_base base);
struct _rcl_interfaces_srv_dds__GetParameters_Response_ ;
extern  v_copyin_result __rcl_interfaces_srv_dds__GetParameters_Response___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::GetParameters_Response_ *from, struct _rcl_interfaces_srv_dds__GetParameters_Response_ *to);
extern  void __rcl_interfaces_srv_dds__GetParameters_Response___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__GetParameters_Response_ {
    c_sequence values_;
};

extern const char *rcl_interfaces_srv_dds__Sample_GetParameters_Request__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__Sample_GetParameters_Request__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__Sample_GetParameters_Request__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__Sample_GetParameters_Request___load (c_base base);
struct _rcl_interfaces_srv_dds__Sample_GetParameters_Request_ ;
extern  v_copyin_result __rcl_interfaces_srv_dds__Sample_GetParameters_Request___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::Sample_GetParameters_Request_ *from, struct _rcl_interfaces_srv_dds__Sample_GetParameters_Request_ *to);
extern  void __rcl_interfaces_srv_dds__Sample_GetParameters_Request___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__Sample_GetParameters_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _rcl_interfaces_srv_dds__GetParameters_Request_ request_;
};

extern const char *rcl_interfaces_srv_dds__Sample_GetParameters_Response__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__Sample_GetParameters_Response__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__Sample_GetParameters_Response__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__Sample_GetParameters_Response___load (c_base base);
struct _rcl_interfaces_srv_dds__Sample_GetParameters_Response_ ;
extern  v_copyin_result __rcl_interfaces_srv_dds__Sample_GetParameters_Response___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::Sample_GetParameters_Response_ *from, struct _rcl_interfaces_srv_dds__Sample_GetParameters_Response_ *to);
extern  void __rcl_interfaces_srv_dds__Sample_GetParameters_Response___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__Sample_GetParameters_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _rcl_interfaces_srv_dds__GetParameters_Response_ response_;
};

#undef OS_API
#endif
