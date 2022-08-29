// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/Object.idl
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
#include "v2x_msg/msg/detail/object__struct.h"
#include "v2x_msg/msg/detail/object__functions.h"

bool v2x_msg__msg__d_date_time__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__d_date_time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[27];
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
    assert(strncmp("v2x_msg.msg._object.Object", full_classname_dest, 26) == 0);
  }
  v2x_msg__msg__Object * ros_message = _ros_message;
  {  // obdist
    PyObject * field = PyObject_GetAttrString(_pymsg, "obdist");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->obdist = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // obdirect
    PyObject * field = PyObject_GetAttrString(_pymsg, "obdirect");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->obdirect = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // datetime
    PyObject * field = PyObject_GetAttrString(_pymsg, "datetime");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__d_date_time__convert_from_py(field, &ros_message->datetime)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__object__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Object */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._object");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Object");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__Object * ros_message = (v2x_msg__msg__Object *)raw_ros_message;
  {  // obdist
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->obdist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obdist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obdirect
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->obdirect);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obdirect", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // datetime
    PyObject * field = NULL;
    field = v2x_msg__msg__d_date_time__convert_to_py(&ros_message->datetime);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "datetime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
