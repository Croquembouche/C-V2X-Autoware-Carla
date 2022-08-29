// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/TimeChangeDetails.idl
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
#include "v2x_msg/msg/detail/time_change_details__struct.h"
#include "v2x_msg/msg/detail/time_change_details__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__time_change_details__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("v2x_msg.msg._time_change_details.TimeChangeDetails", full_classname_dest, 50) == 0);
  }
  v2x_msg__msg__TimeChangeDetails * ros_message = _ros_message;
  {  // startime
    PyObject * field = PyObject_GetAttrString(_pymsg, "startime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->startime = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // minendtime
    PyObject * field = PyObject_GetAttrString(_pymsg, "minendtime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->minendtime = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // maxendtime
    PyObject * field = PyObject_GetAttrString(_pymsg, "maxendtime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maxendtime = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // likelytime
    PyObject * field = PyObject_GetAttrString(_pymsg, "likelytime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->likelytime = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidence");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->confidence = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // nexttime
    PyObject * field = PyObject_GetAttrString(_pymsg, "nexttime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nexttime = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__time_change_details__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TimeChangeDetails */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._time_change_details");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TimeChangeDetails");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__TimeChangeDetails * ros_message = (v2x_msg__msg__TimeChangeDetails *)raw_ros_message;
  {  // startime
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->startime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "startime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // minendtime
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->minendtime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "minendtime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maxendtime
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->maxendtime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maxendtime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // likelytime
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->likelytime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "likelytime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confidence
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nexttime
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->nexttime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nexttime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
