// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aichallenge_scoring_msgs:msg/Score.idl
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
#include "aichallenge_scoring_msgs/msg/detail/score__struct.h"
#include "aichallenge_scoring_msgs/msg/detail/score__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool aichallenge_scoring_msgs__msg__score__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("aichallenge_scoring_msgs.msg._score.Score", full_classname_dest, 41) == 0);
  }
  aichallenge_scoring_msgs__msg__Score * ros_message = _ros_message;
  {  // distance_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_score = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_duration
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_duration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_duration = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // task3_duration
    PyObject * field = PyObject_GetAttrString(_pymsg, "task3_duration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->task3_duration = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_distance_score_maxed_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_distance_score_maxed_out");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_distance_score_maxed_out = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_outside_lane
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_outside_lane");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_outside_lane = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_doing_task3
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_doing_task3");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_doing_task3 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_timeout
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_timeout");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_timeout = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_stopped
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_stopped");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_stopped = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_exceeded_speed_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_exceeded_speed_limit");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_exceeded_speed_limit = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_finished_task1
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_finished_task1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_finished_task1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_finished_task2
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_finished_task2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_finished_task2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_finished_task3
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_finished_task3");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_finished_task3 = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aichallenge_scoring_msgs__msg__score__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Score */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aichallenge_scoring_msgs.msg._score");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Score");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aichallenge_scoring_msgs__msg__Score * ros_message = (aichallenge_scoring_msgs__msg__Score *)raw_ros_message;
  {  // distance_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_duration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_duration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_duration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // task3_duration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->task3_duration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "task3_duration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_distance_score_maxed_out
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_distance_score_maxed_out ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_distance_score_maxed_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_outside_lane
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_outside_lane ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_outside_lane", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_doing_task3
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_doing_task3 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_doing_task3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_timeout
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_timeout ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_timeout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_stopped
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_stopped ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_stopped", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_exceeded_speed_limit
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_exceeded_speed_limit ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_exceeded_speed_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_finished_task1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_finished_task1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_finished_task1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_finished_task2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_finished_task2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_finished_task2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_finished_task3
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_finished_task3 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_finished_task3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
