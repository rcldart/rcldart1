#ifndef _H_77AE9705C225590CDB92A827880FF753_IntraProcessMessage__H_
#define _H_77AE9705C225590CDB92A827880FF753_IntraProcessMessage__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            struct  IntraProcessMessage_
            {
                ::DDS::ULongLong publisher_id_;
                ::DDS::ULongLong message_sequence_;
            };

            typedef DDS_DCPSStruct_var<IntraProcessMessage_> IntraProcessMessage__var;
            typedef IntraProcessMessage_& IntraProcessMessage__out;

        }

    }

}

#endif /* _H_77AE9705C225590CDB92A827880FF753_IntraProcessMessage__H_ */
