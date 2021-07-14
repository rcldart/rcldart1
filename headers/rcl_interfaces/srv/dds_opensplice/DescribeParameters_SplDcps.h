#ifndef H_B6F5BA2CEE39C20AB19D0057990384C4_DescribeParameters_SPLTYPES_H
#define H_B6F5BA2CEE39C20AB19D0057990384C4_DescribeParameters_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_DescribeParameters_.h"
#include "rcl_interfaces/msg/dds_opensplice/ParameterDescriptor_SplDcps.h"



extern c_metaObject __DescribeParameters__rcl_interfaces__load (c_base base);

extern c_metaObject __DescribeParameters__rcl_interfaces_srv__load (c_base base);

extern c_metaObject __DescribeParameters__rcl_interfaces_srv_dds___load (c_base base);

extern const char *rcl_interfaces_srv_dds__DescribeParameters_Request__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__DescribeParameters_Request__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__DescribeParameters_Request__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__DescribeParameters_Request___load (c_base base);
struct _rcl_interfaces_srv_dds__DescribeParameters_Request_ ;
extern  v_copyin_result __rcl_interfaces_srv_dds__DescribeParameters_Request___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::DescribeParameters_Request_ *from, struct _rcl_interfaces_srv_dds__DescribeParameters_Request_ *to);
extern  void __rcl_interfaces_srv_dds__DescribeParameters_Request___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__DescribeParameters_Request_ {
    c_sequence names_;
};

extern const char *rcl_interfaces_srv_dds__DescribeParameters_Response__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__DescribeParameters_Response__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__DescribeParameters_Response__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__DescribeParameters_Response___load (c_base base);
struct _rcl_interfaces_srv_dds__DescribeParameters_Response_ ;
extern  v_copyin_result __rcl_interfaces_srv_dds__DescribeParameters_Response___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::DescribeParameters_Response_ *from, struct _rcl_interfaces_srv_dds__DescribeParameters_Response_ *to);
extern  void __rcl_interfaces_srv_dds__DescribeParameters_Response___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__DescribeParameters_Response_ {
    c_sequence descriptors_;
};

extern const char *rcl_interfaces_srv_dds__Sample_DescribeParameters_Request__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__Sample_DescribeParameters_Request__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__Sample_DescribeParameters_Request__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__Sample_DescribeParameters_Request___load (c_base base);
struct _rcl_interfaces_srv_dds__Sample_DescribeParameters_Request_ ;
extern  v_copyin_result __rcl_interfaces_srv_dds__Sample_DescribeParameters_Request___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::Sample_DescribeParameters_Request_ *from, struct _rcl_interfaces_srv_dds__Sample_DescribeParameters_Request_ *to);
extern  void __rcl_interfaces_srv_dds__Sample_DescribeParameters_Request___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__Sample_DescribeParameters_Request_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _rcl_interfaces_srv_dds__DescribeParameters_Request_ request_;
};

extern const char *rcl_interfaces_srv_dds__Sample_DescribeParameters_Response__metaDescriptor[];
extern const int rcl_interfaces_srv_dds__Sample_DescribeParameters_Response__metaDescriptorArrLength;
extern const int rcl_interfaces_srv_dds__Sample_DescribeParameters_Response__metaDescriptorLength;
extern c_metaObject __rcl_interfaces_srv_dds__Sample_DescribeParameters_Response___load (c_base base);
struct _rcl_interfaces_srv_dds__Sample_DescribeParameters_Response_ ;
extern  v_copyin_result __rcl_interfaces_srv_dds__Sample_DescribeParameters_Response___copyIn(c_base base, const struct rcl_interfaces::srv::dds_::Sample_DescribeParameters_Response_ *from, struct _rcl_interfaces_srv_dds__Sample_DescribeParameters_Response_ *to);
extern  void __rcl_interfaces_srv_dds__Sample_DescribeParameters_Response___copyOut(const void *_from, void *_to);
struct _rcl_interfaces_srv_dds__Sample_DescribeParameters_Response_ {
    c_ulonglong client_guid_0_;
    c_ulonglong client_guid_1_;
    c_longlong sequence_number_;
    struct _rcl_interfaces_srv_dds__DescribeParameters_Response_ response_;
};

#undef OS_API
#endif
