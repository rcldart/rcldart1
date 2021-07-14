#ifndef _H_BC7ADA5552CCDD7509F6744A7A91C98F_SetParameters_DCPS_H_
#define _H_BC7ADA5552CCDD7509F6744A7A91C98F_SetParameters_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "SetParameters_.h"


namespace rcl_interfaces
{
    namespace srv
    {
        namespace dds_
        {
            class SetParameters_Request_TypeSupportInterface;

            typedef SetParameters_Request_TypeSupportInterface * SetParameters_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SetParameters_Request_TypeSupportInterface> SetParameters_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SetParameters_Request_TypeSupportInterface> SetParameters_Request_TypeSupportInterface_out;


            class SetParameters_Request_DataWriter;

            typedef SetParameters_Request_DataWriter * SetParameters_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SetParameters_Request_DataWriter> SetParameters_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < SetParameters_Request_DataWriter> SetParameters_Request_DataWriter_out;


            class SetParameters_Request_DataReader;

            typedef SetParameters_Request_DataReader * SetParameters_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SetParameters_Request_DataReader> SetParameters_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < SetParameters_Request_DataReader> SetParameters_Request_DataReader_out;


            class SetParameters_Request_DataReaderView;

            typedef SetParameters_Request_DataReaderView * SetParameters_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SetParameters_Request_DataReaderView> SetParameters_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SetParameters_Request_DataReaderView> SetParameters_Request_DataReaderView_out;

            struct SetParameters_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < SetParameters_Request_, struct SetParameters_Request_Seq_uniq_> SetParameters_Request_Seq;
            typedef DDS_DCPSSequence_var < SetParameters_Request_Seq> SetParameters_Request_Seq_var;
            typedef DDS_DCPSSequence_out < SetParameters_Request_Seq> SetParameters_Request_Seq_out;

            class  SetParameters_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SetParameters_Request_TypeSupportInterface_ptr _ptr_type;
                typedef SetParameters_Request_TypeSupportInterface_var _var_type;

                static SetParameters_Request_TypeSupportInterface_ptr _duplicate (SetParameters_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetParameters_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SetParameters_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetParameters_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SetParameters_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SetParameters_Request_TypeSupportInterface () {};
                ~SetParameters_Request_TypeSupportInterface () {};
            private:
                SetParameters_Request_TypeSupportInterface (const SetParameters_Request_TypeSupportInterface &);
                SetParameters_Request_TypeSupportInterface & operator = (const SetParameters_Request_TypeSupportInterface &);
            };

            class  SetParameters_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SetParameters_Request_DataWriter_ptr _ptr_type;
                typedef SetParameters_Request_DataWriter_var _var_type;

                static SetParameters_Request_DataWriter_ptr _duplicate (SetParameters_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetParameters_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SetParameters_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetParameters_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SetParameters_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SetParameters_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SetParameters_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SetParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SetParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SetParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SetParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SetParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SetParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SetParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SetParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SetParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetParameters_Request_& instance_data) = 0;

            protected:
                SetParameters_Request_DataWriter () {};
                ~SetParameters_Request_DataWriter () {};
            private:
                SetParameters_Request_DataWriter (const SetParameters_Request_DataWriter &);
                SetParameters_Request_DataWriter & operator = (const SetParameters_Request_DataWriter &);
            };

            class  SetParameters_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SetParameters_Request_DataReader_ptr _ptr_type;
                typedef SetParameters_Request_DataReader_var _var_type;

                static SetParameters_Request_DataReader_ptr _duplicate (SetParameters_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetParameters_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SetParameters_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetParameters_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SetParameters_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetParameters_Request_& instance) = 0;

            protected:
                SetParameters_Request_DataReader () {};
                ~SetParameters_Request_DataReader () {};
            private:
                SetParameters_Request_DataReader (const SetParameters_Request_DataReader &);
                SetParameters_Request_DataReader & operator = (const SetParameters_Request_DataReader &);
            };

