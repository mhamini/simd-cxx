#ifndef _HELLODCPS_H_
#define _HELLODCPS_H_


#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "hello.h"

namespace swatch {

    struct hello;
    
    class  helloTypeSupportInterface;
    
    typedef helloTypeSupportInterface * helloTypeSupportInterface_ptr;
    typedef DDS_DCPSInterface_var <helloTypeSupportInterface> helloTypeSupportInterface_var;
    typedef DDS_DCPSInterface_out <helloTypeSupportInterface> helloTypeSupportInterface_out;
    
    class  helloDataWriter;
    
    typedef helloDataWriter * helloDataWriter_ptr;
    typedef DDS_DCPSInterface_var <helloDataWriter> helloDataWriter_var;
    typedef DDS_DCPSInterface_out <helloDataWriter> helloDataWriter_out;
    
    class  helloDataReader;
    
    typedef helloDataReader * helloDataReader_ptr;
    typedef DDS_DCPSInterface_var <helloDataReader> helloDataReader_var;
    typedef DDS_DCPSInterface_out <helloDataReader> helloDataReader_out;
    
    typedef DDS_DCPSUFLSeq <hello> helloSeq;
    typedef DDS_DCPSSequence_var <helloSeq> helloSeq_var;
    typedef DDS_DCPSSequence_out <helloSeq> helloSeq_out;
    class  helloTypeSupportInterface
    :
      virtual public DDS::TypeSupport
    { 
    public:
       typedef helloTypeSupportInterface_ptr _ptr_type;
       typedef helloTypeSupportInterface_var _var_type;
    
       static helloTypeSupportInterface_ptr _duplicate (helloTypeSupportInterface_ptr obj);
       DDS::Boolean _local_is_a (const char * id);
    
       static helloTypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
       static helloTypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
       static helloTypeSupportInterface_ptr _nil () { return NULL; }
       static const char * _local_id;
       helloTypeSupportInterface_ptr _this () { return this; }
    
    
    protected:
       helloTypeSupportInterface () {};
       ~helloTypeSupportInterface () {};
    private:
       helloTypeSupportInterface (const helloTypeSupportInterface &) {};
       helloTypeSupportInterface & operator = (const helloTypeSupportInterface &);
    };
    
    
    class  helloDataWriter
    :
       virtual public DDS::DataWriter
    { 
    public:
       typedef helloDataWriter_ptr _ptr_type;
       typedef helloDataWriter_var _var_type;
    
       static helloDataWriter_ptr _duplicate (helloDataWriter_ptr obj);
       DDS::Boolean _local_is_a (const char * id);
    
       static helloDataWriter_ptr _narrow (DDS::Object_ptr obj);
       static helloDataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
       static helloDataWriter_ptr _nil () { return NULL; }
       static const char * _local_id;
       helloDataWriter_ptr _this () { return this; }
    
       virtual DDS::InstanceHandle_t register_instance (const hello& instance_data) = 0;
       virtual DDS::InstanceHandle_t register_instance_w_timestamp (const hello& instance_data, const DDS::Time_t& source_timestamp) = 0;
       virtual DDS::ReturnCode_t unregister_instance (const hello& instance_data, DDS::InstanceHandle_t handle) = 0;
       virtual DDS::ReturnCode_t unregister_instance_w_timestamp (const hello& instance_data, DDS::InstanceHandle_t handle, const DDS::Time_t& source_timestamp) = 0;
       virtual DDS::ReturnCode_t write (const hello& instance_data, DDS::InstanceHandle_t handle) = 0;
       virtual DDS::ReturnCode_t write_w_timestamp (const hello& instance_data, DDS::InstanceHandle_t handle, const DDS::Time_t& source_timestamp) = 0;
       virtual DDS::ReturnCode_t dispose (const hello& instance_data, DDS::InstanceHandle_t handle) = 0;
       virtual DDS::ReturnCode_t dispose_w_timestamp (const hello& instance_data, DDS::InstanceHandle_t handle, const DDS::Time_t& source_timestamp) = 0;
       virtual DDS::ReturnCode_t writedispose (const hello& instance_data, DDS::InstanceHandle_t handle) = 0;
       virtual DDS::ReturnCode_t writedispose_w_timestamp (const hello& instance_data, DDS::InstanceHandle_t handle, const DDS::Time_t& source_timestamp) = 0;
       virtual DDS::ReturnCode_t get_key_value (hello& key_holder, DDS::InstanceHandle_t handle) = 0;
       virtual DDS::InstanceHandle_t lookup_instance (const hello& instance_data) = 0;
    
    protected:
       helloDataWriter () {};
       ~helloDataWriter () {};
    private:
       helloDataWriter (const helloDataWriter &) {};
       helloDataWriter & operator = (const helloDataWriter &);
    };
    
    
    class  helloDataReader
    :
       virtual public DDS::DataReader
    { 
    public:
       typedef helloDataReader_ptr _ptr_type;
       typedef helloDataReader_var _var_type;
    
       static helloDataReader_ptr _duplicate (helloDataReader_ptr obj);
       DDS::Boolean _local_is_a (const char * id);
    
       static helloDataReader_ptr _narrow (DDS::Object_ptr obj);
       static helloDataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
       static helloDataReader_ptr _nil () { return NULL; }
       static const char * _local_id;
       helloDataReader_ptr _this () { return this; }
    
       virtual DDS::ReturnCode_t read (helloSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
       virtual DDS::ReturnCode_t take (helloSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
       virtual DDS::ReturnCode_t read_w_condition (helloSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
       virtual DDS::ReturnCode_t take_w_condition (helloSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
       virtual DDS::ReturnCode_t read_next_sample (hello& received_data, DDS::SampleInfo& sample_info) = 0;
       virtual DDS::ReturnCode_t take_next_sample (hello& received_data, DDS::SampleInfo& sample_info) = 0;
       virtual DDS::ReturnCode_t read_instance (helloSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
       virtual DDS::ReturnCode_t take_instance (helloSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
       virtual DDS::ReturnCode_t read_next_instance (helloSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
       virtual DDS::ReturnCode_t take_next_instance (helloSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::SampleStateMask sample_states, DDS::ViewStateMask view_states, DDS::InstanceStateMask instance_states) = 0;
       virtual DDS::ReturnCode_t read_next_instance_w_condition (helloSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::ReadCondition_ptr a_condition) = 0;
       virtual DDS::ReturnCode_t take_next_instance_w_condition (helloSeq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::InstanceHandle_t a_handle, DDS::ReadCondition_ptr a_condition) = 0;
       virtual DDS::ReturnCode_t return_loan (helloSeq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
       virtual DDS::ReturnCode_t get_key_value (hello& key_holder, DDS::InstanceHandle_t handle) = 0;
       virtual DDS::InstanceHandle_t lookup_instance (const hello& instance) = 0;
    
    protected:
       helloDataReader () {};
       ~helloDataReader () {};
    private:
       helloDataReader (const helloDataReader &) {};
       helloDataReader & operator = (const helloDataReader &);
    };
    
}

#endif
