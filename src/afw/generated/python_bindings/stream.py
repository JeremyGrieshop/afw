# -*- coding: utf-8 -*-

# Generated by afwdev generate afw

import requests
import json

def close(session, streamNumber):
    '''
    Close a stream

    This will close an open stream

    Parameters:

        streamNumber (integer): The streamNumber for the stream to close.

    Returns:
    null: 
    '''

    request = session.Request()

    action = {
        "function": "close",
        "streamNumber": streamNumber
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def flush(session, streamNumber):
    '''
    Flush stream buffer

    Write the content of the stream's buffers to its destination.

    Parameters:

        streamNumber (integer): The streamNumber for the stream to flush.

    Returns:
    null: 
    '''

    request = session.Request()

    action = {
        "function": "flush",
        "streamNumber": streamNumber
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def get_stream_error(session):
    '''
    Get stream error

    Get the most recent stream error.

    Parameters:

    Returns:
    string: The most recent stream error.
    '''

    request = session.Request()

    action = {
        "function": "get_stream_error"
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def open_file(session, streamId, path, mode, autoFlush=None):
    '''
    Open a file stream

    This will open a file stream.

    Parameters:

        streamId (string): This is the streamId that will be associated with
        this open file stream.

        path (string): This is the path to the file to open. The
        rootDirectory of the path is defined in the application object.

        mode (string): This is the access mode string. Values can be:
        r - Open an existing file text file for read.
        w - Open a text file for writing. If the file does not exist, it
        will be created.
        a - Open a text file for writing additional data to the end. If the
        file does not exist, it will be created.
        r+ - Open a text file for both reading and writing.
        w+ - Open a text file for both reading and writing. If the file
        exists, it will be overwritten. If the file does not exist, it will
        be created.
        a+ - Open a text file for both reading and writing. Reading will
        begin at the start of the file while writing will be appended to the
        end.
        
        All of these modes expect data type string. If you are using data
        type base64Binary or hexBinary you can use corresponding binary
        modes, "rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", and
        "a+b".

        autoFlush (boolean): If specified and true, this will automatically
        flush the stream's buffers after every write.

    Returns:
    integer: The streamNumber for the streamId or -1 if there was an error. Use get_stream_error() for error information.
    '''

    request = session.Request()

    action = {
        "function": "open_file",
        "streamId": streamId,
        "path": path,
        "mode": mode
    }

    if autoFlush != None:
        action['autoFlush'] = autoFlush

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def open_response(session, streamId, autoFlush=None):
    '''
    Open a response stream

    This will open a response text write-only stream that will be written to
    the http response.

    Parameters:

        streamId (string): This is the streamId that will be associated with
        this open response stream.

        autoFlush (boolean): If specified and true, this will automatically
        flush the stream's buffers after every write.

    Returns:
    integer: The streamNumber for the streamId or -1 if there was an error. Use get_stream_error() for error information.
    '''

    request = session.Request()

    action = {
        "function": "open_response",
        "streamId": streamId
    }

    if autoFlush != None:
        action['autoFlush'] = autoFlush

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def open_uri(session, streamId, uri, mode, autoFlush=None):
    '''
    Open a URI

    This will open a read or write stream for a URI.

    Parameters:

        streamId (string): This is the streamId that will be associated with
        this open URI stream.

        uri (string): This is the URI of the stream to open.

        mode (string): This is the access mode string. Values can be "r" for
        read or "w" for write.

        autoFlush (boolean): If specified and true, this will automatically
        flush the stream's buffers after every write.

    Returns:
    integer: The streamNumber for the streamId or -1 if there was an error. Use get_stream_error() for error information.
    '''

    request = session.Request()

    action = {
        "function": "open_uri",
        "streamId": streamId,
        "uri": uri,
        "mode": mode
    }

    if autoFlush != None:
        action['autoFlush'] = autoFlush

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def print(session, values):
    '''
    Print value

    Evaluate and convert 0 or more values to its string value, then write
    them to stdout. An undefined value is represented by `<undefined>`.

    Parameters:

        values (): Values to print.

    Returns:
    null: 
    '''

    request = session.Request()

    action = {
        "function": "print",
        "values": values
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def println(session, value):
    '''
    Print value followed by '\n'

    Evaluate and convert 0 or more values to their string value, then write
    them to stdout. A newline character ('\n') is written after the last
    value. An undefined value is represented by `<undefined>`.

    Parameters:

        value (): Values to print.

    Returns:
    null: 
    '''

    request = session.Request()

    action = {
        "function": "println",
        "value": value
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def read(session, streamNumber, n):
    '''
    Read from a UTF-8 text stream

    Read a UTF-8 text stream up to a specified number of octets. The stream
    must contain valid UTF-8 or an error is thrown.

    Parameters:

        streamNumber (integer): Stream number

        n (): The maximum number of octets to read.

    Returns:
    string: The UTF-8 string read. Check the size of this value to determine the actual number of octets read.
    '''

    request = session.Request()

    action = {
        "function": "read",
        "streamNumber": streamNumber,
        "n": n
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def read_to_base64Binary(session, streamNumber, n):
    '''
    Read from a stream to base64Binary

    Read a stream up to a specified number of octets. The result will be the
    internal memory of a base64Binary value.

    Parameters:

        streamNumber (integer): Stream number

        n (): The maximum number of octets to read.

    Returns:
    base64Binary: The base64Binary value read. Check the size of this value to determine the actual number of octets read.
    '''

    request = session.Request()

    action = {
        "function": "read_to_base64Binary",
        "streamNumber": streamNumber,
        "n": n
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def read_to_hexBinary(session, streamNumber, n):
    '''
    Read from a stream to hexBinary

    Read a stream up to a specified number of octets. The result will be the
    internal memory of a hexBinary value.

    Parameters:

        streamNumber (integer): Stream number

        n (): The maximum number of octets to read.

    Returns:
    hexBinary: The hexBinary value read. Check the size of this value to determine the actual number of octets read.
    '''

    request = session.Request()

    action = {
        "function": "read_to_hexBinary",
        "streamNumber": streamNumber,
        "n": n
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def readln(session, streamNumber):
    '''
    Read from a UTF-8 text stream line

    Read a UTF-8 text stream line. The stream must contain valid UTF-8 or an
    error is thrown.

    Parameters:

        streamNumber (integer): Stream number

    Returns:
    string: The UTF-8 string read.
    '''

    request = session.Request()

    action = {
        "function": "readln",
        "streamNumber": streamNumber
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def stream(session, streamId):
    '''
    Get streamNumber for a streamId

    This will return the streamNumber for a streamId. This function useful to
    obtain the number of the automatically opened standard streams "console",
    "stderr" and "stdout" as well and any other open stream.

    Parameters:

        streamId (string): The id of a stream.

    Returns:
    integer: The streamNumber for the streamId or -1 if there was an error. Use get_stream_error() for error information.
    '''

    request = session.Request()

    action = {
        "function": "stream",
        "streamId": streamId
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def write(session, streamNumber, value):
    '''
    Write values to stream as sting

    Evaluate and convert 0 or more values to its string value, then write
    them to stream. An value with an undefined value is represented by
    `<undefined>`.

    Parameters:

        streamNumber (integer): The streamNumber for the stream to write.

        value (any): Values to write as their string value.

    Returns:
    null: 
    '''

    request = session.Request()

    action = {
        "function": "write",
        "streamNumber": streamNumber,
        "value": value
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def write_internal(session, streamNumber, value):
    '''
    Write internal

    Write a value's internal memory. This is especially useful for writing
    data type base64Binary and hexBinary.

    Parameters:

        streamNumber (integer): The streamNumber for the stream to write.

        value (any): The internal memory of this value is written.

    Returns:
    null: 
    '''

    request = session.Request()

    action = {
        "function": "write_internal",
        "streamNumber": streamNumber,
        "value": value
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

def writeln(session, streamNumber, value):
    '''
    Write values to stream as string followed by '\n'

    Evaluate and convert 0 or more values to its string value, then write
    them to stream. A newline character ('\n') is written after the last
    value. An undefined value is represented by `<undefined>`.

    Parameters:

        streamNumber (integer): The streamNumber for the stream to write.

        value (): Values to write.

    Returns:
    null: 
    '''

    request = session.Request()

    action = {
        "function": "writeln",
        "streamNumber": streamNumber,
        "value": value
    }

    request.add_action(action)

    response = request.perform()
    if response.get('status') == 'error':
        raise Exception(response.get('error'))

    return response['actions'][0]['result']

