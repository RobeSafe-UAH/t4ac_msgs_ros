// Generated by gencpp from file t4ac_msgs/GT_3D_Object.msg
// DO NOT EDIT!


#ifndef T4AC_MSGS_MESSAGE_GT_3D_OBJECT_H
#define T4AC_MSGS_MESSAGE_GT_3D_OBJECT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <vision_msgs/BoundingBox2D.h>
#include <geometry_msgs/Point.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace t4ac_msgs
{
template <class ContainerAllocator>
struct GT_3D_Object_
{
  typedef GT_3D_Object_<ContainerAllocator> Type;

  GT_3D_Object_()
    : type()
    , object_id(0)
    , alpha(0.0)
    , bounding_box_2D()
    , position()
    , dimensions()
    , rotation_z(0.0)
    , velocity()  {
    }
  GT_3D_Object_(const ContainerAllocator& _alloc)
    : type(_alloc)
    , object_id(0)
    , alpha(0.0)
    , bounding_box_2D(_alloc)
    , position(_alloc)
    , dimensions(_alloc)
    , rotation_z(0.0)
    , velocity(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef uint32_t _object_id_type;
  _object_id_type object_id;

   typedef float _alpha_type;
  _alpha_type alpha;

   typedef  ::vision_msgs::BoundingBox2D_<ContainerAllocator>  _bounding_box_2D_type;
  _bounding_box_2D_type bounding_box_2D;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _dimensions_type;
  _dimensions_type dimensions;

   typedef float _rotation_z_type;
  _rotation_z_type rotation_z;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _velocity_type;
  _velocity_type velocity;





  typedef boost::shared_ptr< ::t4ac_msgs::GT_3D_Object_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::t4ac_msgs::GT_3D_Object_<ContainerAllocator> const> ConstPtr;

}; // struct GT_3D_Object_

typedef ::t4ac_msgs::GT_3D_Object_<std::allocator<void> > GT_3D_Object;

typedef boost::shared_ptr< ::t4ac_msgs::GT_3D_Object > GT_3D_ObjectPtr;
typedef boost::shared_ptr< ::t4ac_msgs::GT_3D_Object const> GT_3D_ObjectConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::t4ac_msgs::GT_3D_Object_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::t4ac_msgs::GT_3D_Object_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::t4ac_msgs::GT_3D_Object_<ContainerAllocator1> & lhs, const ::t4ac_msgs::GT_3D_Object_<ContainerAllocator2> & rhs)
{
  return lhs.type == rhs.type &&
    lhs.object_id == rhs.object_id &&
    lhs.alpha == rhs.alpha &&
    lhs.bounding_box_2D == rhs.bounding_box_2D &&
    lhs.position == rhs.position &&
    lhs.dimensions == rhs.dimensions &&
    lhs.rotation_z == rhs.rotation_z &&
    lhs.velocity == rhs.velocity;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::t4ac_msgs::GT_3D_Object_<ContainerAllocator1> & lhs, const ::t4ac_msgs::GT_3D_Object_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace t4ac_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::t4ac_msgs::GT_3D_Object_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::t4ac_msgs::GT_3D_Object_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::t4ac_msgs::GT_3D_Object_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::t4ac_msgs::GT_3D_Object_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::t4ac_msgs::GT_3D_Object_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::t4ac_msgs::GT_3D_Object_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::t4ac_msgs::GT_3D_Object_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a9f4454fb74d3bba35f61e774becadfb";
  }

  static const char* value(const ::t4ac_msgs::GT_3D_Object_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa9f4454fb74d3bbaULL;
  static const uint64_t static_value2 = 0x35f61e774becadfbULL;
};

template<class ContainerAllocator>
struct DataType< ::t4ac_msgs::GT_3D_Object_<ContainerAllocator> >
{
  static const char* value()
  {
    return "t4ac_msgs/GT_3D_Object";
  }

  static const char* value(const ::t4ac_msgs::GT_3D_Object_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::t4ac_msgs::GT_3D_Object_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Techs4AgeCar project\n"
"\n"
"string type                                 # Object type if it is known (car, pedestrian, truck, etc)\n"
"uint32 object_id                            # Id assign to an object\n"
"float32 alpha                               # Observation angle of object\n"
"vision_msgs/BoundingBox2D bounding_box_2D   # Object 2D bounding box\n"
"geometry_msgs/Point position                # Center of the object\n"
"geometry_msgs/Vector3 dimensions            # Object dimensions (l, w, h)\n"
"float32 rotation_z                          # Object rotation along z axis\n"
"geometry_msgs/Vector3 velocity              # Velocity of the object related to the ego vehicle\n"
"================================================================================\n"
"MSG: vision_msgs/BoundingBox2D\n"
"# A 2D bounding box that can be rotated about its center.\n"
"# All dimensions are in pixels, but represented using floating-point\n"
"#   values to allow sub-pixel precision. If an exact pixel crop is required\n"
"#   for a rotated bounding box, it can be calculated using Bresenham's line\n"
"#   algorithm.\n"
"\n"
"# The 2D position (in pixels) and orientation of the bounding box center.\n"
"geometry_msgs/Pose2D center\n"
"\n"
"# The size (in pixels) of the bounding box surrounding the object relative\n"
"#   to the pose of its center.\n"
"float64 size_x\n"
"float64 size_y\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose2D\n"
"# Deprecated\n"
"# Please use the full 3D pose.\n"
"\n"
"# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.\n"
"\n"
"# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.\n"
"\n"
"\n"
"# This expresses a position and orientation on a 2D manifold.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 theta\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::t4ac_msgs::GT_3D_Object_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::t4ac_msgs::GT_3D_Object_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.object_id);
      stream.next(m.alpha);
      stream.next(m.bounding_box_2D);
      stream.next(m.position);
      stream.next(m.dimensions);
      stream.next(m.rotation_z);
      stream.next(m.velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GT_3D_Object_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::t4ac_msgs::GT_3D_Object_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::t4ac_msgs::GT_3D_Object_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "object_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.object_id);
    s << indent << "alpha: ";
    Printer<float>::stream(s, indent + "  ", v.alpha);
    s << indent << "bounding_box_2D: ";
    s << std::endl;
    Printer< ::vision_msgs::BoundingBox2D_<ContainerAllocator> >::stream(s, indent + "  ", v.bounding_box_2D);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "dimensions: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.dimensions);
    s << indent << "rotation_z: ";
    Printer<float>::stream(s, indent + "  ", v.rotation_z);
    s << indent << "velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // T4AC_MSGS_MESSAGE_GT_3D_OBJECT_H
