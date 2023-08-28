#!/usr/bin/python3
def safe_print_list(my_list=[], x=0):
    elm = 0
    try:
        for i in range(x):
            print("{}".format(my_list[i]), end="")
            elm += 1
        print()
    except IndexError:
        print()
    return elm
