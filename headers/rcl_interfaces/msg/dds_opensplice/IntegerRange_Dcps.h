#ifndef _H_F3BE3C1CB5C290001F76542C4D9560BD_IntegerRange_DCPS_H_
#define _H_F3BE3C1CB5C290001F76542C4D9560BD_IntegerRange_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "IntegerRange_.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            class IntegerRange_TypeSupportInterface;

            typedef IntegerRange_TypeSupportInterface * IntegerRange_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < IntegerRange_TypeSupportInterface> IntegerRange_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < IntegerRange_TypeSupportInterface> IntegerRange_TypeSupportInterface_out;


            class IntegerRange_DataWriter;

            typedef IntegerRange_DataWriter * IntegerRange_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < IntegerRange_DataWriter> IntegerRange_DataWriter_var;
            typedef DDS_DCPSInterface_out < IntegerRange_DataWriter> IntegerRange_DataWriter_out;


            class IntegerRange_DataReader;

            typedef IntegerRange_DataReader * IntegerRange_DataReader_ptr;
            typedef DDS_DCPSInterface_var < IntegerRange_DataReader> IntegerRange_DataReader_var;
            typedef DDS_DCPSInterface_out < IntegerRange_DataReader> IntegerRange_DataReader_out;


            class IntegerRange_DataReaderView;

            typedef IntegerRange_DataReaderView * IntegerRange_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < IntegerRange_DataReaderView> IntegerRange_DataReaderView_var;
            typedef DDS_DCPSInterface_out < IntegerRange_DataReaderView> IntegerRange_DataReaderView_out;

            struct IntegerRange_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < IntegerRange_, struct IntegerRange_Seq_uniq_> IntegerRange_Seq;
            typedef DDS_DCPSSequence_var < IntegerRange_Seq> IntegerRange_Seq_var;
            typedef DDS_DCPSSequence_out < IntegerRange_Seq> IntegerRange_Seq_out;

            class  IntegerRange_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef IntegerRange_TypeSupportInterface_ptr _ptr_type;
                typedef IntegerRange_TypeSupportInterface_var _var_type;

                static IntegerRange_TypeSupportInterface_ptr _duplicate (IntegerRange_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static IntegerRange_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static IntegerRange_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static IntegerRange_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                IntegerRange_TypeSupportInterface_ptr _this () { return this; }


            protected:
                IntegerRange_TypeSupportInterface () {};
                ~IntegerRange_TypeSupportInterface () {};
            private:
                IntegerRange_TypeSupportInterface (const IntegerRange_TypeSupportInterface &);
                IntegerRange_TypeSupportInterface & operator = (const IntegerRange_TypeSupportInterface &);
            };

            class  IntegerRange_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef IntegerRange_DataWriter_ptr _ptr_type;
                typedef IntegerRange_DataWriter_var _var_type;

                static IntegerRange_DataWriter_ptr _duplicate (IntegerRange_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static IntegerRange_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static IntegerRange_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static IntegerRange_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                IntegerRange_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const IntegerRange_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const IntegerRange_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const IntegerRange_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const IntegerRange_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const IntegerRange_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const IntegerRange_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const IntegerRange_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const IntegerRange_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const IntegerRange_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const IntegerRange_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (IntegerRange_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const IntegerRange_& instance_data) = 0;

            protected:
                IntegerRange_DataWriter () {};
                ~IntegerRange_DataWriter () {};
            private:
                IntegerRange_DataWriter (const IntegerRange_DataWriter &);
                IntegerRange_DataWriter & operator = (const IntegerRange_DataWriter &);
            };

            class  IntegerRange_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef IntegerRange_DataReader_ptr _ptr_type;
                typedef IntegerRange_DataReader_var _var_type;

                static IntegerRange_DataReader_ptr _duplicate (IntegerRange_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static IntegerRange_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static IntegerRange_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static IntegerRange_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                IntegerRange_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (IntegerRange_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (IntegerRange_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (IntegerRange_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const IntegerRange_& instance) = 0;

            protected:
                IntegerRange_DataReader () {};
                ~IntegerRange_DataReader () {};
            private:
                IntegerRange_DataReader (const IntegerRange_DataReader &);
                IntegerRange_DataReader & operator = (const IntegerRange_DataReader &);
            };

            class  IntegerRange_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef IntegerRange_DataReaderView_ptr _ptr_type;
                typedef IntegerRange_DataReaderView_var _var_type;

                static IntegerRange_DataReaderView_ptr _duplicate (IntegerRange_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static IntegerRange_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static IntegerRange_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static IntegerRange_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                IntegerRange_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (IntegerRange_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (IntegerRange_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (IntegerRange_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (IntegerRange_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const IntegerRange_& instance) = 0;

            protected:
                IntegerRange_DataReaderView () {};
                ~IntegerRange_DataReaderView () {};
            private:
                IntegerRange_DataReaderView (const IntegerRange_DataReaderView &);
                IntegerRange_DataReaderView & operator = (const IntegerRange_DataReaderView &);
            };
        }

    }

}

#endif
