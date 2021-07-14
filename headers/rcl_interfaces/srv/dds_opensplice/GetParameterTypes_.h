#ifndef _H_17CD01243F280EEE30DC42A34E957340_GetParameterTypes__H_
#define _H_17CD01243F280EEE30DC42A34E957340_GetParameterTypes__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace rcl_interfaces
{
    namespace srv
    {
        namespace dds_
        {
            struct  GetParameterTypes_Request_
            {
                struct _names__seq_uniq_{};
                typedef DDS_DCPSUStrSeqT< struct _names__seq_uniq_ > _names__seq;
                typedef DDS_DCPSUStrSeq_var< _names__seq > _names__seq_var;
                typedef DDS_DCPSUStrSeq_out< _names__seq > _names__seq_out;
                _names__seq names_;
            };

            typedef DDS_DCPSStruct_var<GetParameterTypes_Request_> GetParameterTypes_Request__var;
            typedef DDS_DCPSStruct_out < GetParameterTypes_Request_> GetParameterTypes_Request__out;

            struct  GetParameterTypes_Response_
            {
                struct _types__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct _types__seq_uniq_ > _types__seq;
                typedef DDS_DCPSSequence_var< _types__seq > _types__seq_var;
                typedef DDS_DCPSSequence_out< _types__seq > _types__seq_out;
                _types__seq types_;
            };

            typedef DDS_DCPSStruct_var<GetParameterTypes_Response_> GetParameterTypes_Response__var;
            typedef DDS_DCPSStruct_out < GetParameterTypes_Response_> GetParameterTypes_Response__out;

            struct  Sample_GetParameterTypes_Request_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::rcl_interfaces::srv::dds_::GetParameterTypes_Request_ request_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetParameterTypes_Request_> Sample_GetParameterTypes_Request__var;
            typedef DDS_DCPSStruct_out < Sample_GetParameterTypes_Request_> Sample_GetParameterTypes_Request__out;

            struct  Sample_GetParameterTypes_Response_
            {
                ::DDS::ULongLong client_guid_0_;
                ::DDS::ULongLong client_guid_1_;
                ::DDS::LongLong sequence_number_;
                ::rcl_interfaces::srv::dds_::GetParameterTypes_Response_ response_;
            };

            typedef DDS_DCPSStruct_var<Sample_GetParameterTypes_Response_> Sample_GetParameterTypes_Response__var;
            typedef DDS_DCPSStruct_out < Sample_GetParameterTypes_Response_> Sample_GetParameterTypes_Response__out;

        }

    }

}

#endif /* _H_17CD01243F280EEE30DC42A34E957340_GetParameterTypes__H_ */
