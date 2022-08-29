# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/DataParameters.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DataParameters(type):
    """Metaclass of message 'DataParameters'."""

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
                'v2x_msg.msg.DataParameters')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__data_parameters
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__data_parameters
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__data_parameters
            cls._TYPE_SUPPORT = module.type_support_msg__msg__data_parameters
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__data_parameters

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DataParameters(metaclass=Metaclass_DataParameters):
    """Message class 'DataParameters'."""

    __slots__ = [
        '_processmethod',
        '_processagency',
        '_lastcheckeddate',
        '_geoidused',
    ]

    _fields_and_field_types = {
        'processmethod': 'string',
        'processagency': 'string',
        'lastcheckeddate': 'string',
        'geoidused': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.processmethod = kwargs.get('processmethod', str())
        self.processagency = kwargs.get('processagency', str())
        self.lastcheckeddate = kwargs.get('lastcheckeddate', str())
        self.geoidused = kwargs.get('geoidused', str())

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
        if self.processmethod != other.processmethod:
            return False
        if self.processagency != other.processagency:
            return False
        if self.lastcheckeddate != other.lastcheckeddate:
            return False
        if self.geoidused != other.geoidused:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def processmethod(self):
        """Message field 'processmethod'."""
        return self._processmethod

    @processmethod.setter
    def processmethod(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'processmethod' field must be of type 'str'"
        self._processmethod = value

    @property
    def processagency(self):
        """Message field 'processagency'."""
        return self._processagency

    @processagency.setter
    def processagency(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'processagency' field must be of type 'str'"
        self._processagency = value

    @property
    def lastcheckeddate(self):
        """Message field 'lastcheckeddate'."""
        return self._lastcheckeddate

    @lastcheckeddate.setter
    def lastcheckeddate(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lastcheckeddate' field must be of type 'str'"
        self._lastcheckeddate = value

    @property
    def geoidused(self):
        """Message field 'geoidused'."""
        return self._geoidused

    @geoidused.setter
    def geoidused(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'geoidused' field must be of type 'str'"
        self._geoidused = value
