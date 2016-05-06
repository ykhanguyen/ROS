/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/ykha/catkin_ws_hydro/devel/.private/learning_actionlib/share/learning_actionlib/msg/AveragingGoal.msg
 *
 */


#ifndef LEARNING_ACTIONLIB_MESSAGE_AVERAGINGGOAL_H
#define LEARNING_ACTIONLIB_MESSAGE_AVERAGINGGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace learning_actionlib
{
template <class ContainerAllocator>
struct AveragingGoal_
{
  typedef AveragingGoal_<ContainerAllocator> Type;

  AveragingGoal_()
    : samples(0)  {
    }
  AveragingGoal_(const ContainerAllocator& _alloc)
    : samples(0)  {
    }



   typedef int32_t _samples_type;
  _samples_type samples;




  typedef boost::shared_ptr< ::learning_actionlib::AveragingGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::learning_actionlib::AveragingGoal_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct AveragingGoal_

typedef ::learning_actionlib::AveragingGoal_<std::allocator<void> > AveragingGoal;

typedef boost::shared_ptr< ::learning_actionlib::AveragingGoal > AveragingGoalPtr;
typedef boost::shared_ptr< ::learning_actionlib::AveragingGoal const> AveragingGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::learning_actionlib::AveragingGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::learning_actionlib::AveragingGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace learning_actionlib

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/hydro/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg'], 'learning_actionlib': ['/home/ykha/catkin_ws_hydro/devel/.private/learning_actionlib/share/learning_actionlib/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::learning_actionlib::AveragingGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::learning_actionlib::AveragingGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::learning_actionlib::AveragingGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::learning_actionlib::AveragingGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::learning_actionlib::AveragingGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::learning_actionlib::AveragingGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::learning_actionlib::AveragingGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "32c9b10ef9b253faa93b93f564762c8f";
  }

  static const char* value(const ::learning_actionlib::AveragingGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x32c9b10ef9b253faULL;
  static const uint64_t static_value2 = 0xa93b93f564762c8fULL;
};

template<class ContainerAllocator>
struct DataType< ::learning_actionlib::AveragingGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "learning_actionlib/AveragingGoal";
  }

  static const char* value(const ::learning_actionlib::AveragingGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::learning_actionlib::AveragingGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definition\n\
int32 samples\n\
";
  }

  static const char* value(const ::learning_actionlib::AveragingGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::learning_actionlib::AveragingGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.samples);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct AveragingGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::learning_actionlib::AveragingGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::learning_actionlib::AveragingGoal_<ContainerAllocator>& v)
  {
    s << indent << "samples: ";
    Printer<int32_t>::stream(s, indent + "  ", v.samples);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LEARNING_ACTIONLIB_MESSAGE_AVERAGINGGOAL_H