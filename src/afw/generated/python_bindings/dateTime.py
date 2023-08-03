# -*- coding: utf-8 -*-

# Generated by afwdev generate afw

import requests
import json

def add_dayTimeDuration_dateTime(session, arg1, arg2):
    '''
    Add duration

    Add dateTime arg1 to dayTimeDuration arg2 and return the dateTime result.

    Parameters:

        arg1 (dateTime):

        arg2 (dayTimeDuration):

    Returns:
    dateTime: 
    '''

    request = session.Request()

    action = {
        "function": "add_dayTimeDuration<dateTime>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def add_yearMonthDuration_dateTime(session, arg1, arg2):
    '''
    Add duration

    Add dateTime arg1 to yearMonthDuration arg2 and return the dateTime
    result.

    Parameters:

        arg1 (dateTime):

        arg2 (yearMonthDuration):

    Returns:
    dateTime: 
    '''

    request = session.Request()

    action = {
        "function": "add_yearMonthDuration<dateTime>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def at_least_one_member_of_dateTime(session, list1, list2):
    '''
    Checks for at least one value in common

    Returns boolean true if at least one value in dateTime list1 is in
    dateTime list2.

    Parameters:

        list1 (list): The first list.

        list2 (list): The second list.

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "at_least_one_member_of<dateTime>",
        "list1": list1,
        "list2": list2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def bag_dateTime(session, values=None):
    '''
    Makes a list from values

    Takes any number of dateTime values and returns a list of list.

    Parameters:

        values (list):

    Returns:
    list: 
    '''

    request = session.Request()

    action = {
        "function": "bag<dateTime>"
    }

    if values != None:
        action['values'] = values

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def bag_size_dateTime(session, value):
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
        "function": "bag_size<dateTime>",
        "value": value
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def dateTime(session, value):
    '''
    Convert to data type dateTime

    Converts value to data type dateTime returning dateTime result.

    Parameters:

        value (): Value to convert

    Returns:
    dateTime: Converted value
    '''

    request = session.Request()

    action = {
        "function": "dateTime",
        "value": value
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def eq_dateTime(session, arg1, arg2):
    '''
    Checks for equal

    Determine if dateTime arg1 is equal to the value of arg2 converted to the
    data type of arg1 then return the boolean result. Use "eqx" ("===")
    instead if you want false to be returned if arg1 and arg2's data type
    don't match.

    Parameters:

        arg1 (dateTime):

        arg2 ():

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "eq<dateTime>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def eqx_dateTime(session, arg1, arg2):
    '''
    Checks for equal and type

    Determine if for dateTime arg1 is equal to the value and data type of
    arg2 then return the boolean result. Use "eq" ("==") instead if you want
    arg2 to be converted to the data type of arg1 before comparison.

    Parameters:

        arg1 (dateTime):

        arg2 ():

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "eqx<dateTime>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def ge_dateTime(session, arg1, arg2):
    '''
    Checks for greater than or equal

    Checks for dateTime arg1 is greater than or equal to dateTime arg2 and
    return the boolean result.
    
    If a dateTime value does not include a time-zone value, then the local
    time-zone value will be assigned.

    Parameters:

        arg1 (dateTime):

        arg2 (dateTime):

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "ge<dateTime>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def gt_dateTime(session, arg1, arg2):
    '''
    Checks for greater than

    Checks for dateTime arg1 is greater than dateTime arg2 and return the
    boolean result.
    
    If a dateTime value does not include a time-zone value, then the local
    time-zone value will be assigned.

    Parameters:

        arg1 (dateTime):

        arg2 (dateTime):

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "gt<dateTime>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def intersection_dateTime(session, list1, list2):
    '''
    Returns intersection of two lists

    Returns a list of dateTime with the values that are common to both list
    of dateTime list1 and list2.

    Parameters:

        list1 (list): The first list.

        list2 (list): The second list.

    Returns:
    list: 
    '''

    request = session.Request()

    action = {
        "function": "intersection<dateTime>",
        "list1": list1,
        "list2": list2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def is_dateTime(session, value):
    '''
    Checks whether value is dataType dateTime

    Checks whether value is dataType dateTime and return the boolean result.

    Parameters:

        value (): Value to check

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "is<dateTime>",
        "value": value
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def is_in_dateTime(session, value, list):
    '''
    Checks whether a value is in a list

    Checks whether dateTime value is in list of dateTime list and returns the
    boolean result.

    Parameters:

        value (dateTime):

        list (list):

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "is_in<dateTime>",
        "value": value,
        "list": list
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def le_dateTime(session, arg1, arg2):
    '''
    Checks for less than or equal

    Checks for dateTime arg1 is less than or equal to dateTime arg2 and
    return the boolean result.
    
    If a dateTime value does not include a time-zone value, then the local
    time-zone value will be assigned.

    Parameters:

        arg1 (dateTime):

        arg2 ():

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "le<dateTime>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def lt_dateTime(session, arg1, arg2):
    '''
    Checks for less than

    Checks for dateTime arg1 is less that dateTime arg2 and return the
    boolean result.
    
    If a dateTime value does not include a time-zone value, then the local
    time-zone value will be assigned.

    Parameters:

        arg1 (dateTime):

        arg2 (dateTime):

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "lt<dateTime>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def max_dateTime(session, values):
    '''
    Maximum value

    Return the dateTime value that is greater than or equal to the others.
    
    If a dateTime value does not include a time-zone value, then the local
    time-zone value will be assigned.

    Parameters:

        values (dateTime):

    Returns:
    dateTime: 
    '''

    request = session.Request()

    action = {
        "function": "max<dateTime>",
        "values": values
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def min_dateTime(session, values):
    '''
    Minimum value

    Return the dateTime value that is less than or equal to the others.
    
    If a dateTime value does not include a time-zone value, then the local
    time-zone value will be assigned.

    Parameters:

        values (dateTime):

    Returns:
    dateTime: 
    '''

    request = session.Request()

    action = {
        "function": "min<dateTime>",
        "values": values
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def ne_dateTime(session, arg1, arg2):
    '''
    Checks for not equal

    Determine if dateTime arg1 is not equal to the value of arg2 converted to
    the data type of arg1 then return the boolean result. Use "nex" ("!==")
    instead if you want true to be returned if arg1 and arg2's data type
    don't match.

    Parameters:

        arg1 (dateTime):

        arg2 ():

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "ne<dateTime>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def nex_dateTime(session, arg1, arg2):
    '''
    Checks for not equal value or type

    Determine if for dateTime arg1 is not equal to the value or data type of
    arg2 then return the boolean result. Use "ne" ("!=") instead if you want
    arg2 to be converted to the data type of arg1 before comparison.

    Parameters:

        arg1 (dateTime):

        arg2 ():

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "nex<dateTime>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def one_and_only_dateTime(session, list):
    '''
    Converts a one value list to a dateTime value

    This converts a list of dateTime values that contains one value to a
    single dateTime value.

    Parameters:

        list (list):

    Returns:
    dateTime: 
    '''

    request = session.Request()

    action = {
        "function": "one_and_only<dateTime>",
        "list": list
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def set_equals_dateTime(session, list1, list2):
    '''
    Checks whether two lists are subsets of each other

    Returns boolean true if dateTime list1 and dateTime list2 are subsets of
    each other and return the boolean result.

    Parameters:

        list1 (list):

        list2 (list):

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "set_equals<dateTime>",
        "list1": list1,
        "list2": list2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def subset_dateTime(session, list1, list2):
    '''
    Determines if the first list is a subset of second list

    Returns boolean true if the unique values in dateTime list1 are all in
    dateTime list2.

    Parameters:

        list1 (list): The first list.

        list2 (list): The second list.

    Returns:
    boolean: 
    '''

    request = session.Request()

    action = {
        "function": "subset<dateTime>",
        "list1": list1,
        "list2": list2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def subtract_dayTimeDuration_dateTime(session, arg1, arg2):
    '''
    Subtract numbers

    Subtract dayTimeDuration arg2 from dateTime arg1 and return the dateTime
    result.

    Parameters:

        arg1 (dateTime):

        arg2 (dayTimeDuration):

    Returns:
    dateTime: 
    '''

    request = session.Request()

    action = {
        "function": "subtract_dayTimeDuration<dateTime>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def subtract_yearMonthDuration_dateTime(session, arg1, arg2):
    '''
    Subtract numbers

    Subtract yearMonthDuration arg2 from dateTime arg1 and return the
    dateTime result.

    Parameters:

        arg1 (dateTime):

        arg2 (yearMonthDuration):

    Returns:
    dateTime: 
    '''

    request = session.Request()

    action = {
        "function": "subtract_yearMonthDuration<dateTime>",
        "arg1": arg1,
        "arg2": arg2
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def to_string_dateTime(session, value):
    '''
    Converts value to string

    Converts dateTime value to string. For list values, the to_string() value
    for each entry is returned separated with commas.

    Parameters:

        value (dateTime): A dateTime value.

    Returns:
    string: The string representation of the value.
    '''

    request = session.Request()

    action = {
        "function": "to_string<dateTime>",
        "value": value
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def union_dateTime(session, lists):
    '''
    Returns union of two or more string lists

    Returns a list of dateTime contains all of the unique values in two or
    more list of dateTime values.

    Parameters:

        lists (list): Two or more lists.

    Returns:
    list: 
    '''

    request = session.Request()

    action = {
        "function": "union<dateTime>",
        "lists": lists
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

