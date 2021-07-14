#ifndef _H_74C9E46326C2AA04465202C0F3184831_ParameterType__H_
#define _H_74C9E46326C2AA04465202C0F3184831_ParameterType__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            namespace ParameterType_Constants
            {
                const ::DDS::Octet PARAMETER_NOT_SET_ = 0;

                const ::DDS::Octet PARAMETER_BOOL_ = 1;

                const ::DDS::Octet PARAMETER_INTEGER_ = 2;

                const ::DDS::Octet PARAMETER_DOUBLE_ = 3;

                const ::DDS::Octet PARAMETER_STRING_ = 4;

                const ::DDS::Octet PARAMETER_BYTE_ARRAY_ = 5;

                const ::DDS::Octet PARAMETER_BOOL_ARRAY_ = 6;

                const ::DDS::Octet PARAMETER_INTEGER_ARRAY_ = 7;

                const ::DDS::Octet PARAMETER_DOUBLE_ARRAY_ = 8;

                const ::DDS::Octet PARAMETER_STRING_ARRAY_ = 9;

            }

            struct  ParameterType_
            {
                ::DDS::Octet structure_needs_at_least_one_member_;
            };

            typedef DDS_DCPSStruct_var<ParameterType_> ParameterType__var;
            typedef ParameterType_& ParameterType__out;

        }

    }

}

#endif /* _H_74C9E46326C2AA04465202C0F3184831_ParameterType__H_ */
