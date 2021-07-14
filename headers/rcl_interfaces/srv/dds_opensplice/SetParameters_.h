#ifndef _H_BC7ADA5552CCDD7509F6744A7A91C98F_SetParameters__H_
#define _H_BC7ADA5552CCDD7509F6744A7A91C98F_SetParameters__H_

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
            struct  SetParameters_Request_
            {
                struct _parameters__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::rcl_interfaces::msg::dds_::Parameter_, struct _parameters__seq_uniq_ > _parameters__seq;
                typedef DDS_DCPSSequence_var< _parameters__seq > _parameters__seq_var;
                typedef DDS_DCPSSequence_out< _parameters__seq > _parameters__seq_out;
                _parameters__seq parameters_;
            };

            typedef DDS_DCPSStruct_var<SetParameters_Request_> SetParameters_Request__var;
            typedef DDS_DCPSStruct_out < SetParameters_Request_> SetParameters_Request__out;

            struct  SetParameters_Response_
            {
                struct _results__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::rcl_interfaces::msg::dds_::SetParametersResult_, struct _results__seq_uniq_ > _results__seq;
                typedef DDS_DCPSSequence_var< _results__seq > _results__seq_var;
                typedef DDS_DCPSSequence_out< _results__seq > _results__seq_out;
                _results__seq results_;
            };

            typedef DDS_DCPSStruct_var<SetParameters_Response_> SetParameters_Response__var;
            typedef DDS_DCPSStruct_out < SetParameters_Response_> SetParameters_Response__out;

            struct  Sample_SetParameters_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::rcl_interfaces::srv::dds_::SetParameters_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_SetParameters_Request_> Sample_SetParameters_Request__var;
            typedef DDS_DCPSStruct_out < Sample_SetParameters_Request_> Sample_SetParameters_Request__out;

            struct  Sample_SetParameters_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::rcl_interfaces::srv::dds_::SetParameters_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_SetParameters_Response_> Sample_SetParameters_Response__var;
            typedef DDS_DCPSStruct_out < Sample_SetParameters_Response_> Sample_SetParameters_Response__out;

        }

    }

}

#endif /* _H_BC7ADA5552CCDD7509F6744A7A91C98F_SetParameters__H_ */
