#ifndef _H_4371E2BA6CE8EC324EB1DBBE0228ABB2_ParameterEvent__H_
#define _H_4371E2BA6CE8EC324EB1DBBE0228ABB2_ParameterEvent__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_.h"
#include "rcl_interfaces/msg/dds_opensplice/Parameter_.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            struct  ParameterEvent_
            {
                struct _new_parameters__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::rcl_interfaces::msg::dds_::Parameter_, struct _new_parameters__seq_uniq_ > _new_parameters__seq;
                typedef DDS_DCPSSequence_var< _new_parameters__seq > _new_parameters__seq_var;
                typedef DDS_DCPSSequence_out< _new_parameters__seq > _new_parameters__seq_out;
                struct _changed_parameters__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::rcl_interfaces::msg::dds_::Parameter_, struct _changed_parameters__seq_uniq_ > _changed_parameters__seq;
                typedef DDS_DCPSSequence_var< _changed_parameters__seq > _changed_parameters__seq_var;
                typedef DDS_DCPSSequence_out< _changed_parameters__seq > _changed_parameters__seq_out;
                struct _deleted_parameters__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::rcl_interfaces::msg::dds_::Parameter_, struct _deleted_parameters__seq_uniq_ > _deleted_parameters__seq;
                typedef DDS_DCPSSequence_var< _deleted_parameters__seq > _deleted_parameters__seq_var;
                typedef DDS_DCPSSequence_out< _deleted_parameters__seq > _deleted_parameters__seq_out;
                ::builtin_interfaces::msg::dds_::Time_ stamp_;
                ::DDS::String_mgr node_;
                _new_parameters__seq new_parameters_;
                _changed_parameters__seq changed_parameters_;
                _deleted_parameters__seq deleted_parameters_;
            };

            typedef DDS_DCPSStruct_var<ParameterEvent_> ParameterEvent__var;
            typedef DDS_DCPSStruct_out < ParameterEvent_> ParameterEvent__out;

        }

    }

}

#endif /* _H_4371E2BA6CE8EC324EB1DBBE0228ABB2_ParameterEvent__H_ */
