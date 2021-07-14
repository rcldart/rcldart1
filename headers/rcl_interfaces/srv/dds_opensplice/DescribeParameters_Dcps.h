#ifndef _H_B6F5BA2CEE39C20AB19D0057990384C4_DescribeParameters_DCPS_H_
#define _H_B6F5BA2CEE39C20AB19D0057990384C4_DescribeParameters_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "DescribeParameters_.h"


namespace rcl_interfaces
{
    namespace srv
    {
        namespace dds_
        {
            class DescribeParameters_Request_TypeSupportInterface;

            typedef DescribeParameters_Request_TypeSupportInterface * DescribeParameters_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < DescribeParameters_Request_TypeSupportInterface> DescribeParameters_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < DescribeParameters_Request_TypeSupportInterface> DescribeParameters_Request_TypeSupportInterface_out;


            class DescribeParameters_Request_DataWriter;

            typedef DescribeParameters_Request_DataWriter * DescribeParameters_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < DescribeParameters_Request_DataWriter> DescribeParameters_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < DescribeParameters_Request_DataWriter> DescribeParameters_Request_DataWriter_out;


            class DescribeParameters_Request_DataReader;

            typedef DescribeParameters_Request_DataReader * DescribeParameters_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < DescribeParameters_Request_DataReader> DescribeParameters_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < DescribeParameters_Request_DataReader> DescribeParameters_Request_DataReader_out;


            class DescribeParameters_Request_DataReaderView;

            typedef DescribeParameters_Request_DataReaderView * DescribeParameters_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < DescribeParameters_Request_DataReaderView> DescribeParameters_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < DescribeParameters_Request_DataReaderView> DescribeParameters_Request_DataReaderView_out;

            struct DescribeParameters_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < DescribeParameters_Request_, struct DescribeParameters_Request_Seq_uniq_> DescribeParameters_Request_Seq;
            typedef DDS_DCPSSequence_var < DescribeParameters_Request_Seq> DescribeParameters_Request_Seq_var;
            typedef DDS_DCPSSequence_out < DescribeParameters_Request_Seq> DescribeParameters_Request_Seq_out;

            class  DescribeParameters_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef DescribeParameters_Request_TypeSupportInterface_ptr _ptr_type;
                typedef DescribeParameters_Request_TypeSupportInterface_var _var_type;

                static DescribeParameters_Request_TypeSupportInterface_ptr _duplicate (DescribeParameters_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static DescribeParameters_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static DescribeParameters_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static DescribeParameters_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                DescribeParameters_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                DescribeParameters_Request_TypeSupportInterface () {};
                ~DescribeParameters_Request_TypeSupportInterface () {};
            private:
                DescribeParameters_Request_TypeSupportInterface (const DescribeParameters_Request_TypeSupportInterface &);
                DescribeParameters_Request_TypeSupportInterface & operator = (const DescribeParameters_Request_TypeSupportInterface &);
            };

            class  DescribeParameters_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef DescribeParameters_Request_DataWriter_ptr _ptr_type;
                typedef DescribeParameters_Request_DataWriter_var _var_type;

                static DescribeParameters_Request_DataWriter_ptr _duplicate (DescribeParameters_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static DescribeParameters_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static DescribeParameters_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static DescribeParameters_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                DescribeParameters_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const DescribeParameters_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const DescribeParameters_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const DescribeParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const DescribeParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const DescribeParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const DescribeParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const DescribeParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const DescribeParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const DescribeParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const DescribeParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (DescribeParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const DescribeParameters_Request_& instance_data) = 0;

            protected:
                DescribeParameters_Request_DataWriter () {};
                ~DescribeParameters_Request_DataWriter () {};
            private:
                DescribeParameters_Request_DataWriter (const DescribeParameters_Request_DataWriter &);
                DescribeParameters_Request_DataWriter & operator = (const DescribeParameters_Request_DataWriter &);
            };

            class  DescribeParameters_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef DescribeParameters_Request_DataReader_ptr _ptr_type;
                typedef DescribeParameters_Request_DataReader_var _var_type;

