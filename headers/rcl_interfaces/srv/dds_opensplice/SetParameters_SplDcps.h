#ifndef H_BC7ADA5552CCDD7509F6744A7A91C98F_SetParameters_SPLTYPES_H
#define H_BC7ADA5552CCDD7509F6744A7A91C98F_SetParameters_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_SetParameters_.h"
#include "rcl_interfaces/msg/dds_opensplice/Parameter_SplDcps.h"
#include "rcl_interfaces/msg/dds_opensplice/SetParametersResult_SplDcps.h"



extern c_metaObject __SetParameters__rcl_interfaces__load (c_base base);

extern c_metaObject __SetParameters__rcl_interfaces_srv__load (c_base base);

extern c_metaObject __SetParameters__rcl_interfaces_srv_dds___load (c_base base);

extern const char *rcl_interfaces_srv_dds__SetParameters_Request__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__SetParameters_Request__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__SetParameters_Request__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__SetParameters_Request___load (c_base base);
struct _rcl_interfaces_srv_dds__SetParameters_Request_ ;
extern  v_copyin_result __rcl_interfaces_srv_dds__SetParameters_Request___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::SetParameters_Request_ *from, struct _rcl_interfaces_srv_dds__SetParameters_Request_ *to);
extern  void __rcl_interfaces_srv_dds__SetParameters_Request___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__SetParameters_Request_ {
    c_sequence parameters_;
};

extern const char *rcl_interfaces_srv_dds__SetParameters_Response__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__SetParameters_Response__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__SetParameters_Response__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__SetParameters_Response___load (c_base base);
struct _rcl_interfaces_srv_dds__SetParameters_Response_ ;
extern  v_copyin_result __rcl_interfaces_srv_dds__SetParameters_Response___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::SetParameters_Response_ *from, struct _rcl_interfaces_srv_dds__SetParameters_Response_ *to);
extern  void __rcl_interfaces_srv_dds__SetParameters_Response___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__SetParameters_Response_ {
    c_sequence results_;
};

extern const char *rcl_interfaces_srv_dds__Sample_SetParameters_Request__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__Sample_SetParameters_Request__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__Sample_SetParameters_Request__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__Sample_SetParameters_Request___load (c_base base);
struct _rcl_interfaces_srv_dds__Sample_SetParameters_Request_ ;
extern  v_copyin_result __rcl_interfaces_srv_dds__Sample_SetParameters_Request___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::Sample_SetParameters_Request_ *from, struct _rcl_interfaces_srv_dds__Sample_SetParameters_Request_ *to);
extern  void __rcl_interfaces_srv_dds__Sample_SetParameters_Request___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__Sample_SetParameters_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _rcl_interfaces_srv_dds__SetParameters_Request_ request_;
};

extern const char *rcl_interfaces_srv_dds__Sample_SetParameters_Response__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__Sample_SetParameters_Response__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__Sample_SetParameters_Response__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__Sample_SetParameters_Response___load (c_base base);
struct _rcl_interfaces_srv_dds__Sample_SetParameters_Response_ ;
extern  v_copyin_result __rcl_interfaces_srv_dds__Sample_SetParameters_Response___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::Sample_SetParameters_Response_ *from, struct _rcl_interfaces_srv_dds__Sample_SetParameters_Response_ *to);
extern  void __rcl_interfaces_srv_dds__Sample_SetParameters_Response___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__Sample_SetParameters_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _rcl_interfaces_srv_dds__SetParameters_Response_ response_;
};

#undef OS_API
#endif
