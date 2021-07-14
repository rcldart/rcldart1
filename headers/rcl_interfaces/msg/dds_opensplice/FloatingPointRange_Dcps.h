#ifndef _H_332A6FC2D75E47A02BAFA71BB0003174_FloatingPointRange_DCPS_H_
#define _H_332A6FC2D75E47A02BAFA71BB0003174_FloatingPointRange_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "FloatingPointRange_.h"


namespace rcl_interfaces
{
    namespace msg
    {
        namespace dds_
        {
            class FloatingPointRange_TypeSupportInterface;

            typedef FloatingPointRange_TypeSupportInterface * FloatingPointRange_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < FloatingPointRange_TypeSupportInterface> FloatingPointRange_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < FloatingPointRange_TypeSupportInterface> FloatingPointRange_TypeSupportInterface_out;


            class FloatingPointRange_DataWriter;

            typedef FloatingPointRange_DataWriter * FloatingPointRange_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < FloatingPointRange_DataWriter> FloatingPointRange_DataWriter_var;
            typedef DDS_DCPSInterface_out < FloatingPointRange_DataWriter> FloatingPointRange_DataWriter_out;


            class FloatingPointRange_DataReader;

            typedef FloatingPointRange_DataReader * FloatingPointRange_DataReader_ptr;
            typedef DDS_DCPSInterface_var < FloatingPointRange_DataReader> FloatingPointRange_DataReader_var;
            typedef DDS_DCPSInterface_out < FloatingPointRange_DataReader> FloatingPointRange_DataReader_out;


            class FloatingPointRange_DataReaderView;

            typedef FloatingPointRange_DataReaderView * FloatingPointRange_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < FloatingPointRange_DataReaderView> FloatingPointRange_DataReaderView_var;
            typedef DDS_DCPSInterface_out < FloatingPointRange_DataReaderView> FloatingPointRange_DataReaderView_out;

            struct FloatingPointRange_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < FloatingPointRange_, struct FloatingPointRange_Seq_uniq_> FloatingPointRange_Seq;
            typedef DDS_DCPSSequence_var < FloatingPointRange_Seq> FloatingPointRange_Seq_var;
            typedef DDS_DCPSSequence_out < FloatingPointRange_Seq> FloatingPointRange_Seq_out;

            class  FloatingPointRange_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef FloatingPointRange_TypeSupportInterface_ptr _ptr_type;
                typedef FloatingPointRange_TypeSupportInterface_var _var_type;

                static FloatingPointRange_TypeSupportInterface_ptr _duplicate (FloatingPointRange_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static FloatingPointRange_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static FloatingPointRange_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static FloatingPointRange_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                FloatingPointRange_TypeSupportInterface_ptr _this () { return this; }


            protected:
                FloatingPointRange_TypeSupportInterface () {};
                ~FloatingPointRange_TypeSupportInterface () {};
            private:
                FloatingPointRange_TypeSupportInterface (const FloatingPointRange_TypeSupportInterface &);
                FloatingPointRange_TypeSupportInterface & operator = (const FloatingPointRange_TypeSupportInterface &);
            };

            class  FloatingPointRange_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef FloatingPointRange_DataWriter_ptr _ptr_type;
                typedef FloatingPointRange_DataWriter_var _var_type;

                static FloatingPointRange_DataWriter_ptr _duplicate (FloatingPointRange_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static FloatingPointRange_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static FloatingPointRange_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static FloatingPointRange_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                FloatingPointRange_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const FloatingPointRange_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const FloatingPointRange_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const FloatingPointRange_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const FloatingPointRange_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const FloatingPointRange_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const FloatingPointRange_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const FloatingPointRange_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const FloatingPointRange_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const FloatingPointRange_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const FloatingPointRange_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (FloatingPointRange_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const FloatingPointRange_& instance_data) = 0;

            protected:
                FloatingPointRange_DataWriter () {};
                ~FloatingPointRange_DataWriter () {};
            private:
                FloatingPointRange_DataWriter (const FloatingPointRange_DataWriter &);
                FloatingPointRange_DataWriter & operator = (const FloatingPointRange_DataWriter &);
            };

            class  FloatingPointRange_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef FloatingPointRange_DataReader_ptr _ptr_type;
                typedef FloatingPointRange_DataReader_var _var_type;

                static FloatingPointRange_DataReader_ptr _duplicate (FloatingPointRange_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static FloatingPointRange_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static FloatingPointRange_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static FloatingPointRange_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                FloatingPointRange_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (FloatingPointRange_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (FloatingPointRange_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (FloatingPointRange_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const FloatingPointRange_& instance) = 0;

            protected:
                FloatingPointRange_DataReader () {};
                ~FloatingPointRange_DataReader () {};
            private:
                FloatingPointRange_DataReader (const FloatingPointRange_DataReader &);
                FloatingPointRange_DataReader & operator = (const FloatingPointRange_DataReader &);
            };

            class  FloatingPointRange_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef FloatingPointRange_DataReaderView_ptr _ptr_type;
                typedef FloatingPointRange_DataReaderView_var _var_type;

                static FloatingPointRange_DataReaderView_ptr _duplicate (FloatingPointRange_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static FloatingPointRange_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static FloatingPointRange_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static FloatingPointRange_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                FloatingPointRange_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (FloatingPointRange_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (FloatingPointRange_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (FloatingPointRange_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (FloatingPointRange_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const FloatingPointRange_& instance) = 0;

            protected:
                FloatingPointRange_DataReaderView () {};
                ~FloatingPointRange_DataReaderView () {};
            private:
                FloatingPointRange_DataReaderView (const FloatingPointRange_DataReaderView &);
                FloatingPointRange_DataReaderView & operator = (const FloatingPointRange_DataReaderView &);
            };
        }

    }

}

#endif
