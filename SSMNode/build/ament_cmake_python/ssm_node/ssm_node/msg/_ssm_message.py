# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ssm_node:msg/SsmMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SsmMessage(type):
    """Metaclass of message 'SsmMessage'."""

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
            module = import_type_support('ssm_node')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ssm_node.msg.SsmMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ssm_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ssm_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ssm_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ssm_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ssm_message

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SsmMessage(metaclass=Metaclass_SsmMessage):
    """Message class 'SsmMessage'."""

    __slots__ = [
        '_msg_type',
        '_res_type',
        '_cmd_type',
        '_name',
        '_suid',
        '_ssize',
        '_hsize',
        '_time',
        '_save_time',
    ]

    _fields_and_field_types = {
        'msg_type': 'uint64',
        'res_type': 'uint64',
        'cmd_type': 'int16',
        'name': 'string',
        'suid': 'int32',
        'ssize': 'uint64',
        'hsize': 'uint64',
        'time': 'double',
        'save_time': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.msg_type = kwargs.get('msg_type', int())
        self.res_type = kwargs.get('res_type', int())
        self.cmd_type = kwargs.get('cmd_type', int())
        self.name = kwargs.get('name', str())
        self.suid = kwargs.get('suid', int())
        self.ssize = kwargs.get('ssize', int())
        self.hsize = kwargs.get('hsize', int())
        self.time = kwargs.get('time', float())
        self.save_time = kwargs.get('save_time', float())

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
        if self.msg_type != other.msg_type:
            return False
        if self.res_type != other.res_type:
            return False
        if self.cmd_type != other.cmd_type:
            return False
        if self.name != other.name:
            return False
        if self.suid != other.suid:
            return False
        if self.ssize != other.ssize:
            return False
        if self.hsize != other.hsize:
            return False
        if self.time != other.time:
            return False
        if self.save_time != other.save_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def msg_type(self):
        """Message field 'msg_type'."""
        return self._msg_type

    @msg_type.setter
    def msg_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msg_type' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'msg_type' field must be an unsigned integer in [0, 18446744073709551615]"
        self._msg_type = value

    @builtins.property
    def res_type(self):
        """Message field 'res_type'."""
        return self._res_type

    @res_type.setter
    def res_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'res_type' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'res_type' field must be an unsigned integer in [0, 18446744073709551615]"
        self._res_type = value

    @builtins.property
    def cmd_type(self):
        """Message field 'cmd_type'."""
        return self._cmd_type

    @cmd_type.setter
    def cmd_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd_type' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'cmd_type' field must be an integer in [-32768, 32767]"
        self._cmd_type = value

    @builtins.property
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

    @builtins.property
    def suid(self):
        """Message field 'suid'."""
        return self._suid

    @suid.setter
    def suid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'suid' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'suid' field must be an integer in [-2147483648, 2147483647]"
        self._suid = value

    @builtins.property
    def ssize(self):
        """Message field 'ssize'."""
        return self._ssize

    @ssize.setter
    def ssize(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ssize' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'ssize' field must be an unsigned integer in [0, 18446744073709551615]"
        self._ssize = value

    @builtins.property
    def hsize(self):
        """Message field 'hsize'."""
        return self._hsize

    @hsize.setter
    def hsize(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hsize' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'hsize' field must be an unsigned integer in [0, 18446744073709551615]"
        self._hsize = value

    @builtins.property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time = value

    @builtins.property
    def save_time(self):
        """Message field 'save_time'."""
        return self._save_time

    @save_time.setter
    def save_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'save_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'save_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._save_time = value
