# -*- coding: utf-8 -*-

# Generated by afwdev generate afw

import requests
import json

def add_yearMonthDuration_date(session, arg1, arg2):
    '''
    Add duration

    Add date arg1 to yearMonthDuration arg2 and return the date result.

    Parameters:

        arg1 (date):

        arg2 (yearMonthDuration):

    Returns:
    date: 
    '''

    request = session.Request()

    action = {
        "function": "add_yearMonthDuration<date>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def at_least_one_member_of_date(session, list1, list2):
    '''
    Checks for at least one value in common

    Returns boolean true if at least one value in date list1 is in date
    list2.

    Parameters:

        list1 (list): The first list.

        list2 (list): The second list.

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "at_least_one_member_of<date>",
        "list1": list1,
        "list2": list2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def bag_date(session, values=None):
    '''
    Makes a list from values

    Takes any number of date values and returns a list of list.

    Parameters:

        values (list):

    Returns:
    list: 
    '''

    request = session.Request()

    action = {
        "function": "bag<date>"
    }

    if values != None:
        action['values'] = values

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def bag_size_date(session, value):
    '''
    Returns the number of values in a bag

    This returns the integer number of values in list.

    Parameters:

        value (list):

    Returns:
    integer: 
    '''

    request = session.Request()

    action = {
        "function": "bag_size<date>",
        "value": value
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def date(session, value):
    '''
    Convert to data type date

    Converts value to data type date returning date result.

    Parameters:

        value (): Value to convert

    Returns:
    date: Converted value
    '''

    request = session.Request()

    action = {
        "function": "date",
        "value": value
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def eq_date(session, arg1, arg2):
    '''
    Checks for equal

    Determine if date arg1 is equal to the value of arg2 converted to the
    data type of arg1 then return the boolean result. Use "eqx" ("===")
    instead if you want false to be returned if arg1 and arg2's data type
    don't match.

    Parameters:

        arg1 (date):

        arg2 ():

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "eq<date>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def eqx_date(session, arg1, arg2):
    '''
    Checks for equal and type

    Determine if for date arg1 is equal to the value and data type of arg2
    then return the boolean result. Use "eq" ("==") instead if you want arg2
    to be converted to the data type of arg1 before comparison.

    Parameters:

        arg1 (date):

        arg2 ():

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "eqx<date>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def ge_date(session, arg1, arg2):
    '''
    Checks for greater than or equal

    Checks for date arg1 is greater than or equal to date arg2 and return the
    boolean result.
    
    If a date value does not include a time-zone value, then the local
    time-zone value will be assigned.

    Parameters:

        arg1 (date):

        arg2 (date):

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "ge<date>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def gt_date(session, arg1, arg2):
    '''
    Checks for greater than

    Checks for date arg1 is greater than date arg2 and return the boolean
    result.
    
    If a date value does not include a time-zone value, then the local
    time-zone value will be assigned.

    Parameters:

        arg1 (date):

        arg2 (date):

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "gt<date>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def intersection_date(session, list1, list2):
    '''
    Returns intersection of two lists

    Returns a list of date with the values that are common to both list of
    date list1 and list2.

    Parameters:

        list1 (list): The first list.

        list2 (list): The second list.

    Returns:
    list: 
    '''

    request = session.Request()

    action = {
        "function": "intersection<date>",
        "list1": list1,
        "list2": list2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def is_date(session, value):
    '''
    Checks whether value is dataType date

    Checks whether value is dataType date and return the boolean result.

    Parameters:

        value (): Value to check

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "is<date>",
        "value": value
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def is_in_date(session, value, list):
    '''
    Checks whether a value is in a list

    Checks whether date value is in list of date list and returns the boolean
    result.

    Parameters:

        value (date):

        list (list):

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "is_in<date>",
        "value": value,
        "list": list
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def le_date(session, arg1, arg2):
    '''
    Checks for less than or equal

    Checks for date arg1 is less than or equal to date arg2 and return the
    boolean result.
    
    If a date value does not include a time-zone value, then the local
    time-zone value will be assigned.

    Parameters:

        arg1 (date):

        arg2 ():

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "le<date>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def lt_date(session, arg1, arg2):
    '''
    Checks for less than

    Checks for date arg1 is less that date arg2 and return the boolean
    result.
    
    If a date value does not include a time-zone value, then the local
    time-zone value will be assigned.

    Parameters:

        arg1 (date):

        arg2 (date):

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "lt<date>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def max_date(session, values):
    '''
    Maximum value

    Return the date value that is greater than or equal to the others..
    
    If a date value does not include a time-zone value, then the local
    time-zone value will be assigned.

    Parameters:

        values (date):

    Returns:
    date: 
    '''

    request = session.Request()

    action = {
        "function": "max<date>",
        "values": values
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def min_date(session, values):
    '''
    Minimum value

    Return the date value that is less than or equal to the others..
    
    If a date value does not include a time-zone value, then the local
    time-zone value will be assigned.

    Parameters:

        values (date):

    Returns:
    date: 
    '''

    request = session.Request()

    action = {
        "function": "min<date>",
        "values": values
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def ne_date(session, arg1, arg2):
    '''
    Checks for not equal

    Determine if date arg1 is not equal to the value of arg2 converted to the
    data type of arg1 then return the boolean result. Use "nex" ("!==")
    instead if you want true to be returned if arg1 and arg2's data type
    don't match.

    Parameters:

        arg1 (date):

        arg2 ():

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "ne<date>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def nex_date(session, arg1, arg2):
    '''
    Checks for not equal value or type

    Determine if for date arg1 is not equal to the value or data type of arg2
    then return the boolean result. Use "ne" ("!=") instead if you want arg2
    to be converted to the data type of arg1 before comparison.

    Parameters:

        arg1 (date):

        arg2 ():

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "nex<date>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def one_and_only_date(session, list):
    '''
    Converts a one value list to a date value

    This converts a list of date values that contains one value to a single
    date value.

    Parameters:

        list (list):

    Returns:
    date: 
    '''

    request = session.Request()

    action = {
        "function": "one_and_only<date>",
        "list": list
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def set_equals_date(session, list1, list2):
    '''
    Checks whether two lists are subsets of each other

    Returns boolean true if date list1 and date list2 are subsets of each
    other and return the boolean result.

    Parameters:

        list1 (list):

        list2 (list):

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "set_equals<date>",
        "list1": list1,
        "list2": list2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def subset_date(session, list1, list2):
    '''
    Determines if the first list is a subset of second list

    Returns boolean true if the unique values in date list1 are all in date
    list2.

    Parameters:

        list1 (list): The first list.

        list2 (list): The second list.

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "subset<date>",
        "list1": list1,
        "list2": list2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def subtract_yearMonthDuration_date(session, arg1, arg2):
    '''
    Subtract numbers

    Subtract yearMonthDuration arg2 from date arg1 and return the date
    result.

    Parameters:

        arg1 (date):

        arg2 (yearMonthDuration):

    Returns:
    date: 
    '''

    request = session.Request()

    action = {
        "function": "subtract_yearMonthDuration<date>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def to_string_date(session, value):
    '''
    Converts value to string

    Converts date value to string. For list values, the to_string() value for
    each entry is returned separated with commas.

    Parameters:

        value (date): A date value.

    Returns:
    string: The string representation of the value.
    '''

    request = session.Request()

    action = {
        "function": "to_string<date>",
        "value": value
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def union_date(session, lists):
    '''
    Returns union of two or more string lists

    Returns a list of date contains all of the unique values in two or more
    list of date values.

    Parameters:

        lists (list): Two or more lists.

    Returns:
    list: 
    '''

    request = session.Request()

    action = {
        "function": "union<date>",
        "lists": lists
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

