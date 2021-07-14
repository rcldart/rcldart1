#ifndef _H_37E8461378925AFC5ACFD69BA147967C_GetParameters__H_
#define _H_37E8461378925AFC5ACFD69BA147967C_GetParameters__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "rcl_interfaces/msg/dds_opensplice/ParameterValue_.h"


namespace rcl_interfaces
{
    namespace srv
    {
        namespace dds_
        {
            struct  GetParameters_Request_
            {
                struct _names__seq_uniq_{};
                typedef DDS_DCPSUStrSeqT< struct _names__seq_uniq_ > _names__seq;
                typedef DDS_DCPSUStrSeq_var< _names__seq > _names__seq_var;
                typedef DDS_DCPSUStrSeq_out< _names__seq > _names__seq_out;
                _names__seq names_;
            };

            typedef DDS_DCPSStruct_var<GetParameters_Request_> GetParameters_Request__var;
            typedef DDS_DCPSStruct_out < GetParameters_Request_> GetParameters_Request__out;

            struct  GetParameters_Response_
            {
                struct _values__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::rcl_interfaces::msg::dds_::ParameterValue_, struct _values__seq_uniq_ > _values__seq;
                typedef DDS_DCPSSequence_var< _values__seq > _values__seq_var;
                typedef DDS_DCPSSequence_out< _values__seq > _values__seq_out;
                _values__seq values_;
            };

            typedef DDS_DCPSStruct_var<GetParameters_Response_> GetParameters_Response__var;
            typedef DDS_DCPSStruct_out < GetParameters_Response_> GetParameters_Response__out;

            struct  Sample_GetParameters_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::rcl_interfaces::srv::dds_::GetParameters_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetParameters_Request_> Sample_GetParameters_Request__var;
            typedef DDS_DCPSStruct_out < Sample_GetParameters_Request_> Sample_GetParameters_Request__out;

            struct  Sample_GetParameters_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::rcl_interfaces::srv::dds_::GetParameters_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetParameters_Response_> Sample_GetParameters_Response__var;
            typedef DDS_DCPSStruct_out < Sample_GetParameters_Response_> Sample_GetParameters_Response__out;

        }

    }

}

#endif /* _H_37E8461378925AFC5ACFD69BA147967C_GetParameters__H_ */
