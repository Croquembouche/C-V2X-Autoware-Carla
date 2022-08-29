// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msg:msg/SignalRequestPackage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msg/msg/detail/signal_request_package__rosidl_typesupport_introspection_c.h"
#include "v2x_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msg/msg/detail/signal_request_package__functions.h"
#include "v2x_msg/msg/detail/signal_request_package__struct.h"


// Include directives for member types
// Member `signalrequest`
#include "v2x_msg/msg/signal_request.h"
// Member `signalrequest`
#include "v2x_msg/msg/detail/signal_request__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msg__msg__SignalRequestPackage__init(message_memory);
}

void SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_fini_function(void * message_memory)
{
  v2x_msg__msg__SignalRequestPackage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_member_array[4] = {
  {
    "signalrequest",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__SignalRequestPackage, signalrequest),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "minute",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__SignalRequestPackage, minute),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "second",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__SignalRequestPackage, second),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msg__msg__SignalRequestPackage, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_members = {
  "v2x_msg__msg",  // message namespace
  "SignalRequestPackage",  // message name
  4,  // number of fields
  sizeof(v2x_msg__msg__SignalRequestPackage),
  SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_member_array,  // message members
  SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_init_function,  // function to initialize message memory (memory has to be allocated)
  SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_type_support_handle = {
  0,
  &SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, SignalRequestPackage)() {
  SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msg, msg, SignalRequest)();
  if (!SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_type_support_handle.typesupport_identifier) {
    SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