                static DescribeParameters_Request_DataReader_ptr _duplicate (DescribeParameters_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static DescribeParameters_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static DescribeParameters_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static DescribeParameters_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                DescribeParameters_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (DescribeParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (DescribeParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (DescribeParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const DescribeParameters_Request_& instance) = 0;

            protected:
                DescribeParameters_Request_DataReader () {};
                ~DescribeParameters_Request_DataReader () {};
            private:
                DescribeParameters_Request_DataReader (const DescribeParameters_Request_DataReader &);
                DescribeParameters_Request_DataReader & operator = (const DescribeParameters_Request_DataReader &);
            };

            class  DescribeParameters_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef DescribeParameters_Request_DataReaderView_ptr _ptr_type;
                typedef DescribeParameters_Request_DataReaderView_var _var_type;

                static DescribeParameters_Request_DataReaderView_ptr _duplicate (DescribeParameters_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static DescribeParameters_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static DescribeParameters_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static DescribeParameters_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                DescribeParameters_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (DescribeParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (DescribeParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (DescribeParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const DescribeParameters_Request_& instance) = 0;

            protected:
                DescribeParameters_Request_DataReaderView () {};
                ~DescribeParameters_Request_DataReaderView () {};
            private:
                DescribeParameters_Request_DataReaderView (const DescribeParameters_Request_DataReaderView &);
                DescribeParameters_Request_DataReaderView & operator = (const DescribeParameters_Request_DataReaderView &);
            };
            class DescribeParameters_Response_TypeSupportInterface;

            typedef DescribeParameters_Response_TypeSupportInterface * DescribeParameters_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < DescribeParameters_Response_TypeSupportInterface> DescribeParameters_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < DescribeParameters_Response_TypeSupportInterface> DescribeParameters_Response_TypeSupportInterface_out;


            class DescribeParameters_Response_DataWriter;

            typedef DescribeParameters_Response_DataWriter * DescribeParameters_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < DescribeParameters_Response_DataWriter> DescribeParameters_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < DescribeParameters_Response_DataWriter> DescribeParameters_Response_DataWriter_out;


            class DescribeParameters_Response_DataReader;

            typedef DescribeParameters_Response_DataReader * DescribeParameters_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < DescribeParameters_Response_DataReader> DescribeParameters_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < DescribeParameters_Response_DataReader> DescribeParameters_Response_DataReader_out;


            class DescribeParameters_Response_DataReaderView;

            typedef DescribeParameters_Response_DataReaderView * DescribeParameters_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < DescribeParameters_Response_DataReaderView> DescribeParameters_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < DescribeParameters_Response_DataReaderView> DescribeParameters_Response_DataReaderView_out;

            struct DescribeParameters_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < DescribeParameters_Response_, struct DescribeParameters_Response_Seq_uniq_> DescribeParameters_Response_Seq;
            typedef DDS_DCPSSequence_var < DescribeParameters_Response_Seq> DescribeParameters_Response_Seq_var;
            typedef DDS_DCPSSequence_out < DescribeParameters_Response_Seq> DescribeParameters_Response_Seq_out;

            class  DescribeParameters_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef DescribeParameters_Response_TypeSupportInterface_ptr _ptr_type;
                typedef DescribeParameters_Response_TypeSupportInterface_var _var_type;

                static DescribeParameters_Response_TypeSupportInterface_ptr _duplicate (DescribeParameters_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static DescribeParameters_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static DescribeParameters_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static DescribeParameters_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                DescribeParameters_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                DescribeParameters_Response_TypeSupportInterface () {};
                ~DescribeParameters_Response_TypeSupportInterface () {};
            private:
                DescribeParameters_Response_TypeSupportInterface (const DescribeParameters_Response_TypeSupportInterface &);
                DescribeParameters_Response_TypeSupportInterface & operator = (const DescribeParameters_Response_TypeSupportInterface &);
            };

            class  DescribeParameters_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef DescribeParameters_Response_DataWriter_ptr _ptr_type;
                typedef DescribeParameters_Response_DataWriter_var _var_type;

                static DescribeParameters_Response_DataWriter_ptr _duplicate (DescribeParameters_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static DescribeParameters_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static DescribeParameters_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static DescribeParameters_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                DescribeParameters_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const DescribeParameters_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const DescribeParameters_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const DescribeParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const DescribeParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const DescribeParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const DescribeParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const DescribeParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const DescribeParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const DescribeParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const DescribeParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (DescribeParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const DescribeParameters_Response_& instance_data) = 0;

            protected:
                DescribeParameters_Response_DataWriter () {};
                ~DescribeParameters_Response_DataWriter () {};
            private:
                DescribeParameters_Response_DataWriter (const DescribeParameters_Response_DataWriter &);
                DescribeParameters_Response_DataWriter & operator = (const DescribeParameters_Response_DataWriter &);
            };

            class  DescribeParameters_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef DescribeParameters_Response_DataReader_ptr _ptr_type;
                typedef DescribeParameters_Response_DataReader_var _var_type;

                static DescribeParameters_Response_DataReader_ptr _duplicate (DescribeParameters_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static DescribeParameters_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static DescribeParameters_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static DescribeParameters_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                DescribeParameters_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (DescribeParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (DescribeParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (DescribeParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const DescribeParameters_Response_& instance) = 0;

            protected:
                DescribeParameters_Response_DataReader () {};
                ~DescribeParameters_Response_DataReader () {};
            private:
                DescribeParameters_Response_DataReader (const DescribeParameters_Response_DataReader &);
                DescribeParameters_Response_DataReader & operator = (const DescribeParameters_Response_DataReader &);
            };

            class  DescribeParameters_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef DescribeParameters_Response_DataReaderView_ptr _ptr_type;
                typedef DescribeParameters_Response_DataReaderView_var _var_type;

                static DescribeParameters_Response_DataReaderView_ptr _duplicate (DescribeParameters_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static DescribeParameters_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static DescribeParameters_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static DescribeParameters_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                DescribeParameters_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (DescribeParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (DescribeParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (DescribeParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const DescribeParameters_Response_& instance) = 0;

            protected:
                DescribeParameters_Response_DataReaderView () {};
                ~DescribeParameters_Response_DataReaderView () {};
            private:
                DescribeParameters_Response_DataReaderView (const DescribeParameters_Response_DataReaderView &);
                DescribeParameters_Response_DataReaderView & operator = (const DescribeParameters_Response_DataReaderView &);
            };
            class Sample_DescribeParameters_Request_TypeSupportInterface;

            typedef Sample_DescribeParameters_Request_TypeSupportInterface * Sample_DescribeParameters_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_DescribeParameters_Request_TypeSupportInterface> Sample_DescribeParameters_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_DescribeParameters_Request_TypeSupportInterface> Sample_DescribeParameters_Request_TypeSupportInterface_out;


            class Sample_DescribeParameters_Request_DataWriter;

            typedef Sample_DescribeParameters_Request_DataWriter * Sample_DescribeParameters_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_DescribeParameters_Request_DataWriter> Sample_DescribeParameters_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_DescribeParameters_Request_DataWriter> Sample_DescribeParameters_Request_DataWriter_out;


            class Sample_DescribeParameters_Request_DataReader;

            typedef Sample_DescribeParameters_Request_DataReader * Sample_DescribeParameters_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_DescribeParameters_Request_DataReader> Sample_DescribeParameters_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_DescribeParameters_Request_DataReader> Sample_DescribeParameters_Request_DataReader_out;


            class Sample_DescribeParameters_Request_DataReaderView;

            typedef Sample_DescribeParameters_Request_DataReaderView * Sample_DescribeParameters_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_DescribeParameters_Request_DataReaderView> Sample_DescribeParameters_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_DescribeParameters_Request_DataReaderView> Sample_DescribeParameters_Request_DataReaderView_out;

            struct Sample_DescribeParameters_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_DescribeParameters_Request_, struct Sample_DescribeParameters_Request_Seq_uniq_> Sample_DescribeParameters_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_DescribeParameters_Request_Seq> Sample_DescribeParameters_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_DescribeParameters_Request_Seq> Sample_DescribeParameters_Request_Seq_out;

            class  Sample_DescribeParameters_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_DescribeParameters_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_DescribeParameters_Request_TypeSupportInterface_var _var_type;

                static Sample_DescribeParameters_Request_TypeSupportInterface_ptr _duplicate (Sample_DescribeParameters_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_DescribeParameters_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_DescribeParameters_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_DescribeParameters_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_DescribeParameters_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_DescribeParameters_Request_TypeSupportInterface () {};
                ~Sample_DescribeParameters_Request_TypeSupportInterface () {};
            private:
                Sample_DescribeParameters_Request_TypeSupportInterface (const Sample_DescribeParameters_Request_TypeSupportInterface &);
                Sample_DescribeParameters_Request_TypeSupportInterface & operator = (const Sample_DescribeParameters_Request_TypeSupportInterface &);
            };

            class  Sample_DescribeParameters_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_DescribeParameters_Request_DataWriter_ptr _ptr_type;
                typedef Sample_DescribeParameters_Request_DataWriter_var _var_type;

                static Sample_DescribeParameters_Request_DataWriter_ptr _duplicate (Sample_DescribeParameters_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_DescribeParameters_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_DescribeParameters_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_DescribeParameters_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_DescribeParameters_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_DescribeParameters_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_DescribeParameters_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_DescribeParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_DescribeParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_DescribeParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_DescribeParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_DescribeParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_DescribeParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_DescribeParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_DescribeParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_DescribeParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_DescribeParameters_Request_& instance_data) = 0;

            protected:
                Sample_DescribeParameters_Request_DataWriter () {};
                ~Sample_DescribeParameters_Request_DataWriter () {};
            private:
                Sample_DescribeParameters_Request_DataWriter (const Sample_DescribeParameters_Request_DataWriter &);
                Sample_DescribeParameters_Request_DataWriter & operator = (const Sample_DescribeParameters_Request_DataWriter &);
            };

            class  Sample_DescribeParameters_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_DescribeParameters_Request_DataReader_ptr _ptr_type;
                typedef Sample_DescribeParameters_Request_DataReader_var _var_type;

                static Sample_DescribeParameters_Request_DataReader_ptr _duplicate (Sample_DescribeParameters_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_DescribeParameters_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_DescribeParameters_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_DescribeParameters_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_DescribeParameters_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_DescribeParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_DescribeParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_DescribeParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_DescribeParameters_Request_& instance) = 0;

            protected:
                Sample_DescribeParameters_Request_DataReader () {};
                ~Sample_DescribeParameters_Request_DataReader () {};
            private:
                Sample_DescribeParameters_Request_DataReader (const Sample_DescribeParameters_Request_DataReader &);
                Sample_DescribeParameters_Request_DataReader & operator = (const Sample_DescribeParameters_Request_DataReader &);
            };

            class  Sample_DescribeParameters_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_DescribeParameters_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_DescribeParameters_Request_DataReaderView_var _var_type;

                static Sample_DescribeParameters_Request_DataReaderView_ptr _duplicate (Sample_DescribeParameters_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_DescribeParameters_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_DescribeParameters_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_DescribeParameters_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_DescribeParameters_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_DescribeParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_DescribeParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_DescribeParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_DescribeParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_DescribeParameters_Request_& instance) = 0;

            protected:
                Sample_DescribeParameters_Request_DataReaderView () {};
                ~Sample_DescribeParameters_Request_DataReaderView () {};
            private:
                Sample_DescribeParameters_Request_DataReaderView (const Sample_DescribeParameters_Request_DataReaderView &);
                Sample_DescribeParameters_Request_DataReaderView & operator = (const Sample_DescribeParameters_Request_DataReaderView &);
            };
            class Sample_DescribeParameters_Response_TypeSupportInterface;

            typedef Sample_DescribeParameters_Response_TypeSupportInterface * Sample_DescribeParameters_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_DescribeParameters_Response_TypeSupportInterface> Sample_DescribeParameters_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_DescribeParameters_Response_TypeSupportInterface> Sample_DescribeParameters_Response_TypeSupportInterface_out;


            class Sample_DescribeParameters_Response_DataWriter;

            typedef Sample_DescribeParameters_Response_DataWriter * Sample_DescribeParameters_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_DescribeParameters_Response_DataWriter> Sample_DescribeParameters_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_DescribeParameters_Response_DataWriter> Sample_DescribeParameters_Response_DataWriter_out;


            class Sample_DescribeParameters_Response_DataReader;

            typedef Sample_DescribeParameters_Response_DataReader * Sample_DescribeParameters_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_DescribeParameters_Response_DataReader> Sample_DescribeParameters_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_DescribeParameters_Response_DataReader> Sample_DescribeParameters_Response_DataReader_out;


            class Sample_DescribeParameters_Response_DataReaderView;

            typedef Sample_DescribeParameters_Response_DataReaderView * Sample_DescribeParameters_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_DescribeParameters_Response_DataReaderView> Sample_DescribeParameters_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_DescribeParameters_Response_DataReaderView> Sample_DescribeParameters_Response_DataReaderView_out;

            struct Sample_DescribeParameters_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_DescribeParameters_Response_, struct Sample_DescribeParameters_Response_Seq_uniq_> Sample_DescribeParameters_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_DescribeParameters_Response_Seq> Sample_DescribeParameters_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_DescribeParameters_Response_Seq> Sample_DescribeParameters_Response_Seq_out;

            class  Sample_DescribeParameters_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_DescribeParameters_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_DescribeParameters_Response_TypeSupportInterface_var _var_type;

                static Sample_DescribeParameters_Response_TypeSupportInterface_ptr _duplicate (Sample_DescribeParameters_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_DescribeParameters_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_DescribeParameters_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_DescribeParameters_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_DescribeParameters_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_DescribeParameters_Response_TypeSupportInterface () {};
                ~Sample_DescribeParameters_Response_TypeSupportInterface () {};
            private:
                Sample_DescribeParameters_Response_TypeSupportInterface (const Sample_DescribeParameters_Response_TypeSupportInterface &);
                Sample_DescribeParameters_Response_TypeSupportInterface & operator = (const Sample_DescribeParameters_Response_TypeSupportInterface &);
            };

            class  Sample_DescribeParameters_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_DescribeParameters_Response_DataWriter_ptr _ptr_type;
                typedef Sample_DescribeParameters_Response_DataWriter_var _var_type;

                static Sample_DescribeParameters_Response_DataWriter_ptr _duplicate (Sample_DescribeParameters_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_DescribeParameters_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_DescribeParameters_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_DescribeParameters_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_DescribeParameters_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_DescribeParameters_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_DescribeParameters_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_DescribeParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_DescribeParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_DescribeParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_DescribeParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_DescribeParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_DescribeParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_DescribeParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_DescribeParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_DescribeParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_DescribeParameters_Response_& instance_data) = 0;

            protected:
                Sample_DescribeParameters_Response_DataWriter () {};
                ~Sample_DescribeParameters_Response_DataWriter () {};
            private:
                Sample_DescribeParameters_Response_DataWriter (const Sample_DescribeParameters_Response_DataWriter &);
                Sample_DescribeParameters_Response_DataWriter & operator = (const Sample_DescribeParameters_Response_DataWriter &);
            };

            class  Sample_DescribeParameters_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_DescribeParameters_Response_DataReader_ptr _ptr_type;
                typedef Sample_DescribeParameters_Response_DataReader_var _var_type;

                static Sample_DescribeParameters_Response_DataReader_ptr _duplicate (Sample_DescribeParameters_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_DescribeParameters_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_DescribeParameters_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_DescribeParameters_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_DescribeParameters_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_DescribeParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_DescribeParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_DescribeParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_DescribeParameters_Response_& instance) = 0;

            protected:
                Sample_DescribeParameters_Response_DataReader () {};
                ~Sample_DescribeParameters_Response_DataReader () {};
            private:
                Sample_DescribeParameters_Response_DataReader (const Sample_DescribeParameters_Response_DataReader &);
                Sample_DescribeParameters_Response_DataReader & operator = (const Sample_DescribeParameters_Response_DataReader &);
            };

            class  Sample_DescribeParameters_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_DescribeParameters_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_DescribeParameters_Response_DataReaderView_var _var_type;

                static Sample_DescribeParameters_Response_DataReaderView_ptr _duplicate (Sample_DescribeParameters_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_DescribeParameters_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_DescribeParameters_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_DescribeParameters_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_DescribeParameters_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_DescribeParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_DescribeParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_DescribeParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_DescribeParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_DescribeParameters_Response_& instance) = 0;

            protected:
                Sample_DescribeParameters_Response_DataReaderView () {};
                ~Sample_DescribeParameters_Response_DataReaderView () {};
            private:
                Sample_DescribeParameters_Response_DataReaderView (const Sample_DescribeParameters_Response_DataReaderView &);
                Sample_DescribeParameters_Response_DataReaderView & operator = (const Sample_DescribeParameters_Response_DataReaderView &);
            };
        }

    }

}

#endif
