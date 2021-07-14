#ifndef _H_F3BE3C1CB5C290001F76542C4D9560BD_IntegerRange__H_
#define _H_F3BE3C1CB5C290001F76542C4D9560BD_IntegerRange__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            struct  IntegerRange_
            {
                ::DDS::LongLong from_value_;
                ::DDS::LongLong to_value_;
                ::DDS::ULongLong step_;
            };

            typedef DDS_DCPSStruct_var<IntegerRange_> IntegerRange__var;
            typedef IntegerRange_& IntegerRange__out;

        }

    }

}

#endif /* _H_F3BE3C1CB5C290001F76542C4D9560BD_IntegerRange__H_ */
