#!/usr/bin/python3
"""
1-my_list
A class that inherits form list
"""


class MyList(list):
    """print a sorted list(ascending sort)"""
    def print_sorted(self):
        print(sorted(self))
