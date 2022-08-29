# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/ApproachOrLane.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ApproachOrLane(type):
    """Metaclass of message 'ApproachOrLane'."""

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
            module = import_type_support('v2x_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'v2x_msg.msg.ApproachOrLane')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__approach_or_lane
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__approach_or_lane
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__approach_or_lane
            cls._TYPE_SUPPORT = module.type_support_msg__msg__approach_or_lane
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__approach_or_lane

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ApproachOrLane(metaclass=Metaclass_ApproachOrLane):
    """Message class 'ApproachOrLane'."""

    __slots__ = [
        '_approach',
        '_lane',
    ]

    _fields_and_field_types = {
        'approach': 'int64',
        'lane': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.approach = kwargs.get('approach', int())
        self.lane = kwargs.get('lane', int())

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
        if self.approach != other.approach:
            return False
        if self.lane != other.lane:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def approach(self):
        """Message field 'approach'."""
        return self._approach

    @approach.setter
    def approach(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'approach' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'approach' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._approach = value

    @property
    def lane(self):
        """Message field 'lane'."""
        return self._lane

    @lane.setter
    def lane(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'lane' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._lane = value
