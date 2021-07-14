#ifndef _H_C4AD0AB78CC3E0CF773DCB82EEA8F2DA_ListParameters_DCPS_H_
#define _H_C4AD0AB78CC3E0CF773DCB82EEA8F2DA_ListParameters_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "ListParameters_.h"


namespace rcl_interfaces
{
    namespace srv
    {
        namespace dds_
        {
            class ListParameters_Request_TypeSupportInterface;

            typedef ListParameters_Request_TypeSupportInterface * ListParameters_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ListParameters_Request_TypeSupportInterface> ListParameters_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ListParameters_Request_TypeSupportInterface> ListParameters_Request_TypeSupportInterface_out;


            class ListParameters_Request_DataWriter;

            typedef ListParameters_Request_DataWriter * ListParameters_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ListParameters_Request_DataWriter> ListParameters_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < ListParameters_Request_DataWriter> ListParameters_Request_DataWriter_out;


            class ListParameters_Request_DataReader;

            typedef ListParameters_Request_DataReader * ListParameters_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ListParameters_Request_DataReader> ListParameters_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < ListParameters_Request_DataReader> ListParameters_Request_DataReader_out;


            class ListParameters_Request_DataReaderView;

            typedef ListParameters_Request_DataReaderView * ListParameters_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ListParameters_Request_DataReaderView> ListParameters_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ListParameters_Request_DataReaderView> ListParameters_Request_DataReaderView_out;

            struct ListParameters_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < ListParameters_Request_, struct ListParameters_Request_Seq_uniq_> ListParameters_Request_Seq;
            typedef DDS_DCPSSequence_var < ListParameters_Request_Seq> ListParameters_Request_Seq_var;
            typedef DDS_DCPSSequence_out < ListParameters_Request_Seq> ListParameters_Request_Seq_out;

            class  ListParameters_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ListParameters_Request_TypeSupportInterface_ptr _ptr_type;
                typedef ListParameters_Request_TypeSupportInterface_var _var_type;

                static ListParameters_Request_TypeSupportInterface_ptr _duplicate (ListParameters_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ListParameters_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ListParameters_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ListParameters_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ListParameters_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ListParameters_Request_TypeSupportInterface () {};
                ~ListParameters_Request_TypeSupportInterface () {};
            private:
                ListParameters_Request_TypeSupportInterface (const ListParameters_Request_TypeSupportInterface &);
                ListParameters_Request_TypeSupportInterface & operator = (const ListParameters_Request_TypeSupportInterface &);
            };

            class  ListParameters_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ListParameters_Request_DataWriter_ptr _ptr_type;
                typedef ListParameters_Request_DataWriter_var _var_type;

                static ListParameters_Request_DataWriter_ptr _duplicate (ListParameters_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ListParameters_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ListParameters_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ListParameters_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ListParameters_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ListParameters_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ListParameters_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ListParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ListParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ListParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ListParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ListParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ListParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ListParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ListParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ListParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ListParameters_Request_& instance_data) = 0;

            protected:
                ListParameters_Request_DataWriter () {};
                ~ListParameters_Request_DataWriter () {};
            private:
                ListParameters_Request_DataWriter (const ListParameters_Request_DataWriter &);
                ListParameters_Request_DataWriter & operator = (const ListParameters_Request_DataWriter &);
            };

            class  ListParameters_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ListParameters_Request_DataReader_ptr _ptr_type;
                typedef ListParameters_Request_DataReader_var _var_type;

                static ListParameters_Request_DataReader_ptr _duplicate (ListParameters_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ListParameters_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ListParameters_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ListParameters_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ListParameters_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ListParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ListParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ListParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ListParameters_Request_& instance) = 0;

            protected:
                ListParameters_Request_DataReader () {};
                ~ListParameters_Request_DataReader () {};
            private:
                ListParameters_Request_DataReader (const ListParameters_Request_DataReader &);
                ListParameters_Request_DataReader & operator = (const ListParameters_Request_DataReader &);
            };

            class  ListParameters_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ListParameters_Request_DataReaderView_ptr _ptr_type;
                typedef ListParameters_Request_DataReaderView_var _var_type;

                static ListParameters_Request_DataReaderView_ptr _duplicate (ListParameters_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ListParameters_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ListParameters_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ListParameters_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ListParameters_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ListParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ListParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ListParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ListParameters_Request_& instance) = 0;

