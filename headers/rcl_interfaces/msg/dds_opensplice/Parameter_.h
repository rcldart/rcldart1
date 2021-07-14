#ifndef _H_6686C8415AD5DD24C6915C15558EE902_Parameter__H_
#define _H_6686C8415AD5DD24C6915C15558EE902_Parameter__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "rcl_interfaces/msg/dds_opensplice/ParameterValue_.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            struct  Parameter_
            {
                ::DDS::String_mgr name_;
                ::rcl_interfaces::msg::dds_::ParameterValue_ value_;
            };

            typedef DDS_DCPSStruct_var<Parameter_> Parameter__var;
            typedef DDS_DCPSStruct_out < Parameter_> Parameter__out;

        }

    }

}

#endif /* _H_6686C8415AD5DD24C6915C15558EE902_Parameter__H_ */
