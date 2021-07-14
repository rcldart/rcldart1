#ifndef _H_90598579E4E051313B80C4DB40024093_ParameterValue__H_
#define _H_90598579E4E051313B80C4DB40024093_ParameterValue__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            struct  ParameterValue_
            {
                struct _byte_array_value__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct _byte_array_value__seq_uniq_ > _byte_array_value__seq;
                typedef DDS_DCPSSequence_var< _byte_array_value__seq > _byte_array_value__seq_var;
                typedef DDS_DCPSSequence_out< _byte_array_value__seq > _byte_array_value__seq_out;
                struct _bool_array_value__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Boolean, struct _bool_array_value__seq_uniq_ > _bool_array_value__seq;
                typedef DDS_DCPSSequence_var< _bool_array_value__seq > _bool_array_value__seq_var;
                typedef DDS_DCPSSequence_out< _bool_array_value__seq > _bool_array_value__seq_out;
                struct _integer_array_value__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::LongLong, struct _integer_array_value__seq_uniq_ > _integer_array_value__seq;
                typedef DDS_DCPSSequence_var< _integer_array_value__seq > _integer_array_value__seq_var;
                typedef DDS_DCPSSequence_out< _integer_array_value__seq > _integer_array_value__seq_out;
                struct _double_array_value__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Double, struct _double_array_value__seq_uniq_ > _double_array_value__seq;
                typedef DDS_DCPSSequence_var< _double_array_value__seq > _double_array_value__seq_var;
                typedef DDS_DCPSSequence_out< _double_array_value__seq > _double_array_value__seq_out;
                struct _string_array_value__seq_uniq_{};
                typedef DDS_DCPSUStrSeqT< struct _string_array_value__seq_uniq_ > _string_array_value__seq;
                typedef DDS_DCPSUStrSeq_var< _string_array_value__seq > _string_array_value__seq_var;
                typedef DDS_DCPSUStrSeq_out< _string_array_value__seq > _string_array_value__seq_out;
                ::DDS::Octet type_;
                ::DDS::Boolean bool_value_;
                ::DDS::LongLong integer_value_;
                ::DDS::Double double_value_;
                ::DDS::String_mgr string_value_;
                _byte_array_value__seq byte_array_value_;
                _bool_array_value__seq bool_array_value_;
                _integer_array_value__seq integer_array_value_;
                _double_array_value__seq double_array_value_;
                _string_array_value__seq string_array_value_;
            };

            typedef DDS_DCPSStruct_var<ParameterValue_> ParameterValue__var;
            typedef DDS_DCPSStruct_out < ParameterValue_> ParameterValue__out;

        }

    }

}

#endif /* _H_90598579E4E051313B80C4DB40024093_ParameterValue__H_ */
