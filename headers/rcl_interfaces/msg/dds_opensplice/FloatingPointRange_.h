#ifndef _H_332A6FC2D75E47A02BAFA71BB0003174_FloatingPointRange__H_
#define _H_332A6FC2D75E47A02BAFA71BB0003174_FloatingPointRange__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            struct  FloatingPointRange_
            {
                ::DDS::Double from_value_;
                ::DDS::Double to_value_;
                ::DDS::Double step_;
            };

            typedef DDS_DCPSStruct_var<FloatingPointRange_> FloatingPointRange__var;
            typedef FloatingPointRange_& FloatingPointRange__out;

        }

    }

}

#endif /* _H_332A6FC2D75E47A02BAFA71BB0003174_FloatingPointRange__H_ */