            protected:
                ListParameters_Request_DataReaderView () {};
                ~ListParameters_Request_DataReaderView () {};
            private:
                ListParameters_Request_DataReaderView (const ListParameters_Request_DataReaderView &);
                ListParameters_Request_DataReaderView & operator = (const ListParameters_Request_DataReaderView &);
            };
            class ListParameters_Response_TypeSupportInterface;

            typedef ListParameters_Response_TypeSupportInterface * ListParameters_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < ListParameters_Response_TypeSupportInterface> ListParameters_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < ListParameters_Response_TypeSupportInterface> ListParameters_Response_TypeSupportInterface_out;


            class ListParameters_Response_DataWriter;

            typedef ListParameters_Response_DataWriter * ListParameters_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < ListParameters_Response_DataWriter> ListParameters_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < ListParameters_Response_DataWriter> ListParameters_Response_DataWriter_out;


            class ListParameters_Response_DataReader;

            typedef ListParameters_Response_DataReader * ListParameters_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < ListParameters_Response_DataReader> ListParameters_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < ListParameters_Response_DataReader> ListParameters_Response_DataReader_out;


            class ListParameters_Response_DataReaderView;

            typedef ListParameters_Response_DataReaderView * ListParameters_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < ListParameters_Response_DataReaderView> ListParameters_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < ListParameters_Response_DataReaderView> ListParameters_Response_DataReaderView_out;

            struct ListParameters_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < ListParameters_Response_, struct ListParameters_Response_Seq_uniq_> ListParameters_Response_Seq;
            typedef DDS_DCPSSequence_var < ListParameters_Response_Seq> ListParameters_Response_Seq_var;
            typedef DDS_DCPSSequence_out < ListParameters_Response_Seq> ListParameters_Response_Seq_out;

            class  ListParameters_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef ListParameters_Response_TypeSupportInterface_ptr _ptr_type;
                typedef ListParameters_Response_TypeSupportInterface_var _var_type;

                static ListParameters_Response_TypeSupportInterface_ptr _duplicate (ListParameters_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ListParameters_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static ListParameters_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ListParameters_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                ListParameters_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                ListParameters_Response_TypeSupportInterface () {};
                ~ListParameters_Response_TypeSupportInterface () {};
            private:
                ListParameters_Response_TypeSupportInterface (const ListParameters_Response_TypeSupportInterface &);
                ListParameters_Response_TypeSupportInterface & operator = (const ListParameters_Response_TypeSupportInterface &);
            };

            class  ListParameters_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef ListParameters_Response_DataWriter_ptr _ptr_type;
                typedef ListParameters_Response_DataWriter_var _var_type;

                static ListParameters_Response_DataWriter_ptr _duplicate (ListParameters_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ListParameters_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static ListParameters_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ListParameters_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                ListParameters_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const ListParameters_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const ListParameters_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const ListParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const ListParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const ListParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const ListParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const ListParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const ListParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const ListParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const ListParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (ListParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ListParameters_Response_& instance_data) = 0;

            protected:
                ListParameters_Response_DataWriter () {};
                ~ListParameters_Response_DataWriter () {};
            private:
                ListParameters_Response_DataWriter (const ListParameters_Response_DataWriter &);
                ListParameters_Response_DataWriter & operator = (const ListParameters_Response_DataWriter &);
            };

            class  ListParameters_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef ListParameters_Response_DataReader_ptr _ptr_type;
                typedef ListParameters_Response_DataReader_var _var_type;

                static ListParameters_Response_DataReader_ptr _duplicate (ListParameters_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ListParameters_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static ListParameters_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ListParameters_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                ListParameters_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ListParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ListParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ListParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ListParameters_Response_& instance) = 0;

            protected:
                ListParameters_Response_DataReader () {};
                ~ListParameters_Response_DataReader () {};
            private:
                ListParameters_Response_DataReader (const ListParameters_Response_DataReader &);
                ListParameters_Response_DataReader & operator = (const ListParameters_Response_DataReader &);
            };

            class  ListParameters_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef ListParameters_Response_DataReaderView_ptr _ptr_type;
                typedef ListParameters_Response_DataReaderView_var _var_type;

                static ListParameters_Response_DataReaderView_ptr _duplicate (ListParameters_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static ListParameters_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static ListParameters_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static ListParameters_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                ListParameters_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (ListParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (ListParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (ListParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const ListParameters_Response_& instance) = 0;

            protected:
                ListParameters_Response_DataReaderView () {};
                ~ListParameters_Response_DataReaderView () {};
            private:
                ListParameters_Response_DataReaderView (const ListParameters_Response_DataReaderView &);
                ListParameters_Response_DataReaderView & operator = (const ListParameters_Response_DataReaderView &);
            };
            class Sample_ListParameters_Request_TypeSupportInterface;

            typedef Sample_ListParameters_Request_TypeSupportInterface * Sample_ListParameters_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_ListParameters_Request_TypeSupportInterface> Sample_ListParameters_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_ListParameters_Request_TypeSupportInterface> Sample_ListParameters_Request_TypeSupportInterface_out;


            class Sample_ListParameters_Request_DataWriter;

            typedef Sample_ListParameters_Request_DataWriter * Sample_ListParameters_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_ListParameters_Request_DataWriter> Sample_ListParameters_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_ListParameters_Request_DataWriter> Sample_ListParameters_Request_DataWriter_out;


            class Sample_ListParameters_Request_DataReader;

            typedef Sample_ListParameters_Request_DataReader * Sample_ListParameters_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_ListParameters_Request_DataReader> Sample_ListParameters_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_ListParameters_Request_DataReader> Sample_ListParameters_Request_DataReader_out;


            class Sample_ListParameters_Request_DataReaderView;

            typedef Sample_ListParameters_Request_DataReaderView * Sample_ListParameters_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_ListParameters_Request_DataReaderView> Sample_ListParameters_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_ListParameters_Request_DataReaderView> Sample_ListParameters_Request_DataReaderView_out;

            struct Sample_ListParameters_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_ListParameters_Request_, struct Sample_ListParameters_Request_Seq_uniq_> Sample_ListParameters_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_ListParameters_Request_Seq> Sample_ListParameters_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_ListParameters_Request_Seq> Sample_ListParameters_Request_Seq_out;

            class  Sample_ListParameters_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_ListParameters_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_ListParameters_Request_TypeSupportInterface_var _var_type;

                static Sample_ListParameters_Request_TypeSupportInterface_ptr _duplicate (Sample_ListParameters_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ListParameters_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ListParameters_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ListParameters_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ListParameters_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_ListParameters_Request_TypeSupportInterface () {};
                ~Sample_ListParameters_Request_TypeSupportInterface () {};
            private:
                Sample_ListParameters_Request_TypeSupportInterface (const Sample_ListParameters_Request_TypeSupportInterface &);
                Sample_ListParameters_Request_TypeSupportInterface & operator = (const Sample_ListParameters_Request_TypeSupportInterface &);
            };

            class  Sample_ListParameters_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_ListParameters_Request_DataWriter_ptr _ptr_type;
                typedef Sample_ListParameters_Request_DataWriter_var _var_type;

                static Sample_ListParameters_Request_DataWriter_ptr _duplicate (Sample_ListParameters_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ListParameters_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ListParameters_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ListParameters_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ListParameters_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_ListParameters_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_ListParameters_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_ListParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_ListParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_ListParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_ListParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_ListParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_ListParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_ListParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_ListParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_ListParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ListParameters_Request_& instance_data) = 0;

            protected:
                Sample_ListParameters_Request_DataWriter () {};
                ~Sample_ListParameters_Request_DataWriter () {};
            private:
                Sample_ListParameters_Request_DataWriter (const Sample_ListParameters_Request_DataWriter &);
                Sample_ListParameters_Request_DataWriter & operator = (const Sample_ListParameters_Request_DataWriter &);
            };

            class  Sample_ListParameters_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_ListParameters_Request_DataReader_ptr _ptr_type;
                typedef Sample_ListParameters_Request_DataReader_var _var_type;

                static Sample_ListParameters_Request_DataReader_ptr _duplicate (Sample_ListParameters_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ListParameters_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ListParameters_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ListParameters_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ListParameters_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_ListParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_ListParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_ListParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ListParameters_Request_& instance) = 0;

            protected:
                Sample_ListParameters_Request_DataReader () {};
                ~Sample_ListParameters_Request_DataReader () {};
            private:
                Sample_ListParameters_Request_DataReader (const Sample_ListParameters_Request_DataReader &);
                Sample_ListParameters_Request_DataReader & operator = (const Sample_ListParameters_Request_DataReader &);
            };

            class  Sample_ListParameters_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_ListParameters_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_ListParameters_Request_DataReaderView_var _var_type;

                static Sample_ListParameters_Request_DataReaderView_ptr _duplicate (Sample_ListParameters_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ListParameters_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ListParameters_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ListParameters_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ListParameters_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_ListParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_ListParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_ListParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_ListParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ListParameters_Request_& instance) = 0;

            protected:
                Sample_ListParameters_Request_DataReaderView () {};
                ~Sample_ListParameters_Request_DataReaderView () {};
            private:
                Sample_ListParameters_Request_DataReaderView (const Sample_ListParameters_Request_DataReaderView &);
                Sample_ListParameters_Request_DataReaderView & operator = (const Sample_ListParameters_Request_DataReaderView &);
            };
            class Sample_ListParameters_Response_TypeSupportInterface;

            typedef Sample_ListParameters_Response_TypeSupportInterface * Sample_ListParameters_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_ListParameters_Response_TypeSupportInterface> Sample_ListParameters_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_ListParameters_Response_TypeSupportInterface> Sample_ListParameters_Response_TypeSupportInterface_out;


            class Sample_ListParameters_Response_DataWriter;

            typedef Sample_ListParameters_Response_DataWriter * Sample_ListParameters_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_ListParameters_Response_DataWriter> Sample_ListParameters_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_ListParameters_Response_DataWriter> Sample_ListParameters_Response_DataWriter_out;


            class Sample_ListParameters_Response_DataReader;

            typedef Sample_ListParameters_Response_DataReader * Sample_ListParameters_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_ListParameters_Response_DataReader> Sample_ListParameters_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_ListParameters_Response_DataReader> Sample_ListParameters_Response_DataReader_out;


            class Sample_ListParameters_Response_DataReaderView;

            typedef Sample_ListParameters_Response_DataReaderView * Sample_ListParameters_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_ListParameters_Response_DataReaderView> Sample_ListParameters_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_ListParameters_Response_DataReaderView> Sample_ListParameters_Response_DataReaderView_out;

            struct Sample_ListParameters_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_ListParameters_Response_, struct Sample_ListParameters_Response_Seq_uniq_> Sample_ListParameters_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_ListParameters_Response_Seq> Sample_ListParameters_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_ListParameters_Response_Seq> Sample_ListParameters_Response_Seq_out;

            class  Sample_ListParameters_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_ListParameters_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_ListParameters_Response_TypeSupportInterface_var _var_type;

                static Sample_ListParameters_Response_TypeSupportInterface_ptr _duplicate (Sample_ListParameters_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ListParameters_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ListParameters_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ListParameters_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ListParameters_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_ListParameters_Response_TypeSupportInterface () {};
                ~Sample_ListParameters_Response_TypeSupportInterface () {};
            private:
                Sample_ListParameters_Response_TypeSupportInterface (const Sample_ListParameters_Response_TypeSupportInterface &);
                Sample_ListParameters_Response_TypeSupportInterface & operator = (const Sample_ListParameters_Response_TypeSupportInterface &);
            };

            class  Sample_ListParameters_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_ListParameters_Response_DataWriter_ptr _ptr_type;
                typedef Sample_ListParameters_Response_DataWriter_var _var_type;

                static Sample_ListParameters_Response_DataWriter_ptr _duplicate (Sample_ListParameters_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ListParameters_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ListParameters_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ListParameters_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ListParameters_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_ListParameters_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_ListParameters_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_ListParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_ListParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_ListParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_ListParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_ListParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_ListParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_ListParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_ListParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_ListParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ListParameters_Response_& instance_data) = 0;

            protected:
                Sample_ListParameters_Response_DataWriter () {};
                ~Sample_ListParameters_Response_DataWriter () {};
            private:
                Sample_ListParameters_Response_DataWriter (const Sample_ListParameters_Response_DataWriter &);
                Sample_ListParameters_Response_DataWriter & operator = (const Sample_ListParameters_Response_DataWriter &);
            };

            class  Sample_ListParameters_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_ListParameters_Response_DataReader_ptr _ptr_type;
                typedef Sample_ListParameters_Response_DataReader_var _var_type;

                static Sample_ListParameters_Response_DataReader_ptr _duplicate (Sample_ListParameters_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ListParameters_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ListParameters_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ListParameters_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ListParameters_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_ListParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_ListParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_ListParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ListParameters_Response_& instance) = 0;

            protected:
                Sample_ListParameters_Response_DataReader () {};
                ~Sample_ListParameters_Response_DataReader () {};
            private:
                Sample_ListParameters_Response_DataReader (const Sample_ListParameters_Response_DataReader &);
                Sample_ListParameters_Response_DataReader & operator = (const Sample_ListParameters_Response_DataReader &);
            };

            class  Sample_ListParameters_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_ListParameters_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_ListParameters_Response_DataReaderView_var _var_type;

                static Sample_ListParameters_Response_DataReaderView_ptr _duplicate (Sample_ListParameters_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_ListParameters_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_ListParameters_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_ListParameters_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_ListParameters_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_ListParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_ListParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_ListParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_ListParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_ListParameters_Response_& instance) = 0;

            protected:
                Sample_ListParameters_Response_DataReaderView () {};
                ~Sample_ListParameters_Response_DataReaderView () {};
            private:
                Sample_ListParameters_Response_DataReaderView (const Sample_ListParameters_Response_DataReaderView &);
                Sample_ListParameters_Response_DataReaderView & operator = (const Sample_ListParameters_Response_DataReaderView &);
            };
        }

    }

}

#endif
