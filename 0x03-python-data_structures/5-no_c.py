#!/usr/bin/python3
def no_c(my_string):
    nc = ""
    for i in my_string:
        if i != 'c' and i != 'C':
            nc += i
    return nc
