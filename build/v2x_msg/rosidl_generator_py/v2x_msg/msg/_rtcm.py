# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/RTCM.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RTCM(type):
    """Metaclass of message 'RTCM'."""

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
                'v2x_msg.msg.RTCM')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rtcm
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rtcm
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rtcm
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rtcm
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rtcm

            from v2x_msg.msg import FullPositionVector
            if FullPositionVector.__class__._TYPE_SUPPORT is None:
                FullPositionVector.__class__.__import_type_support__()

            from v2x_msg.msg import RTCMheader
            if RTCMheader.__class__._TYPE_SUPPORT is None:
                RTCMheader.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RTCM(metaclass=Metaclass_RTCM):
    """Message class 'RTCM'."""

    __slots__ = [
        '_msgcnt',
        '_rev',
        '_timestamp',
        '_anchorpoint',
        '_rtcmheader',
        '_msgs',
    ]

    _fields_and_field_types = {
        'msgcnt': 'int64',
        'rev': 'int64',
        'timestamp': 'int64',
        'anchorpoint': 'v2x_msg/FullPositionVector',
        'rtcmheader': 'v2x_msg/RTCMheader',
        'msgs': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'FullPositionVector'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'RTCMheader'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.msgcnt = kwargs.get('msgcnt', int())
        self.rev = kwargs.get('rev', int())
        self.timestamp = kwargs.get('timestamp', int())
        from v2x_msg.msg import FullPositionVector
        self.anchorpoint = kwargs.get('anchorpoint', FullPositionVector())
        from v2x_msg.msg import RTCMheader
        self.rtcmheader = kwargs.get('rtcmheader', RTCMheader())
        self.msgs = kwargs.get('msgs', [])

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
        if self.msgcnt != other.msgcnt:
            return False
        if self.rev != other.rev:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.anchorpoint != other.anchorpoint:
            return False
        if self.rtcmheader != other.rtcmheader:
            return False
        if self.msgs != other.msgs:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def msgcnt(self):
        """Message field 'msgcnt'."""
        return self._msgcnt

    @msgcnt.setter
    def msgcnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msgcnt' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'msgcnt' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._msgcnt = value

    @property
    def rev(self):
        """Message field 'rev'."""
        return self._rev

    @rev.setter
    def rev(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rev' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'rev' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._rev = value

    @property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'timestamp' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._timestamp = value

    @property
    def anchorpoint(self):
        """Message field 'anchorpoint'."""
        return self._anchorpoint

    @anchorpoint.setter
    def anchorpoint(self, value):
        if __debug__:
            from v2x_msg.msg import FullPositionVector
            assert \
                isinstance(value, FullPositionVector), \
                "The 'anchorpoint' field must be a sub message of type 'FullPositionVector'"
        self._anchorpoint = value

    @property
    def rtcmheader(self):
        """Message field 'rtcmheader'."""
        return self._rtcmheader

    @rtcmheader.setter
    def rtcmheader(self, value):
        if __debug__:
            from v2x_msg.msg import RTCMheader
            assert \
                isinstance(value, RTCMheader), \
                "The 'rtcmheader' field must be a sub message of type 'RTCMheader'"
        self._rtcmheader = value

    @property
    def msgs(self):
        """Message field 'msgs'."""
        return self._msgs

    @msgs.setter
    def msgs(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'msgs' field must be a set or sequence and each value of type 'str'"
        self._msgs = value
