// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/MAP.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/map__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/map__functions.h"
#include "v2x_msg/msg/detail/map__struct.h"


// Include directives for member types
// Member `intersections`
#include "v2x_msg/msg/intersection_geometry.h"
// Member `intersections`
#include "v2x_msg/msg/detail/intersection_geometry__rosidl_typesupport_introspection_c.h"
// Member `roadsegments`
#include "v2x_msg/msg/road_segment.h"
// Member `roadsegments`
#include "v2x_msg/msg/detail/road_segment__rosidl_typesupport_introspection_c.h"
// Member `dataparameters`
#include "v2x_msg/msg/data_parameters.h"
// Member `dataparameters`
#include "v2x_msg/msg/detail/data_parameters__rosidl_typesupport_introspection_c.h"
// Member `restrictionlist`
#include "v2x_msg/msg/restriction_class_assignment.h"
// Member `restrictionlist`
#include "v2x_msg/msg/detail/restriction_class_assignment__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MAP__rosidl_typesupport_introspection_c__MAP_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__MAP__init(message_memory);
}

void MAP__rosidl_typesupport_introspection_c__MAP_fini_function(void * message_memory)
{
  v2x_msg__msg__MAP__fini(message_memory);
}

size_t MAP__rosidl_typesupport_introspection_c__size_function__IntersectionGeometry__intersections(
  const void * untyped_member)
{
  const v2x_msg__msg__IntersectionGeometry__Sequence * member =
    (const v2x_msg__msg__IntersectionGeometry__Sequence *)(untyped_member);
  return member->size;
}

