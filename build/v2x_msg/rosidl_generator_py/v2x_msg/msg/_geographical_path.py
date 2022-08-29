# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_msg:msg/GeographicalPath.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GeographicalPath(type):
    """Metaclass of message 'GeographicalPath'."""

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
                'v2x_msg.msg.GeographicalPath')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__geographical_path
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__geographical_path
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__geographical_path
            cls._TYPE_SUPPORT = module.type_support_msg__msg__geographical_path
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__geographical_path

            from v2x_msg.msg import Description
            if Description.__class__._TYPE_SUPPORT is None:
                Description.__class__.__import_type_support__()

            from v2x_msg.msg import Position3D
            if Position3D.__class__._TYPE_SUPPORT is None:
                Position3D.__class__.__import_type_support__()

            from v2x_msg.msg import RoadSegmentReferenceID
            if RoadSegmentReferenceID.__class__._TYPE_SUPPORT is None:
                RoadSegmentReferenceID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GeographicalPath(metaclass=Metaclass_GeographicalPath):
    """Message class 'GeographicalPath'."""

    __slots__ = [
        '_name',
        '_id',
        '_anchor',
        '_lanewidth',
        '_directionality',
        '_closedpath',
        '_direction',
        '_description',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'id': 'v2x_msg/RoadSegmentReferenceID',
        'anchor': 'v2x_msg/Position3D',
        'lanewidth': 'int64',
        'directionality': 'int64',
        'closedpath': 'boolean',
        'direction': 'string',
        'description': 'v2x_msg/Description',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'RoadSegmentReferenceID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'Position3D'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_msg', 'msg'], 'Description'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        from v2x_msg.msg import RoadSegmentReferenceID
        self.id = kwargs.get('id', RoadSegmentReferenceID())
        from v2x_msg.msg import Position3D
        self.anchor = kwargs.get('anchor', Position3D())
        self.lanewidth = kwargs.get('lanewidth', int())
        self.directionality = kwargs.get('directionality', int())
        self.closedpath = kwargs.get('closedpath', bool())
        self.direction = kwargs.get('direction', str())
        from v2x_msg.msg import Description
        self.description = kwargs.get('description', Description())

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
        if self.name != other.name:
            return False
        if self.id != other.id:
            return False
        if self.anchor != other.anchor:
            return False
        if self.lanewidth != other.lanewidth:
            return False
        if self.directionality != other.directionality:
            return False
        if self.closedpath != other.closedpath:
            return False
        if self.direction != other.direction:
            return False
        if self.description != other.description:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            from v2x_msg.msg import RoadSegmentReferenceID
            assert \
                isinstance(value, RoadSegmentReferenceID), \
                "The 'id' field must be a sub message of type 'RoadSegmentReferenceID'"
        self._id = value

    @property
    def anchor(self):
        """Message field 'anchor'."""
        return self._anchor

    @anchor.setter
    def anchor(self, value):
        if __debug__:
            from v2x_msg.msg import Position3D
            assert \
                isinstance(value, Position3D), \
                "The 'anchor' field must be a sub message of type 'Position3D'"
        self._anchor = value

    @property
    def lanewidth(self):
        """Message field 'lanewidth'."""
        return self._lanewidth

    @lanewidth.setter
    def lanewidth(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanewidth' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'lanewidth' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._lanewidth = value

    @property
    def directionality(self):
        """Message field 'directionality'."""
        return self._directionality

    @directionality.setter
    def directionality(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'directionality' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'directionality' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._directionality = value

    @property
    def closedpath(self):
        """Message field 'closedpath'."""
        return self._closedpath

    @closedpath.setter
    def closedpath(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'closedpath' field must be of type 'bool'"
        self._closedpath = value

    @property
    def direction(self):
        """Message field 'direction'."""
        return self._direction

    @direction.setter
    def direction(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'direction' field must be of type 'str'"
        self._direction = value

    @property
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if __debug__:
            from v2x_msg.msg import Description
            assert \
                isinstance(value, Description), \
                "The 'description' field must be a sub message of type 'Description'"
        self._description = value
