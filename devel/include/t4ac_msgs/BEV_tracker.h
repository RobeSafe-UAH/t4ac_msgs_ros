// Generated by gencpp from file t4ac_msgs/BEV_tracker.msg
// DO NOT EDIT!


#ifndef T4AC_MSGS_MESSAGE_BEV_TRACKER_H
#define T4AC_MSGS_MESSAGE_BEV_TRACKER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace t4ac_msgs
{
template <class ContainerAllocator>
struct BEV_tracker_
{
  typedef BEV_tracker_<ContainerAllocator> Type;

  BEV_tracker_()
    : type()
    , object_id(0)
    , x(0.0)
    , y(0.0)
    , w(0.0)
    , l(0.0)
    , o(0.0)  {
    }
  BEV_tracker_(const ContainerAllocator& _alloc)
    : type(_alloc)
    , object_id(0)
    , x(0.0)
    , y(0.0)
    , w(0.0)
    , l(0.0)
    , o(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef uint16_t _object_id_type;
  _object_id_type object_id;

   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _w_type;
  _w_type w;

   typedef double _l_type;
  _l_type l;

   typedef double _o_type;
  _o_type o;





  typedef boost::shared_ptr< ::t4ac_msgs::BEV_tracker_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::t4ac_msgs::BEV_tracker_<ContainerAllocator> const> ConstPtr;

}; // struct BEV_tracker_

typedef ::t4ac_msgs::BEV_tracker_<std::allocator<void> > BEV_tracker;

typedef boost::shared_ptr< ::t4ac_msgs::BEV_tracker > BEV_trackerPtr;
typedef boost::shared_ptr< ::t4ac_msgs::BEV_tracker const> BEV_trackerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::t4ac_msgs::BEV_tracker_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::t4ac_msgs::BEV_tracker_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::t4ac_msgs::BEV_tracker_<ContainerAllocator1> & lhs, const ::t4ac_msgs::BEV_tracker_<ContainerAllocator2> & rhs)
{
  return lhs.type == rhs.type &&
    lhs.object_id == rhs.object_id &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.w == rhs.w &&
    lhs.l == rhs.l &&
    lhs.o == rhs.o;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::t4ac_msgs::BEV_tracker_<ContainerAllocator1> & lhs, const ::t4ac_msgs::BEV_tracker_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace t4ac_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::t4ac_msgs::BEV_tracker_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::t4ac_msgs::BEV_tracker_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::t4ac_msgs::BEV_tracker_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::t4ac_msgs::BEV_tracker_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::t4ac_msgs::BEV_tracker_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::t4ac_msgs::BEV_tracker_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::t4ac_msgs::BEV_tracker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c5b962defcda9cb823d2edafcdf55aca";
  }

  static const char* value(const ::t4ac_msgs::BEV_tracker_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc5b962defcda9cb8ULL;
  static const uint64_t static_value2 = 0x23d2edafcdf55acaULL;
};

template<class ContainerAllocator>
struct DataType< ::t4ac_msgs::BEV_tracker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "t4ac_msgs/BEV_tracker";
  }

  static const char* value(const ::t4ac_msgs::BEV_tracker_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::t4ac_msgs::BEV_tracker_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Techs4AgeCar project\n"
"\n"
"string type      # Object type\n"
"uint16 object_id # Object ID\n"
"\n"
"float64   x      # BEV x centroid\n"
"float64   y      # BEV y centroid \n"
"float64   w      # BEV width of the object\n"
"float64   l      # BEV length of the object\n"
"float64   o      # Object orientation\n"
"\n"
"\n"
;
  }

  static const char* value(const ::t4ac_msgs::BEV_tracker_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::t4ac_msgs::BEV_tracker_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.object_id);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.w);
      stream.next(m.l);
      stream.next(m.o);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BEV_tracker_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::t4ac_msgs::BEV_tracker_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::t4ac_msgs::BEV_tracker_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "object_id: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.object_id);
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "w: ";
    Printer<double>::stream(s, indent + "  ", v.w);
    s << indent << "l: ";
    Printer<double>::stream(s, indent + "  ", v.l);
    s << indent << "o: ";
    Printer<double>::stream(s, indent + "  ", v.o);
  }
};

} // namespace message_operations
} // namespace ros

#endif // T4AC_MSGS_MESSAGE_BEV_TRACKER_H