const void * MAP__rosidl_typesupport_introspection_c__get_const_function__IntersectionGeometry__intersections(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__IntersectionGeometry__Sequence * member =
    (const v2x_msg__msg__IntersectionGeometry__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MAP__rosidl_typesupport_introspection_c__get_function__IntersectionGeometry__intersections(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__IntersectionGeometry__Sequence * member =
    (v2x_msg__msg__IntersectionGeometry__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MAP__rosidl_typesupport_introspection_c__resize_function__IntersectionGeometry__intersections(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__IntersectionGeometry__Sequence * member =
    (v2x_msg__msg__IntersectionGeometry__Sequence *)(untyped_member);
  v2x_msg__msg__IntersectionGeometry__Sequence__fini(member);
  return v2x_msg__msg__IntersectionGeometry__Sequence__init(member, size);
}

size_t MAP__rosidl_typesupport_introspection_c__size_function__RoadSegment__roadsegments(
  const void * untyped_member)
{
  const v2x_msg__msg__RoadSegment__Sequence * member =
    (const v2x_msg__msg__RoadSegment__Sequence *)(untyped_member);
  return member->size;
}

const void * MAP__rosidl_typesupport_introspection_c__get_const_function__RoadSegment__roadsegments(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__RoadSegment__Sequence * member =
    (const v2x_msg__msg__RoadSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MAP__rosidl_typesupport_introspection_c__get_function__RoadSegment__roadsegments(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__RoadSegment__Sequence * member =
    (v2x_msg__msg__RoadSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MAP__rosidl_typesupport_introspection_c__resize_function__RoadSegment__roadsegments(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__RoadSegment__Sequence * member =
    (v2x_msg__msg__RoadSegment__Sequence *)(untyped_member);
  v2x_msg__msg__RoadSegment__Sequence__fini(member);
  return v2x_msg__msg__RoadSegment__Sequence__init(member, size);
}

size_t MAP__rosidl_typesupport_introspection_c__size_function__RestrictionClassAssignment__restrictionlist(
  const void * untyped_member)
{
  const v2x_msg__msg__RestrictionClassAssignment__Sequence * member =
    (const v2x_msg__msg__RestrictionClassAssignment__Sequence *)(untyped_member);
  return member->size;
}

const void * MAP__rosidl_typesupport_introspection_c__get_const_function__RestrictionClassAssignment__restrictionlist(
  const void * untyped_member, size_t index)
{
  const v2x_msg__msg__RestrictionClassAssignment__Sequence * member =
    (const v2x_msg__msg__RestrictionClassAssignment__Sequence *)(untyped_member);
  return &member->data[index];
}

void * MAP__rosidl_typesupport_introspection_c__get_function__RestrictionClassAssignment__restrictionlist(
  void * untyped_member, size_t index)
{
  v2x_msg__msg__RestrictionClassAssignment__Sequence * member =
    (v2x_msg__msg__RestrictionClassAssignment__Sequence *)(untyped_member);
  return &member->data[index];
}

bool MAP__rosidl_typesupport_introspection_c__resize_function__RestrictionClassAssignment__restrictionlist(
  void * untyped_member, size_t size)
{
  v2x_msg__msg__RestrictionClassAssignment__Sequence * member =
    (v2x_msg__msg__RestrictionClassAssignment__Sequence *)(untyped_member);
  v2x_msg__msg__RestrictionClassAssignment__Sequence__fini(member);
  return v2x_msg__msg__RestrictionClassAssignment__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember MAP__rosidl_typesupport_introspection_c__MAP_message_member_array[8] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__MAP, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msgissuerevision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__MAP, msgissuerevision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "layertype",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__MAP, layertype),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "layerid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__MAP, layerid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "intersections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__MAP, intersections),  // bytes offset in struct
    NULL,  // default value
    MAP__rosidl_typesupport_introspection_c__size_function__IntersectionGeometry__intersections,  // size() function pointer
    MAP__rosidl_typesupport_introspection_c__get_const_function__IntersectionGeometry__intersections,  // get_const(index) function pointer
    MAP__rosidl_typesupport_introspection_c__get_function__IntersectionGeometry__intersections,  // get(index) function pointer
    MAP__rosidl_typesupport_introspection_c__resize_function__IntersectionGeometry__intersections  // resize(index) function pointer
  },
  {
    "roadsegments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__MAP, roadsegments),  // bytes offset in struct
    NULL,  // default value
    MAP__rosidl_typesupport_introspection_c__size_function__RoadSegment__roadsegments,  // size() function pointer
    MAP__rosidl_typesupport_introspection_c__get_const_function__RoadSegment__roadsegments,  // get_const(index) function pointer
    MAP__rosidl_typesupport_introspection_c__get_function__RoadSegment__roadsegments,  // get(index) function pointer
    MAP__rosidl_typesupport_introspection_c__resize_function__RoadSegment__roadsegments  // resize(index) function pointer
  },
  {
    "dataparameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__MAP, dataparameters),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "restrictionlist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__MAP, restrictionlist),  // bytes offset in struct
    NULL,  // default value
    MAP__rosidl_typesupport_introspection_c__size_function__RestrictionClassAssignment__restrictionlist,  // size() function pointer
    MAP__rosidl_typesupport_introspection_c__get_const_function__RestrictionClassAssignment__restrictionlist,  // get_const(index) function pointer
    MAP__rosidl_typesupport_introspection_c__get_function__RestrictionClassAssignment__restrictionlist,  // get(index) function pointer
    MAP__rosidl_typesupport_introspection_c__resize_function__RestrictionClassAssignment__restrictionlist  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MAP__rosidl_typesupport_introspection_c__MAP_message_members = {
  "v2x_msg__msg",  // message namespace
  "MAP",  // message name
  8,  // number of fields
  sizeof(v2x_msg__msg__MAP),
  MAP__rosidl_typesupport_introspection_c__MAP_message_member_array,  // message members
  MAP__rosidl_typesupport_introspection_c__MAP_init_function,  // function to initialize message memory (memory has to be allocated)
  MAP__rosidl_typesupport_introspection_c__MAP_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MAP__rosidl_typesupport_introspection_c__MAP_message_type_support_handle = {
  0,
  &MAP__rosidl_typesupport_introspection_c__MAP_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, MAP)() {
  MAP__rosidl_typesupport_introspection_c__MAP_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, IntersectionGeometry)();
  MAP__rosidl_typesupport_introspection_c__MAP_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, RoadSegment)();
  MAP__rosidl_typesupport_introspection_c__MAP_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, DataParameters)();
  MAP__rosidl_typesupport_introspection_c__MAP_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, RestrictionClassAssignment)();
  if (!MAP__rosidl_typesupport_introspection_c__MAP_message_type_support_handle.typesupport_identifier) {
    MAP__rosidl_typesupport_introspection_c__MAP_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MAP__rosidl_typesupport_introspection_c__MAP_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
