#ifndef _H_D7C06703178A5FD853D3BC72D70A11D0_SetParametersResult__H_
#define _H_D7C06703178A5FD853D3BC72D70A11D0_SetParametersResult__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            struct  SetParametersResult_
            {
                ::DDS::Boolean successful_;
                ::DDS::String_mgr reason_;
            };

            typedef DDS_DCPSStruct_var<SetParametersResult_> SetParametersResult__var;
            typedef DDS_DCPSStruct_out < SetParametersResult_> SetParametersResult__out;

        }

    }

}

#endif /* _H_D7C06703178A5FD853D3BC72D70A11D0_SetParametersResult__H_ */
