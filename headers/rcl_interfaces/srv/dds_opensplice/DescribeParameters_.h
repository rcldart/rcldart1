#ifndef _H_B6F5BA2CEE39C20AB19D0057990384C4_DescribeParameters__H_
#define _H_B6F5BA2CEE39C20AB19D0057990384C4_DescribeParameters__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "rcl_interfaces/msg/dds_opensplice/ParameterDescriptor_.h"


namespace rcl_interfaces
{
    namespace srv
    {
        namespace dds_
        {
            struct  DescribeParameters_Request_
            {
                struct _names__seq_uniq_{};
                typedef DDS_DCPSUStrSeqT< struct _names__seq_uniq_ > _names__seq;
                typedef DDS_DCPSUStrSeq_var< _names__seq > _names__seq_var;
                typedef DDS_DCPSUStrSeq_out< _names__seq > _names__seq_out;
                _names__seq names_;
            };

            typedef DDS_DCPSStruct_var<DescribeParameters_Request_> DescribeParameters_Request__var;
            typedef DDS_DCPSStruct_out < DescribeParameters_Request_> DescribeParameters_Request__out;

            struct  DescribeParameters_Response_
            {
                struct _descriptors__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::rcl_interfaces::msg::dds_::ParameterDescriptor_, struct _descriptors__seq_uniq_ > _descriptors__seq;
                typedef DDS_DCPSSequence_var< _descriptors__seq > _descriptors__seq_var;
                typedef DDS_DCPSSequence_out< _descriptors__seq > _descriptors__seq_out;
                _descriptors__seq descriptors_;
            };

            typedef DDS_DCPSStruct_var<DescribeParameters_Response_> DescribeParameters_Response__var;
            typedef DDS_DCPSStruct_out < DescribeParameters_Response_> DescribeParameters_Response__out;

            struct  Sample_DescribeParameters_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::rcl_interfaces::srv::dds_::DescribeParameters_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_DescribeParameters_Request_> Sample_DescribeParameters_Request__var;
            typedef DDS_DCPSStruct_out < Sample_DescribeParameters_Request_> Sample_DescribeParameters_Request__out;

            struct  Sample_DescribeParameters_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::rcl_interfaces::srv::dds_::DescribeParameters_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_DescribeParameters_Response_> Sample_DescribeParameters_Response__var;
            typedef DDS_DCPSStruct_out < Sample_DescribeParameters_Response_> Sample_DescribeParameters_Response__out;

        }

    }

}

#endif /* _H_B6F5BA2CEE39C20AB19D0057990384C4_DescribeParameters__H_ */
