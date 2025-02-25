// Generated by gencpp from file rover/ToggleIMURepresentationRequest.msg
// DO NOT EDIT!


#ifndef ROVER_MESSAGE_TOGGLEIMUREPRESENTATIONREQUEST_H
#define ROVER_MESSAGE_TOGGLEIMUREPRESENTATIONREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rover
{
template <class ContainerAllocator>
struct ToggleIMURepresentationRequest_
{
  typedef ToggleIMURepresentationRequest_<ContainerAllocator> Type;

  ToggleIMURepresentationRequest_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , w(0.0)  {
    }
  ToggleIMURepresentationRequest_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , w(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;

   typedef double _w_type;
  _w_type w;





  typedef boost::shared_ptr< ::rover::ToggleIMURepresentationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rover::ToggleIMURepresentationRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ToggleIMURepresentationRequest_

typedef ::rover::ToggleIMURepresentationRequest_<std::allocator<void> > ToggleIMURepresentationRequest;

typedef boost::shared_ptr< ::rover::ToggleIMURepresentationRequest > ToggleIMURepresentationRequestPtr;
typedef boost::shared_ptr< ::rover::ToggleIMURepresentationRequest const> ToggleIMURepresentationRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rover::ToggleIMURepresentationRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rover::ToggleIMURepresentationRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rover::ToggleIMURepresentationRequest_<ContainerAllocator1> & lhs, const ::rover::ToggleIMURepresentationRequest_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z &&
    lhs.w == rhs.w;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rover::ToggleIMURepresentationRequest_<ContainerAllocator1> & lhs, const ::rover::ToggleIMURepresentationRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rover

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rover::ToggleIMURepresentationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rover::ToggleIMURepresentationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rover::ToggleIMURepresentationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rover::ToggleIMURepresentationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rover::ToggleIMURepresentationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rover::ToggleIMURepresentationRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rover::ToggleIMURepresentationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a779879fadf0160734f906b8c19c7004";
  }

  static const char* value(const ::rover::ToggleIMURepresentationRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa779879fadf01607ULL;
  static const uint64_t static_value2 = 0x34f906b8c19c7004ULL;
};

template<class ContainerAllocator>
struct DataType< ::rover::ToggleIMURepresentationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rover/ToggleIMURepresentationRequest";
  }

  static const char* value(const ::rover::ToggleIMURepresentationRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rover::ToggleIMURepresentationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::rover::ToggleIMURepresentationRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rover::ToggleIMURepresentationRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.w);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ToggleIMURepresentationRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rover::ToggleIMURepresentationRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rover::ToggleIMURepresentationRequest_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
    s << indent << "w: ";
    Printer<double>::stream(s, indent + "  ", v.w);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROVER_MESSAGE_TOGGLEIMUREPRESENTATIONREQUEST_H
