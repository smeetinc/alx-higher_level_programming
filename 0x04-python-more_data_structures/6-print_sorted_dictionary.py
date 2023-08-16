#!/usr/bin/python3
def print_sorted_dictionary(a_dictionary):
    l_ordy = list(a_dictionary.keys())
    l_ordy.sort()
    for i in l_ordy:
        print("{}: {}".format(i, a_dictionary.get(i)))
