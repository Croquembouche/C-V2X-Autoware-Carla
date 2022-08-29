// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from v2x_msg:msg/Content.idl
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
#include "v2x_msg/msg/detail/content__struct.h"
#include "v2x_msg/msg/detail/content__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "v2x_msg/msg/detail/exit_service__functions.h"
#include "v2x_msg/msg/detail/generic_signage__functions.h"
#include "v2x_msg/msg/detail/itis_speed_limit__functions.h"
#include "v2x_msg/msg/detail/iti_scodesandtext__functions.h"
#include "v2x_msg/msg/detail/work_zone__functions.h"
// end nested array functions include
bool v2x_msg__msg__iti_scodesandtext__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__iti_scodesandtext__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__work_zone__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__work_zone__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__generic_signage__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__generic_signage__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__itis_speed_limit__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__itis_speed_limit__convert_to_py(void * raw_ros_message);
bool v2x_msg__msg__exit_service__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * v2x_msg__msg__exit_service__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool v2x_msg__msg__content__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[29];
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
    assert(strncmp("v2x_msg.msg._content.Content", full_classname_dest, 28) == 0);
  }
  v2x_msg__msg__Content * ros_message = _ros_message;
  {  // advisory
    PyObject * field = PyObject_GetAttrString(_pymsg, "advisory");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'advisory'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!v2x_msg__msg__ITIScodesandtext__Sequence__init(&(ros_message->advisory), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create v2x_msg__msg__ITIScodesandtext__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    v2x_msg__msg__ITIScodesandtext * dest = ros_message->advisory.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!v2x_msg__msg__iti_scodesandtext__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // workzone
    PyObject * field = PyObject_GetAttrString(_pymsg, "workzone");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'workzone'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!v2x_msg__msg__WorkZone__Sequence__init(&(ros_message->workzone), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create v2x_msg__msg__WorkZone__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    v2x_msg__msg__WorkZone * dest = ros_message->workzone.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!v2x_msg__msg__work_zone__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // genericsign
    PyObject * field = PyObject_GetAttrString(_pymsg, "genericsign");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'genericsign'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!v2x_msg__msg__GenericSignage__Sequence__init(&(ros_message->genericsign), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create v2x_msg__msg__GenericSignage__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    v2x_msg__msg__GenericSignage * dest = ros_message->genericsign.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!v2x_msg__msg__generic_signage__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // speedlimit
    PyObject * field = PyObject_GetAttrString(_pymsg, "speedlimit");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'speedlimit'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!v2x_msg__msg__ITISSpeedLimit__Sequence__init(&(ros_message->speedlimit), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create v2x_msg__msg__ITISSpeedLimit__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    v2x_msg__msg__ITISSpeedLimit * dest = ros_message->speedlimit.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!v2x_msg__msg__itis_speed_limit__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // exitservice
    PyObject * field = PyObject_GetAttrString(_pymsg, "exitservice");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'exitservice'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!v2x_msg__msg__ExitService__Sequence__init(&(ros_message->exitservice), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create v2x_msg__msg__ExitService__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    v2x_msg__msg__ExitService * dest = ros_message->exitservice.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!v2x_msg__msg__exit_service__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * v2x_msg__msg__content__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Content */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("v2x_msg.msg._content");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Content");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  v2x_msg__msg__Content * ros_message = (v2x_msg__msg__Content *)raw_ros_message;
  {  // advisory
    PyObject * field = NULL;
    size_t size = ros_message->advisory.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    v2x_msg__msg__ITIScodesandtext * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->advisory.data[i]);
      PyObject * pyitem = v2x_msg__msg__iti_scodesandtext__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "advisory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // workzone
    PyObject * field = NULL;
    size_t size = ros_message->workzone.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    v2x_msg__msg__WorkZone * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->workzone.data[i]);
      PyObject * pyitem = v2x_msg__msg__work_zone__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "workzone", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // genericsign
    PyObject * field = NULL;
    size_t size = ros_message->genericsign.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    v2x_msg__msg__GenericSignage * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->genericsign.data[i]);
      PyObject * pyitem = v2x_msg__msg__generic_signage__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "genericsign", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speedlimit
    PyObject * field = NULL;
    size_t size = ros_message->speedlimit.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    v2x_msg__msg__ITISSpeedLimit * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->speedlimit.data[i]);
      PyObject * pyitem = v2x_msg__msg__itis_speed_limit__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "speedlimit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // exitservice
    PyObject * field = NULL;
    size_t size = ros_message->exitservice.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    v2x_msg__msg__ExitService * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->exitservice.data[i]);
      PyObject * pyitem = v2x_msg__msg__exit_service__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "exitservice", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
