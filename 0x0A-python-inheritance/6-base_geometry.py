#!/usr/bin/python3
"""
6-base_geometry.py
"""


class BaseGeometry():
    """returns error if area() is not implemented"""
    def area(self):
        raise Exception("area() is not implemented")
