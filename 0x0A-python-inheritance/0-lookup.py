#!/usr/bin/python3
"""module list of available attributes and methods of an object"""


def lookup(obj):
    """function that list the available attributes and methods

    Args:
        obj (object)

    Returns:
        list: attributes and methods list
    """
    return list(dir(obj))
