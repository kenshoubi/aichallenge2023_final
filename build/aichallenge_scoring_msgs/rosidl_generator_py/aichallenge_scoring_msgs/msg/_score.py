# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aichallenge_scoring_msgs:msg/Score.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Score(type):
    """Metaclass of message 'Score'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('aichallenge_scoring_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aichallenge_scoring_msgs.msg.Score')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__score
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__score
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__score
            cls._TYPE_SUPPORT = module.type_support_msg__msg__score
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__score

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Score(metaclass=Metaclass_Score):
    """Message class 'Score'."""

    __slots__ = [
        '_distance_score',
        '_total_duration',
        '_task3_duration',
        '_is_distance_score_maxed_out',
        '_is_outside_lane',
        '_is_doing_task3',
        '_is_timeout',
        '_is_stopped',
        '_has_exceeded_speed_limit',
        '_has_finished_task1',
        '_has_finished_task2',
        '_has_finished_task3',
    ]

    _fields_and_field_types = {
        'distance_score': 'float',
        'total_duration': 'float',
        'task3_duration': 'float',
        'is_distance_score_maxed_out': 'boolean',
        'is_outside_lane': 'boolean',
        'is_doing_task3': 'boolean',
        'is_timeout': 'boolean',
        'is_stopped': 'boolean',
        'has_exceeded_speed_limit': 'boolean',
        'has_finished_task1': 'boolean',
        'has_finished_task2': 'boolean',
        'has_finished_task3': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.distance_score = kwargs.get('distance_score', float())
        self.total_duration = kwargs.get('total_duration', float())
        self.task3_duration = kwargs.get('task3_duration', float())
        self.is_distance_score_maxed_out = kwargs.get('is_distance_score_maxed_out', bool())
        self.is_outside_lane = kwargs.get('is_outside_lane', bool())
        self.is_doing_task3 = kwargs.get('is_doing_task3', bool())
        self.is_timeout = kwargs.get('is_timeout', bool())
        self.is_stopped = kwargs.get('is_stopped', bool())
        self.has_exceeded_speed_limit = kwargs.get('has_exceeded_speed_limit', bool())
        self.has_finished_task1 = kwargs.get('has_finished_task1', bool())
        self.has_finished_task2 = kwargs.get('has_finished_task2', bool())
        self.has_finished_task3 = kwargs.get('has_finished_task3', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.distance_score != other.distance_score:
            return False
        if self.total_duration != other.total_duration:
            return False
        if self.task3_duration != other.task3_duration:
            return False
        if self.is_distance_score_maxed_out != other.is_distance_score_maxed_out:
            return False
        if self.is_outside_lane != other.is_outside_lane:
            return False
        if self.is_doing_task3 != other.is_doing_task3:
            return False
        if self.is_timeout != other.is_timeout:
            return False
        if self.is_stopped != other.is_stopped:
            return False
        if self.has_exceeded_speed_limit != other.has_exceeded_speed_limit:
            return False
        if self.has_finished_task1 != other.has_finished_task1:
            return False
        if self.has_finished_task2 != other.has_finished_task2:
            return False
        if self.has_finished_task3 != other.has_finished_task3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def distance_score(self):
        """Message field 'distance_score'."""
        return self._distance_score

    @distance_score.setter
    def distance_score(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_score' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_score' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_score = value

    @builtins.property
    def total_duration(self):
        """Message field 'total_duration'."""
        return self._total_duration

    @total_duration.setter
    def total_duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_duration' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'total_duration' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._total_duration = value

    @builtins.property
    def task3_duration(self):
        """Message field 'task3_duration'."""
        return self._task3_duration

    @task3_duration.setter
    def task3_duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'task3_duration' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'task3_duration' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._task3_duration = value

    @builtins.property
    def is_distance_score_maxed_out(self):
        """Message field 'is_distance_score_maxed_out'."""
        return self._is_distance_score_maxed_out

    @is_distance_score_maxed_out.setter
    def is_distance_score_maxed_out(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_distance_score_maxed_out' field must be of type 'bool'"
        self._is_distance_score_maxed_out = value

    @builtins.property
    def is_outside_lane(self):
        """Message field 'is_outside_lane'."""
        return self._is_outside_lane

    @is_outside_lane.setter
    def is_outside_lane(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_outside_lane' field must be of type 'bool'"
        self._is_outside_lane = value

    @builtins.property
    def is_doing_task3(self):
        """Message field 'is_doing_task3'."""
        return self._is_doing_task3

    @is_doing_task3.setter
    def is_doing_task3(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_doing_task3' field must be of type 'bool'"
        self._is_doing_task3 = value

    @builtins.property
    def is_timeout(self):
        """Message field 'is_timeout'."""
        return self._is_timeout

    @is_timeout.setter
    def is_timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_timeout' field must be of type 'bool'"
        self._is_timeout = value

    @builtins.property
    def is_stopped(self):
        """Message field 'is_stopped'."""
        return self._is_stopped

    @is_stopped.setter
    def is_stopped(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_stopped' field must be of type 'bool'"
        self._is_stopped = value

    @builtins.property
    def has_exceeded_speed_limit(self):
        """Message field 'has_exceeded_speed_limit'."""
        return self._has_exceeded_speed_limit

    @has_exceeded_speed_limit.setter
    def has_exceeded_speed_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_exceeded_speed_limit' field must be of type 'bool'"
        self._has_exceeded_speed_limit = value

    @builtins.property
    def has_finished_task1(self):
        """Message field 'has_finished_task1'."""
        return self._has_finished_task1

    @has_finished_task1.setter
    def has_finished_task1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_finished_task1' field must be of type 'bool'"
        self._has_finished_task1 = value

    @builtins.property
    def has_finished_task2(self):
        """Message field 'has_finished_task2'."""
        return self._has_finished_task2

    @has_finished_task2.setter
    def has_finished_task2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_finished_task2' field must be of type 'bool'"
        self._has_finished_task2 = value

    @builtins.property
    def has_finished_task3(self):
        """Message field 'has_finished_task3'."""
        return self._has_finished_task3

    @has_finished_task3.setter
    def has_finished_task3(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_finished_task3' field must be of type 'bool'"
        self._has_finished_task3 = value
