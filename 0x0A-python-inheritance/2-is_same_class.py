#!/usr/bin/python3
"""
2-is_same_class
check if an object is an instance of a specified class
"""


def is_same_class(obj, a_class):
    """returns True if obj is an instance of a_class else False"""
    return type(obj) == a_class
