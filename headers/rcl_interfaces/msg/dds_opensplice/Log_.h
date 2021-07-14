#ifndef _H_9C934AF65C478D973FEE8EC7BE61E794_Log__H_
#define _H_9C934AF65C478D973FEE8EC7BE61E794_Log__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            namespace Log_Constants
            {
                const ::DDS::Octet DEBUG_ = 10;

                const ::DDS::Octet INFO_ = 20;

                const ::DDS::Octet WARN_ = 30;

                const ::DDS::Octet ERROR_ = 40;

                const ::DDS::Octet FATAL_ = 50;

            }

            struct  Log_
            {
                ::builtin_interfaces::msg::dds_::Time_ stamp_;
                ::DDS::Octet level_;
                ::DDS::String_mgr name_;
                ::DDS::String_mgr msg_;
                ::DDS::String_mgr file_;
                ::DDS::String_mgr function_;
                ::DDS::ULong line_;
            };

            typedef DDS_DCPSStruct_var<Log_> Log__var;
            typedef DDS_DCPSStruct_out < Log_> Log__out;

        }

    }

}

#endif /* _H_9C934AF65C478D973FEE8EC7BE61E794_Log__H_ */
