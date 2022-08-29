// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "v2x_msg/msg/detail/node_offset_point_xy__struct.h"
#include "v2x_msg/msg/detail/node_offset_point_xy__functions.h"

bool v2x_msg__msg__node_xy22b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__node_xy22b__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__node_xy24b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__node_xy24b__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__node_xy26b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__node_xy26b__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__node_xy28b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__node_xy28b__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__node_xy32b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__node_xy32b__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__nodellmd64b__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__nodellmd64b__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__node_offset_point_xy__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("v2x_msg.msg._node_offset_point_xy.NodeOffsetPointXY", full_classname_dest, 51) == 0);
  }
  v2x_msg__msg__NodeOffsetPointXY * ros_message = _ros_message;
  {  // nodexy1
    PyObject * field = PyObject_GetAttrString(_pymsg, "nodexy1");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__node_xy22b__convert_from_py(field, &ros_message->nodexy1)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // nodexy2
    PyObject * field = PyObject_GetAttrString(_pymsg, "nodexy2");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__node_xy24b__convert_from_py(field, &ros_message->nodexy2)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // nodexy3
    PyObject * field = PyObject_GetAttrString(_pymsg, "nodexy3");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__node_xy26b__convert_from_py(field, &ros_message->nodexy3)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // nodexy4
    PyObject * field = PyObject_GetAttrString(_pymsg, "nodexy4");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__node_xy28b__convert_from_py(field, &ros_message->nodexy4)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // nodexy5
    PyObject * field = PyObject_GetAttrString(_pymsg, "nodexy5");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__node_xy32b__convert_from_py(field, &ros_message->nodexy5)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // nodelatlon
    PyObject * field = PyObject_GetAttrString(_pymsg, "nodelatlon");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__nodellmd64b__convert_from_py(field, &ros_message->nodelatlon)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__node_offset_point_xy__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NodeOffsetPointXY */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._node_offset_point_xy");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NodeOffsetPointXY");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__NodeOffsetPointXY * ros_message = (v2x_msg__msg__NodeOffsetPointXY *)raw_ros_message;
  {  // nodexy1
    PyObject * field = NULL;
    field = v2x_msg__msg__node_xy22b__convert_to_py(&ros_message->nodexy1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nodexy1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nodexy2
    PyObject * field = NULL;
    field = v2x_msg__msg__node_xy24b__convert_to_py(&ros_message->nodexy2);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nodexy2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nodexy3
    PyObject * field = NULL;
    field = v2x_msg__msg__node_xy26b__convert_to_py(&ros_message->nodexy3);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nodexy3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nodexy4
    PyObject * field = NULL;
    field = v2x_msg__msg__node_xy28b__convert_to_py(&ros_message->nodexy4);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nodexy4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nodexy5
    PyObject * field = NULL;
    field = v2x_msg__msg__node_xy32b__convert_to_py(&ros_message->nodexy5);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nodexy5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nodelatlon
    PyObject * field = NULL;
    field = v2x_msg__msg__nodellmd64b__convert_to_py(&ros_message->nodelatlon);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nodelatlon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