            class  SetParameters_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SetParameters_Request_DataReaderView_ptr _ptr_type;
                typedef SetParameters_Request_DataReaderView_var _var_type;

                static SetParameters_Request_DataReaderView_ptr _duplicate (SetParameters_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetParameters_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SetParameters_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetParameters_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SetParameters_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetParameters_Request_& instance) = 0;

            protected:
                SetParameters_Request_DataReaderView () {};
                ~SetParameters_Request_DataReaderView () {};
            private:
                SetParameters_Request_DataReaderView (const SetParameters_Request_DataReaderView &);
                SetParameters_Request_DataReaderView & operator = (const SetParameters_Request_DataReaderView &);
            };
            class SetParameters_Response_TypeSupportInterface;

            typedef SetParameters_Response_TypeSupportInterface * SetParameters_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < SetParameters_Response_TypeSupportInterface> SetParameters_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < SetParameters_Response_TypeSupportInterface> SetParameters_Response_TypeSupportInterface_out;


            class SetParameters_Response_DataWriter;

            typedef SetParameters_Response_DataWriter * SetParameters_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < SetParameters_Response_DataWriter> SetParameters_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < SetParameters_Response_DataWriter> SetParameters_Response_DataWriter_out;


            class SetParameters_Response_DataReader;

            typedef SetParameters_Response_DataReader * SetParameters_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < SetParameters_Response_DataReader> SetParameters_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < SetParameters_Response_DataReader> SetParameters_Response_DataReader_out;


            class SetParameters_Response_DataReaderView;

            typedef SetParameters_Response_DataReaderView * SetParameters_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < SetParameters_Response_DataReaderView> SetParameters_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < SetParameters_Response_DataReaderView> SetParameters_Response_DataReaderView_out;

            struct SetParameters_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < SetParameters_Response_, struct SetParameters_Response_Seq_uniq_> SetParameters_Response_Seq;
            typedef DDS_DCPSSequence_var < SetParameters_Response_Seq> SetParameters_Response_Seq_var;
            typedef DDS_DCPSSequence_out < SetParameters_Response_Seq> SetParameters_Response_Seq_out;

            class  SetParameters_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef SetParameters_Response_TypeSupportInterface_ptr _ptr_type;
                typedef SetParameters_Response_TypeSupportInterface_var _var_type;

                static SetParameters_Response_TypeSupportInterface_ptr _duplicate (SetParameters_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetParameters_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static SetParameters_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetParameters_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                SetParameters_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                SetParameters_Response_TypeSupportInterface () {};
                ~SetParameters_Response_TypeSupportInterface () {};
            private:
                SetParameters_Response_TypeSupportInterface (const SetParameters_Response_TypeSupportInterface &);
                SetParameters_Response_TypeSupportInterface & operator = (const SetParameters_Response_TypeSupportInterface &);
            };

            class  SetParameters_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef SetParameters_Response_DataWriter_ptr _ptr_type;
                typedef SetParameters_Response_DataWriter_var _var_type;

                static SetParameters_Response_DataWriter_ptr _duplicate (SetParameters_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetParameters_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static SetParameters_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetParameters_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                SetParameters_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const SetParameters_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const SetParameters_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const SetParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const SetParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const SetParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const SetParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const SetParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const SetParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const SetParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const SetParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (SetParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetParameters_Response_& instance_data) = 0;

            protected:
                SetParameters_Response_DataWriter () {};
                ~SetParameters_Response_DataWriter () {};
            private:
                SetParameters_Response_DataWriter (const SetParameters_Response_DataWriter &);
                SetParameters_Response_DataWriter & operator = (const SetParameters_Response_DataWriter &);
            };

            class  SetParameters_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef SetParameters_Response_DataReader_ptr _ptr_type;
                typedef SetParameters_Response_DataReader_var _var_type;

                static SetParameters_Response_DataReader_ptr _duplicate (SetParameters_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetParameters_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static SetParameters_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetParameters_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                SetParameters_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetParameters_Response_& instance) = 0;

            protected:
                SetParameters_Response_DataReader () {};
                ~SetParameters_Response_DataReader () {};
            private:
                SetParameters_Response_DataReader (const SetParameters_Response_DataReader &);
                SetParameters_Response_DataReader & operator = (const SetParameters_Response_DataReader &);
            };

            class  SetParameters_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef SetParameters_Response_DataReaderView_ptr _ptr_type;
                typedef SetParameters_Response_DataReaderView_var _var_type;

                static SetParameters_Response_DataReaderView_ptr _duplicate (SetParameters_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static SetParameters_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static SetParameters_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static SetParameters_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                SetParameters_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (SetParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (SetParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (SetParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const SetParameters_Response_& instance) = 0;

            protected:
                SetParameters_Response_DataReaderView () {};
                ~SetParameters_Response_DataReaderView () {};
            private:
                SetParameters_Response_DataReaderView (const SetParameters_Response_DataReaderView &);
                SetParameters_Response_DataReaderView & operator = (const SetParameters_Response_DataReaderView &);
            };
            class Sample_SetParameters_Request_TypeSupportInterface;

            typedef Sample_SetParameters_Request_TypeSupportInterface * Sample_SetParameters_Request_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetParameters_Request_TypeSupportInterface> Sample_SetParameters_Request_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_SetParameters_Request_TypeSupportInterface> Sample_SetParameters_Request_TypeSupportInterface_out;


            class Sample_SetParameters_Request_DataWriter;

            typedef Sample_SetParameters_Request_DataWriter * Sample_SetParameters_Request_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetParameters_Request_DataWriter> Sample_SetParameters_Request_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_SetParameters_Request_DataWriter> Sample_SetParameters_Request_DataWriter_out;


            class Sample_SetParameters_Request_DataReader;

            typedef Sample_SetParameters_Request_DataReader * Sample_SetParameters_Request_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetParameters_Request_DataReader> Sample_SetParameters_Request_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_SetParameters_Request_DataReader> Sample_SetParameters_Request_DataReader_out;


            class Sample_SetParameters_Request_DataReaderView;

            typedef Sample_SetParameters_Request_DataReaderView * Sample_SetParameters_Request_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetParameters_Request_DataReaderView> Sample_SetParameters_Request_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_SetParameters_Request_DataReaderView> Sample_SetParameters_Request_DataReaderView_out;

            struct Sample_SetParameters_Request_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_SetParameters_Request_, struct Sample_SetParameters_Request_Seq_uniq_> Sample_SetParameters_Request_Seq;
            typedef DDS_DCPSSequence_var < Sample_SetParameters_Request_Seq> Sample_SetParameters_Request_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_SetParameters_Request_Seq> Sample_SetParameters_Request_Seq_out;

            class  Sample_SetParameters_Request_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_SetParameters_Request_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_SetParameters_Request_TypeSupportInterface_var _var_type;

                static Sample_SetParameters_Request_TypeSupportInterface_ptr _duplicate (Sample_SetParameters_Request_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetParameters_Request_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetParameters_Request_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetParameters_Request_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetParameters_Request_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_SetParameters_Request_TypeSupportInterface () {};
                ~Sample_SetParameters_Request_TypeSupportInterface () {};
            private:
                Sample_SetParameters_Request_TypeSupportInterface (const Sample_SetParameters_Request_TypeSupportInterface &);
                Sample_SetParameters_Request_TypeSupportInterface & operator = (const Sample_SetParameters_Request_TypeSupportInterface &);
            };

            class  Sample_SetParameters_Request_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_SetParameters_Request_DataWriter_ptr _ptr_type;
                typedef Sample_SetParameters_Request_DataWriter_var _var_type;

                static Sample_SetParameters_Request_DataWriter_ptr _duplicate (Sample_SetParameters_Request_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetParameters_Request_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetParameters_Request_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetParameters_Request_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetParameters_Request_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_SetParameters_Request_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_SetParameters_Request_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_SetParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_SetParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_SetParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_SetParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_SetParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_SetParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_SetParameters_Request_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_SetParameters_Request_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_SetParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetParameters_Request_& instance_data) = 0;

            protected:
                Sample_SetParameters_Request_DataWriter () {};
                ~Sample_SetParameters_Request_DataWriter () {};
            private:
                Sample_SetParameters_Request_DataWriter (const Sample_SetParameters_Request_DataWriter &);
                Sample_SetParameters_Request_DataWriter & operator = (const Sample_SetParameters_Request_DataWriter &);
            };

            class  Sample_SetParameters_Request_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_SetParameters_Request_DataReader_ptr _ptr_type;
                typedef Sample_SetParameters_Request_DataReader_var _var_type;

                static Sample_SetParameters_Request_DataReader_ptr _duplicate (Sample_SetParameters_Request_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetParameters_Request_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetParameters_Request_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetParameters_Request_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetParameters_Request_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetParameters_Request_& instance) = 0;

            protected:
                Sample_SetParameters_Request_DataReader () {};
                ~Sample_SetParameters_Request_DataReader () {};
            private:
                Sample_SetParameters_Request_DataReader (const Sample_SetParameters_Request_DataReader &);
                Sample_SetParameters_Request_DataReader & operator = (const Sample_SetParameters_Request_DataReader &);
            };

            class  Sample_SetParameters_Request_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_SetParameters_Request_DataReaderView_ptr _ptr_type;
                typedef Sample_SetParameters_Request_DataReaderView_var _var_type;

                static Sample_SetParameters_Request_DataReaderView_ptr _duplicate (Sample_SetParameters_Request_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetParameters_Request_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetParameters_Request_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetParameters_Request_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetParameters_Request_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetParameters_Request_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetParameters_Request_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetParameters_Request_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetParameters_Request_& instance) = 0;

            protected:
                Sample_SetParameters_Request_DataReaderView () {};
                ~Sample_SetParameters_Request_DataReaderView () {};
            private:
                Sample_SetParameters_Request_DataReaderView (const Sample_SetParameters_Request_DataReaderView &);
                Sample_SetParameters_Request_DataReaderView & operator = (const Sample_SetParameters_Request_DataReaderView &);
            };
            class Sample_SetParameters_Response_TypeSupportInterface;

            typedef Sample_SetParameters_Response_TypeSupportInterface * Sample_SetParameters_Response_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetParameters_Response_TypeSupportInterface> Sample_SetParameters_Response_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Sample_SetParameters_Response_TypeSupportInterface> Sample_SetParameters_Response_TypeSupportInterface_out;


            class Sample_SetParameters_Response_DataWriter;

            typedef Sample_SetParameters_Response_DataWriter * Sample_SetParameters_Response_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetParameters_Response_DataWriter> Sample_SetParameters_Response_DataWriter_var;
            typedef DDS_DCPSInterface_out < Sample_SetParameters_Response_DataWriter> Sample_SetParameters_Response_DataWriter_out;


            class Sample_SetParameters_Response_DataReader;

            typedef Sample_SetParameters_Response_DataReader * Sample_SetParameters_Response_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetParameters_Response_DataReader> Sample_SetParameters_Response_DataReader_var;
            typedef DDS_DCPSInterface_out < Sample_SetParameters_Response_DataReader> Sample_SetParameters_Response_DataReader_out;


            class Sample_SetParameters_Response_DataReaderView;

            typedef Sample_SetParameters_Response_DataReaderView * Sample_SetParameters_Response_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Sample_SetParameters_Response_DataReaderView> Sample_SetParameters_Response_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Sample_SetParameters_Response_DataReaderView> Sample_SetParameters_Response_DataReaderView_out;

            struct Sample_SetParameters_Response_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < Sample_SetParameters_Response_, struct Sample_SetParameters_Response_Seq_uniq_> Sample_SetParameters_Response_Seq;
            typedef DDS_DCPSSequence_var < Sample_SetParameters_Response_Seq> Sample_SetParameters_Response_Seq_var;
            typedef DDS_DCPSSequence_out < Sample_SetParameters_Response_Seq> Sample_SetParameters_Response_Seq_out;

            class  Sample_SetParameters_Response_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Sample_SetParameters_Response_TypeSupportInterface_ptr _ptr_type;
                typedef Sample_SetParameters_Response_TypeSupportInterface_var _var_type;

                static Sample_SetParameters_Response_TypeSupportInterface_ptr _duplicate (Sample_SetParameters_Response_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetParameters_Response_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetParameters_Response_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetParameters_Response_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetParameters_Response_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Sample_SetParameters_Response_TypeSupportInterface () {};
                ~Sample_SetParameters_Response_TypeSupportInterface () {};
            private:
                Sample_SetParameters_Response_TypeSupportInterface (const Sample_SetParameters_Response_TypeSupportInterface &);
                Sample_SetParameters_Response_TypeSupportInterface & operator = (const Sample_SetParameters_Response_TypeSupportInterface &);
            };

            class  Sample_SetParameters_Response_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Sample_SetParameters_Response_DataWriter_ptr _ptr_type;
                typedef Sample_SetParameters_Response_DataWriter_var _var_type;

                static Sample_SetParameters_Response_DataWriter_ptr _duplicate (Sample_SetParameters_Response_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetParameters_Response_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetParameters_Response_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetParameters_Response_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetParameters_Response_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Sample_SetParameters_Response_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Sample_SetParameters_Response_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Sample_SetParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Sample_SetParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Sample_SetParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Sample_SetParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Sample_SetParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Sample_SetParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Sample_SetParameters_Response_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Sample_SetParameters_Response_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Sample_SetParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetParameters_Response_& instance_data) = 0;

            protected:
                Sample_SetParameters_Response_DataWriter () {};
                ~Sample_SetParameters_Response_DataWriter () {};
            private:
                Sample_SetParameters_Response_DataWriter (const Sample_SetParameters_Response_DataWriter &);
                Sample_SetParameters_Response_DataWriter & operator = (const Sample_SetParameters_Response_DataWriter &);
            };

            class  Sample_SetParameters_Response_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Sample_SetParameters_Response_DataReader_ptr _ptr_type;
                typedef Sample_SetParameters_Response_DataReader_var _var_type;

                static Sample_SetParameters_Response_DataReader_ptr _duplicate (Sample_SetParameters_Response_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetParameters_Response_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetParameters_Response_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetParameters_Response_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetParameters_Response_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetParameters_Response_& instance) = 0;

            protected:
                Sample_SetParameters_Response_DataReader () {};
                ~Sample_SetParameters_Response_DataReader () {};
            private:
                Sample_SetParameters_Response_DataReader (const Sample_SetParameters_Response_DataReader &);
                Sample_SetParameters_Response_DataReader & operator = (const Sample_SetParameters_Response_DataReader &);
            };

            class  Sample_SetParameters_Response_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Sample_SetParameters_Response_DataReaderView_ptr _ptr_type;
                typedef Sample_SetParameters_Response_DataReaderView_var _var_type;

                static Sample_SetParameters_Response_DataReaderView_ptr _duplicate (Sample_SetParameters_Response_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Sample_SetParameters_Response_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Sample_SetParameters_Response_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Sample_SetParameters_Response_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Sample_SetParameters_Response_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Sample_SetParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Sample_SetParameters_Response_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Sample_SetParameters_Response_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Sample_SetParameters_Response_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Sample_SetParameters_Response_& instance) = 0;

            protected:
                Sample_SetParameters_Response_DataReaderView () {};
                ~Sample_SetParameters_Response_DataReaderView () {};
            private:
                Sample_SetParameters_Response_DataReaderView (const Sample_SetParameters_Response_DataReaderView &);
                Sample_SetParameters_Response_DataReaderView & operator = (const Sample_SetParameters_Response_DataReaderView &);
            };
        }

    }

}

#endif
