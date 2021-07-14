#ifndef _H_9C934AF65C478D973FEE8EC7BE61E794_Log_DCPS_H_
#define _H_9C934AF65C478D973FEE8EC7BE61E794_Log_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Log_.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            class Log_TypeSupportInterface;

            typedef Log_TypeSupportInterface * Log_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Log_TypeSupportInterface> Log_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Log_TypeSupportInterface> Log_TypeSupportInterface_out;


            class Log_DataWriter;

            typedef Log_DataWriter * Log_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Log_DataWriter> Log_DataWriter_var;
            typedef DDS_DCPSInterface_out < Log_DataWriter> Log_DataWriter_out;


            class Log_DataReader;

            typedef Log_DataReader * Log_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Log_DataReader> Log_DataReader_var;
            typedef DDS_DCPSInterface_out < Log_DataReader> Log_DataReader_out;


            class Log_DataReaderView;

            typedef Log_DataReaderView * Log_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Log_DataReaderView> Log_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Log_DataReaderView> Log_DataReaderView_out;

            struct Log_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Log_, struct Log_Seq_uniq_> Log_Seq;
            typedef DDS_DCPSSequence_var < Log_Seq> Log_Seq_var;
            typedef DDS_DCPSSequence_out < Log_Seq> Log_Seq_out;

            class  Log_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Log_TypeSupportInterface_ptr _ptr_type;
                typedef Log_TypeSupportInterface_var _var_type;

                static Log_TypeSupportInterface_ptr _duplicate (Log_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Log_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Log_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Log_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Log_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Log_TypeSupportInterface () {};
                ~Log_TypeSupportInterface () {};
            private:
                Log_TypeSupportInterface (const Log_TypeSupportInterface &);
                Log_TypeSupportInterface & operator = (const Log_TypeSupportInterface &);
            };

            class  Log_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Log_DataWriter_ptr _ptr_type;
                typedef Log_DataWriter_var _var_type;

                static Log_DataWriter_ptr _duplicate (Log_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Log_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Log_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Log_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Log_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Log_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Log_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Log_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Log_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Log_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Log_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Log_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Log_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Log_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Log_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Log_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Log_& instance_data) = 0;

            protected:
                Log_DataWriter () {};
                ~Log_DataWriter () {};
            private:
                Log_DataWriter (const Log_DataWriter &);
                Log_DataWriter & operator = (const Log_DataWriter &);
            };

            class  Log_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Log_DataReader_ptr _ptr_type;
                typedef Log_DataReader_var _var_type;

                static Log_DataReader_ptr _duplicate (Log_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Log_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Log_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Log_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Log_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Log_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Log_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Log_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Log_& instance) = 0;

            protected:
                Log_DataReader () {};
                ~Log_DataReader () {};
            private:
                Log_DataReader (const Log_DataReader &);
                Log_DataReader & operator = (const Log_DataReader &);
            };

            class  Log_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Log_DataReaderView_ptr _ptr_type;
                typedef Log_DataReaderView_var _var_type;

                static Log_DataReaderView_ptr _duplicate (Log_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Log_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Log_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Log_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Log_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Log_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Log_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Log_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Log_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Log_& instance) = 0;

            protected:
                Log_DataReaderView () {};
                ~Log_DataReaderView () {};
            private:
                Log_DataReaderView (const Log_DataReaderView &);
                Log_DataReaderView & operator = (const Log_DataReaderView &);
            };
        }

    }

}

#endif
