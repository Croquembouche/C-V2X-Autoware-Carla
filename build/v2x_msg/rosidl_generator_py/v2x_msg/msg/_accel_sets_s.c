// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/AccelSets.idl
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
#include "v2x_msg/msg/detail/accel_sets__struct.h"
#include "v2x_msg/msg/detail/accel_sets__functions.h"

bool v2x_msg__msg__acceleration_set4_way__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__acceleration_set4_way__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__confidence_set__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__confidence_set__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__accel_sets__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
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
    assert(strncmp("v2x_msg.msg._accel_sets.AccelSets", full_classname_dest, 33) == 0);
  }
  v2x_msg__msg__AccelSets * ros_message = _ros_message;
  {  // angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__acceleration_set4_way__convert_from_py(field, &ros_message->angle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // certaccelthres
    PyObject * field = PyObject_GetAttrString(_pymsg, "certaccelthres");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->certaccelthres = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // yawratecon
    PyObject * field = PyObject_GetAttrString(_pymsg, "yawratecon");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->yawratecon = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // hozaccelcon
    PyObject * field = PyObject_GetAttrString(_pymsg, "hozaccelcon");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hozaccelcon = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // confidenceset
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidenceset");
    if (!field) {
      return false;
    }
    if (!v2x_msg__msg__confidence_set__convert_from_py(field, &ros_message->confidenceset)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__accel_sets__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AccelSets */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._accel_sets");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AccelSets");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__AccelSets * ros_message = (v2x_msg__msg__AccelSets *)raw_ros_message;
  {  // angle
    PyObject * field = NULL;
    field = v2x_msg__msg__acceleration_set4_way__convert_to_py(&ros_message->angle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // certaccelthres
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->certaccelthres);
    {
      int rc = PyObject_SetAttrString(_pymessage, "certaccelthres", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yawratecon
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->yawratecon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yawratecon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hozaccelcon
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->hozaccelcon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hozaccelcon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confidenceset
    PyObject * field = NULL;
    field = v2x_msg__msg__confidence_set__convert_to_py(&ros_message->confidenceset);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "confidenceset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
