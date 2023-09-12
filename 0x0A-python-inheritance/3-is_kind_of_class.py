#!/usr/bin/python3
"""
3-is_kind_of_class
Checks if an object is an instance of a pecified class
or its subclass
"""


def is_kind_of_class(obj, a_class):
    """returns true if obj isinstance(), otherwise returns false"""
    return isinstance(obj, a_class)
