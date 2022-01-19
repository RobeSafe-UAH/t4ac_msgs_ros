// Generated by gencpp from file t4ac_msgs/Traffic_Sign.msg
// DO NOT EDIT!


#ifndef T4AC_MSGS_MESSAGE_TRAFFIC_SIGN_H
#define T4AC_MSGS_MESSAGE_TRAFFIC_SIGN_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseWithCovariance.h>
#include <geometry_msgs/PoseWithCovariance.h>

namespace t4ac_msgs
{
template <class ContainerAllocator>
struct Traffic_Sign_
{
  typedef Traffic_Sign_<ContainerAllocator> Type;

  Traffic_Sign_()
    : type()
    , lanes()
    , x1(0.0)
    , y1(0.0)
    , x2(0.0)
    , y2(0.0)
    , local_pose()
    , global_pose()  {
    }
  Traffic_Sign_(const ContainerAllocator& _alloc)
    : type(_alloc)
    , lanes(_alloc)
    , x1(0.0)
    , y1(0.0)
    , x2(0.0)
    , y2(0.0)
    , local_pose(_alloc)
    , global_pose(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _lanes_type;
  _lanes_type lanes;

   typedef double _x1_type;
  _x1_type x1;

   typedef double _y1_type;
  _y1_type y1;

   typedef double _x2_type;
  _x2_type x2;

   typedef double _y2_type;
  _y2_type y2;

   typedef  ::geometry_msgs::PoseWithCovariance_<ContainerAllocator>  _local_pose_type;
  _local_pose_type local_pose;

   typedef  ::geometry_msgs::PoseWithCovariance_<ContainerAllocator>  _global_pose_type;
  _global_pose_type global_pose;





  typedef boost::shared_ptr< ::t4ac_msgs::Traffic_Sign_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::t4ac_msgs::Traffic_Sign_<ContainerAllocator> const> ConstPtr;

}; // struct Traffic_Sign_

typedef ::t4ac_msgs::Traffic_Sign_<std::allocator<void> > Traffic_Sign;

typedef boost::shared_ptr< ::t4ac_msgs::Traffic_Sign > Traffic_SignPtr;
typedef boost::shared_ptr< ::t4ac_msgs::Traffic_Sign const> Traffic_SignConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::t4ac_msgs::Traffic_Sign_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::t4ac_msgs::Traffic_Sign_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::t4ac_msgs::Traffic_Sign_<ContainerAllocator1> & lhs, const ::t4ac_msgs::Traffic_Sign_<ContainerAllocator2> & rhs)
{
  return lhs.type == rhs.type &&
    lhs.lanes == rhs.lanes &&
    lhs.x1 == rhs.x1 &&
    lhs.y1 == rhs.y1 &&
    lhs.x2 == rhs.x2 &&
    lhs.y2 == rhs.y2 &&
    lhs.local_pose == rhs.local_pose &&
    lhs.global_pose == rhs.global_pose;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::t4ac_msgs::Traffic_Sign_<ContainerAllocator1> & lhs, const ::t4ac_msgs::Traffic_Sign_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace t4ac_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::t4ac_msgs::Traffic_Sign_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::t4ac_msgs::Traffic_Sign_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::t4ac_msgs::Traffic_Sign_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::t4ac_msgs::Traffic_Sign_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::t4ac_msgs::Traffic_Sign_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::t4ac_msgs::Traffic_Sign_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::t4ac_msgs::Traffic_Sign_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6e8d6f52df972c44ccb99a01b6e684d4";
  }

  static const char* value(const ::t4ac_msgs::Traffic_Sign_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6e8d6f52df972c44ULL;
  static const uint64_t static_value2 = 0xccb99a01b6e684d4ULL;
};

template<class ContainerAllocator>
struct DataType< ::t4ac_msgs::Traffic_Sign_<ContainerAllocator> >
{
  static const char* value()
  {
    return "t4ac_msgs/Traffic_Sign";
  }

  static const char* value(const ::t4ac_msgs::Traffic_Sign_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::t4ac_msgs::Traffic_Sign_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Techs4AgeCar project\n"
"\n"
"string type                                    # Traffic Sign type\n"
"uint8[] lanes                                  # Lanes involved\n"
"\n"
"float64   x1                                   # Top-left x coordinate\n"
"float64   y1                                   # Top-left y coordinate \n"
"float64   x2                                   # Bottom-right x coordinate\n"
"float64   y2                                   # Bottom-right y coordinate \n"
"geometry_msgs/PoseWithCovariance local_pose    # 3D Centroid x,y,z (Ego-vehicle frame)\n"
"geometry_msgs/PoseWithCovariance global_pose   # 3D Centroid x,y,z (Map frame)\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseWithCovariance\n"
"# This represents a pose in free space with uncertainty.\n"
"\n"
"Pose pose\n"
"\n"
"# Row-major representation of the 6x6 covariance matrix\n"
"# The orientation parameters use a fixed-axis representation.\n"
"# In order, the parameters are:\n"
"# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n"
"float64[36] covariance\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::t4ac_msgs::Traffic_Sign_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::t4ac_msgs::Traffic_Sign_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.lanes);
      stream.next(m.x1);
      stream.next(m.y1);
      stream.next(m.x2);
      stream.next(m.y2);
      stream.next(m.local_pose);
      stream.next(m.global_pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Traffic_Sign_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::t4ac_msgs::Traffic_Sign_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::t4ac_msgs::Traffic_Sign_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "lanes[]" << std::endl;
    for (size_t i = 0; i < v.lanes.size(); ++i)
    {
      s << indent << "  lanes[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.lanes[i]);
    }
    s << indent << "x1: ";
    Printer<double>::stream(s, indent + "  ", v.x1);
    s << indent << "y1: ";
    Printer<double>::stream(s, indent + "  ", v.y1);
    s << indent << "x2: ";
    Printer<double>::stream(s, indent + "  ", v.x2);
    s << indent << "y2: ";
    Printer<double>::stream(s, indent + "  ", v.y2);
    s << indent << "local_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseWithCovariance_<ContainerAllocator> >::stream(s, indent + "  ", v.local_pose);
    s << indent << "global_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseWithCovariance_<ContainerAllocator> >::stream(s, indent + "  ", v.global_pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // T4AC_MSGS_MESSAGE_TRAFFIC_SIGN_H
