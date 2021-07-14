#ifndef _H_F15EC4838A259565FE70A124EE9FD8A9_ParameterDescriptor__H_
#define _H_F15EC4838A259565FE70A124EE9FD8A9_ParameterDescriptor__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "rcl_interfaces/msg/dds_opensplice/FloatingPointRange_.h"
#include "rcl_interfaces/msg/dds_opensplice/IntegerRange_.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            struct  ParameterDescriptor_
            {
                struct _floating_point_range__seq_uniq_{};
                typedef DDS_DCPSBFLSeq< ::rcl_interfaces::msg::dds_::FloatingPointRange_, struct _floating_point_range__seq_uniq_, 1 > _floating_point_range__seq;
                typedef DDS_DCPSSequence_var< _floating_point_range__seq > _floating_point_range__seq_var;
                typedef DDS_DCPSSequence_out< _floating_point_range__seq > _floating_point_range__seq_out;
                struct _integer_range__seq_uniq_{};
                typedef DDS_DCPSBFLSeq< ::rcl_interfaces::msg::dds_::IntegerRange_, struct _integer_range__seq_uniq_, 1 > _integer_range__seq;
                typedef DDS_DCPSSequence_var< _integer_range__seq > _integer_range__seq_var;
                typedef DDS_DCPSSequence_out< _integer_range__seq > _integer_range__seq_out;
                ::DDS::String_mgr name_;
                ::DDS::Octet type_;
                ::DDS::String_mgr description_;
                ::DDS::String_mgr additional_constraints_;
                ::DDS::Boolean read_only_;
                _floating_point_range__seq floating_point_range_;
                _integer_range__seq integer_range_;
            };

            typedef DDS_DCPSStruct_var<ParameterDescriptor_> ParameterDescriptor__var;
            typedef DDS_DCPSStruct_out < ParameterDescriptor_> ParameterDescriptor__out;

        }

    }

}

#endif /* _H_F15EC4838A259565FE70A124EE9FD8A9_ParameterDescriptor__H_ */
