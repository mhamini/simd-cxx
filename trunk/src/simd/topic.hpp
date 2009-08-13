#ifndef AC_SIMD_TOPIC_HPP
#define AC_SIMD_TOPIC_HPP

#include <string>

// -- Boost Include
#include <boost/shared_ptr.hpp>

#include <simd/traits.hpp>
#include <simd/runtime.hpp>
#include <simd/qos.hpp>

namespace simd {
  
  template <typename T> 
  class Topic;
}

template <typename T> 
class simd::Topic {
public:
  
  Topic(const std::string& name, const std::string type_name) 
    : name_(name)
  
  {
    simd::TopicQos qos;
    this->init(name, type_name, qos);
  }

  Topic(const std::string& name) 
    : name_(name) 
  {
    simd::TopicQos qos;
    std::string type_name(ts_.get_type_name());
    this->init(name, type_name, qos);
  }
  
  Topic(const std::string& name, const simd::TopicQos& qos)
    : name_(name),
      qos_(qos)
  {
    std::string type_name(ts_.get_type_name());
    this->init(name, type_name, qos);
  }

  Topic(const std::string& name, 
	const std::string& type_name, 
	const simd::TopicQos& qos)
    : name_(name),
      qos_(qos)
  {
    this->init(name, type_name, qos);
  }


  ~Topic() {
    boost::shared_ptr<DDS::DomainParticipant> dp = 
      simd::Runtime::instance()->get_participant();
    dp->delete_topic(t_);
  }

private:
  void init(const std::string& name, 
	    const std::string type_name,
	    const simd::TopicQos& qos)
  {
    boost::shared_ptr<DDS::DomainParticipant> dp = 
      simd::Runtime::instance()->get_participant();
    
    ts_.register_type(dp.get(),
		      type_name.c_str());
      
    t_ = dp->create_topic(name.c_str(),
			  type_name.c_str(),
			  qos,
			  0,
			  DDS::ANY_STATUS);
  } 
    
public:
  simd::TopicQos get_qos() { return qos_; }
  std::string get_name() { return name_; } 

  // TODO: Add other methods
  // void set_listener();
    
  //private:
  //  friend template <typename W, typename D> class ::simd::Datawriter;
public:
  DDS::Topic* get_dds_topic() { return t_; }
  
private:
  std::string name_;
  simd::TopicQos qos_;
  typename simd::topic_type_support<T>::type ts_;
  DDS::Topic* t_;

};


#endif /* AC_SIMD_TOPIC_HPP */