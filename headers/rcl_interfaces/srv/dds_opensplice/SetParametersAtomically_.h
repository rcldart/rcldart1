#ifndef _H_24E8D7678D027ED15997D762791B90DD_SetParametersAtomically__H_
#define _H_24E8D7678D027ED15997D762791B90DD_SetParametersAtomically__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "rcl_interfaces/msg/dds_opensplice/Parameter_.h"
#include "rcl_interfaces/msg/dds_opensplice/SetParametersResult_.h"


namespace rcl_interfaces
{
    namespace srv
    {
        namespace dds_
        {
            struct  SetParametersAtomically_Request_
            {
                struct _parameters__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::rcl_interfaces::msg::dds_::Parameter_, struct _parameters__seq_uniq_ > _parameters__seq;
                typedef DDS_DCPSSequence_var< _parameters__seq > _parameters__seq_var;
                typedef DDS_DCPSSequence_out< _parameters__seq > _parameters__seq_out;
                _parameters__seq parameters_;
            };

            typedef DDS_DCPSStruct_var<SetParametersAtomically_Request_> SetParametersAtomically_Request__var;
            typedef DDS_DCPSStruct_out < SetParametersAtomically_Request_> SetParametersAtomically_Request__out;

            struct  SetParametersAtomically_Response_
            {
                ::rcl_interfaces::msg::dds_::SetParametersResult_ result_;
            };

            typedef DDS_DCPSStruct_var<SetParametersAtomically_Response_> SetParametersAtomically_Response__var;
            typedef DDS_DCPSStruct_out < SetParametersAtomically_Response_> SetParametersAtomically_Response__out;

            struct  Sample_SetParametersAtomically_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::rcl_interfaces::srv::dds_::SetParametersAtomically_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_SetParametersAtomically_Request_> Sample_SetParametersAtomically_Request__var;
            typedef DDS_DCPSStruct_out < Sample_SetParametersAtomically_Request_> Sample_SetParametersAtomically_Request__out;

            struct  Sample_SetParametersAtomically_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::rcl_interfaces::srv::dds_::SetParametersAtomically_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_SetParametersAtomically_Response_> Sample_SetParametersAtomically_Response__var;
            typedef DDS_DCPSStruct_out < Sample_SetParametersAtomically_Response_> Sample_SetParametersAtomically_Response__out;

        }

    }

}

#endif /* _H_24E8D7678D027ED15997D762791B90DD_SetParametersAtomically__H_ */
