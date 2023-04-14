// See the 'COPYING' file in the project root for licensing information.
/*
 * Javascript Bindings for script
 *
 * Copyright (c) 2010-2023 Clemson University
 *
 */


interface IAnyObject {
    [prop : string] : any;
}

/**
 * Assign a value to the innermost structured block definition of a variable.
 * If the variable is not defined, the variable is defined in the innermost
 * structured block. An error is thrown if not called from a list of values
 * in a structured function.
 * 
 * @param {string} name - Variable name
 * 
 * @param {} value - This is the value to assign to the variable.
 * 
 * @returns {} The value assigned.
 */
export function afwAssign(client : any, name : string, value : any) : any {

    let _action : IAnyObject = {};

    _action["function"] = "assign";
    _action["name"] = name;
    _action["value"] = value;

    return client.perform(_action);
}

/**
 * Takes any number of script values and returns a list of list.
 * 
 * @param {list} values -
 * 
 * @returns {list}
 */
export function afwBagScript(client : any, values? : any[]) : any {

    let _action : IAnyObject = {};

    _action["function"] = "bag<script>";

    if (values !== undefined)
        _action["values"] = values;

    return client.perform(_action);
}

/**
 * This returns the integer number of values in list.
 * 
 * @param {list} value -
 * 
 * @returns {integer}
 */
export function afwBagSizeScript(client : any, value : any[]) : any {

    let _action : IAnyObject = {};

    _action["function"] = "bag_size<script>";
    _action["value"] = value;

    return client.perform(_action);
}

/**
 * This is a special function that can be called to break out of the body of
 * a loop. If called outside of a loop body, an error is thrown.
 * 
 * @param {} value - The value to evaluate that the enclosing loop will
 *     return. If not specified, the last evaluated value or a null value
 *     will be returned.
 * 
 * @returns {} This function returns from the body of a loop with the last
 *     evaluated value.
 */
export function afwBreak(client : any, value? : any) : any {

    let _action : IAnyObject = {};

    _action["function"] = "break";

    if (value !== undefined)
        _action["value"] = value;

    return client.perform(_action);
}

/**
 * Compile script value and return either an unevaluated adaptive value or a
 * string containing the compiler listing.
 * 
 * @param {script} source - script string to compile
 * 
 * @param {} listing - If specified, a compiler listing is produced instead
 *     of an unevaluated expression value.
 *     
 *     This parameter can be an integer between 0 and 10 of a string that is
 *     used for indentation. If 0 is specified, no whitespace is added to the
 *     resulting string. If 1 through 10 is specified, that number of spaces
 *     is used.
 * 
 * @returns {unevaluated}
 */
export function afwCompileScript(client : any, source : any, listing? : any) : any {

    let _action : IAnyObject = {};

    _action["function"] = "compile<script>";
    _action["source"] = source;

    if (listing !== undefined)
        _action["listing"] = listing;

    return client.perform(_action);
}

/**
 * Define one or more statically scoped constants local to the current script
 * block with a permanent value. These constants can be accessed from the
 * current block and inner blocks, but can not be assigned a different value.
 * 
 * @param {list} name - The name of one or more constants to defined in the
 *     current block.
 * 
 * @param {} value - This is the value of the constant(s).
 * 
 * @param {object} type - The type of the constant(s).
 * 
 * @returns {} The value assigned.
 */
export function afwConst(client : any, name : any[], value : any, type? : object) : any {

    let _action : IAnyObject = {};

    _action["function"] = "const";
    _action["name"] = name;
    _action["value"] = value;

    if (type !== undefined)
        _action["type"] = type;

    return client.perform(_action);
}

/**
 * This is a special function that can be called in the body of a loop
 * function to test the condition and, if true, start evaluating the body
 * again. If called outside of a loop body, an error is thrown.
 * 
 * @returns {} This function does not return.
 */
export function afwContinue(client : any) : any {

    let _action : IAnyObject = {};

    _action["function"] = "continue";

    return client.perform(_action);
}

/**
 * This creates a new structured block with a new nested variable scope.
 * 
 * This function will evaluate a list of values at least once while a
 * condition is true. See the related functions "break", "continue", and
 * "return".
 * 
 * @param {boolean} condition - While this condition is true, the loop will
 *     continue. This is evaluated in the loop's scope.
 * 
 * @param {list} body - This is a list of values that are evaluated for each
 *     iteration of the loop. Each value in body is evaluated in order until
 *     the end of the list or until a "break", "continue" or "return"
 *     function is encountered.
 * 
 * @returns {} The last value evaluated in body or null if the body is empty.
 */
export function afwDoWhile(client : any, condition : boolean, body : any[]) : any {

    let _action : IAnyObject = {};

    _action["function"] = "do_while";
    _action["condition"] = condition;
    _action["body"] = body;

    return client.perform(_action);
}

/**
 * Determine if script arg1 is equal to the value of arg2 converted to the
 * data type of arg1 then return the boolean result. Use "eqx" ("===")
 * instead if you want false to be returned if arg1 and arg2's data type
 * don't match.
 * 
 * @param {script} arg1 -
 * 
 * @param {} arg2 -
 * 
 * @returns {boolean}
 */
export function afwEqScript(client : any, arg1 : any, arg2 : any) : any {

    let _action : IAnyObject = {};

    _action["function"] = "eq<script>";
    _action["arg1"] = arg1;
    _action["arg2"] = arg2;

    return client.perform(_action);
}

/**
 * Determine if for script arg1 is equal to the value and data type of arg2
 * then return the boolean result. Use "eq" ("==") instead if you want arg2
 * to be converted to the data type of arg1 before comparison.
 * 
 * @param {script} arg1 -
 * 
 * @param {} arg2 -
 * 
 * @returns {boolean}
 */
export function afwEqxScript(client : any, arg1 : any, arg2 : any) : any {

    let _action : IAnyObject = {};

    _action["function"] = "eqx<script>";
    _action["arg1"] = arg1;
    _action["arg2"] = arg2;

    return client.perform(_action);
}

/**
 * Compile and evaluate script value.
 * 
 * @param {script} source - script string to compile and evaluate
 * 
 * @param {object} additionalUntrustedQualifiedVariables - This parameter
 *     supplies additional qualified variables that can be accessed during
 *     evaluation. These variables will not be used by anything that needs to
 *     ensure its qualified variables must come from a trusted source, such
 *     as authorization. This parameter is intended to be used for testing
 *     only and should not be used for anything running in production.
 * 
 * @returns {unevaluated}
 */
export function afwEvaluateScript(client : any, source : any, additionalUntrustedQualifiedVariables? : object) : any {

    let _action : IAnyObject = {};

    _action["function"] = "evaluate<script>";
    _action["source"] = source;

    if (additionalUntrustedQualifiedVariables !== undefined)
        _action["additionalUntrustedQualifiedVariables"] = additionalUntrustedQualifiedVariables;

    return client.perform(_action);
}

/**
 * This creates a new structured block with a new nested variable scope.
 * 
 * This function loops while condition is true. If the condition is false for
 * the first iteration, the loop returns a null value.
 * 
 * @param {list} initial - This is a list of values to evaluate before the
 *     loop starts. The values will normally be a call to the "assign"
 *     function.
 * 
 * @param {boolean} condition - While this condition is true, the loop will
 *     continue.
 * 
 * @param {list} increment - This is a list of values to evaluate after each
 *     iteration of the loop. The values will normally be a call to the
 *     "assign" function.
 * 
 * @param {list} body - This is a list of values that are evaluated for each
 *     iteration of the loop. Each value in body is evaluated in order until
 *     the end of the list or until a "break", "continue" or "return"
 *     function is encountered.
 * 
 * @returns {} The last value evaluated in body or null if condition
 *     evaluates to false the first time.
 */
export function afwFor(client : any, initial? : any[], condition? : boolean, increment? : any[], body? : any[]) : any {

    let _action : IAnyObject = {};

    _action["function"] = "for";

    if (initial !== undefined)
        _action["initial"] = initial;

    if (condition !== undefined)
        _action["condition"] = condition;

    if (increment !== undefined)
        _action["increment"] = increment;

    if (body !== undefined)
        _action["body"] = body;

    return client.perform(_action);
}

/**
 * This creates a new structured block with a new nested variable scope.
 * 
 * This function will evaluate a list of values while a condition is true
 * with initial and increment values. The condition is tested at the
 * beginning of the loop. If the condition is false for the first iteration,
 * the loop returns a null value.
 * 
 * @param {list} name - Variable name(s).
 * 
 * @param {} value - Any list, object or single value.
 * 
 * @param {list} body - This is a list of values that are evaluated for each
 *     iteration of the loop. Each value in body is evaluated in order until
 *     the end of the list or until a "break", "continue" or "return"
 *     function is encountered.
 * 
 * @returns {} The last value evaluated in body or null if condition
 *     evaluates to false the first time.
 */
export function afwForeach(client : any, name : any[], value : any, body? : any[]) : any {

    let _action : IAnyObject = {};

    _action["function"] = "foreach";
    _action["name"] = name;
    _action["value"] = value;

    if (body !== undefined)
        _action["body"] = body;

    return client.perform(_action);
}

/**
 * Checks for script arg1 is greater than or equal to script arg2 and return
 * the boolean result.
 * 
 * @param {script} arg1 -
 * 
 * @param {script} arg2 -
 * 
 * @returns {boolean}
 */
export function afwGeScript(client : any, arg1 : any, arg2 : any) : any {

    let _action : IAnyObject = {};

    _action["function"] = "ge<script>";
    _action["arg1"] = arg1;
    _action["arg2"] = arg2;

    return client.perform(_action);
}

/**
 * Checks for script arg1 is greater than script arg2 and return the boolean
 * result.
 * 
 * @param {script} arg1 -
 * 
 * @param {script} arg2 -
 * 
 * @returns {boolean}
 */
export function afwGtScript(client : any, arg1 : any, arg2 : any) : any {

    let _action : IAnyObject = {};

    _action["function"] = "gt<script>";
    _action["arg1"] = arg1;
    _action["arg2"] = arg2;

    return client.perform(_action);
}

/**
 * Evaluate one of two different values depending on test condition.
 * 
 * @param {boolean} condition - If true, parameter "then" is evaluated for
 *     result. If false, parameter "else" is evaluated.
 * 
 * @param {list} then - This is the body of a structured block that is
 *     evaluated if "condition" is true. See the "body" parameter of the
 *     "block" function for information on how the body is processed.
 * 
 * @param {list} _else - This is the body of a structured block that is
 *     evaluated if "condition" is false. If not specified and condition is
 *     false, a null value is returned. See the "body" parameter of the
 *     "block" function for information on how the body is processed.
 * 
 * @returns {} The result of evaluating "then" or "else"
 */
export function afwIf(client : any, condition : boolean, then : any[], _else? : any[]) : any {

    let _action : IAnyObject = {};

    _action["function"] = "if";
    _action["condition"] = condition;
    _action["then"] = then;

    if (_else !== undefined)
        _action["else"] = _else;

    return client.perform(_action);
}

/**
 * Checks whether value is dataType script and return the boolean result.
 * 
 * @param {} value - Value to check
 * 
 * @returns {boolean}
 */
export function afwIsScript(client : any, value : any) : any {

    let _action : IAnyObject = {};

    _action["function"] = "is<script>";
    _action["value"] = value;

    return client.perform(_action);
}

/**
 * Checks for script arg1 is less than or equal to script arg2 and return the
 * boolean result.
 * 
 * @param {script} arg1 -
 * 
 * @param {} arg2 -
 * 
 * @returns {boolean}
 */
export function afwLeScript(client : any, arg1 : any, arg2 : any) : any {

    let _action : IAnyObject = {};

    _action["function"] = "le<script>";
    _action["arg1"] = arg1;
    _action["arg2"] = arg2;

    return client.perform(_action);
}

/**
 * Declare one or more statically scoped variable locations local to the
 * current script block and optionally assign them an initial value. These
 * variables can be accessed and assigned different values from the current
 * block and inner blocks.
 * 
 * @param {list} name - The name of one or more variables to declared in the
 *     current block.
 * 
 * @param {} value - This is the initial value of the variable(s). If not
 *     specified, the variable will have a value of undefined.
 * 
 * @param {object} type - The type of the variable(s).
 * 
 * @returns {} The value assigned.
 */
export function afwLoc(client : any, name : any[], value? : any, type? : object) : any {

    let _action : IAnyObject = {};

    _action["function"] = "loc";
    _action["name"] = name;

    if (value !== undefined)
        _action["value"] = value;

    if (type !== undefined)
        _action["type"] = type;

    return client.perform(_action);
}

/**
 * Checks for script arg1 is less that script arg2 and return the boolean
 * result.
 * 
 * @param {script} arg1 -
 * 
 * @param {script} arg2 -
 * 
 * @returns {boolean}
 */
export function afwLtScript(client : any, arg1 : any, arg2 : any) : any {

    let _action : IAnyObject = {};

    _action["function"] = "lt<script>";
    _action["arg1"] = arg1;
    _action["arg2"] = arg2;

    return client.perform(_action);
}

/**
 * Determine if script arg1 is not equal to the value of arg2 converted to
 * the data type of arg1 then return the boolean result. Use "nex" ("!==")
 * instead if you want true to be returned if arg1 and arg2's data type don't
 * match.
 * 
 * @param {script} arg1 -
 * 
 * @param {} arg2 -
 * 
 * @returns {boolean}
 */
export function afwNeScript(client : any, arg1 : any, arg2 : any) : any {

    let _action : IAnyObject = {};

    _action["function"] = "ne<script>";
    _action["arg1"] = arg1;
    _action["arg2"] = arg2;

    return client.perform(_action);
}

/**
 * Determine if for script arg1 is not equal to the value or data type of
 * arg2 then return the boolean result. Use "ne" ("!=") instead if you want
 * arg2 to be converted to the data type of arg1 before comparison.
 * 
 * @param {script} arg1 -
 * 
 * @param {} arg2 -
 * 
 * @returns {boolean}
 */
export function afwNexScript(client : any, arg1 : any, arg2 : any) : any {

    let _action : IAnyObject = {};

    _action["function"] = "nex<script>";
    _action["arg1"] = arg1;
    _action["arg2"] = arg2;

    return client.perform(_action);
}

/**
 * Return from the outermost structured block. If the expression of a lambda
 * function is a block function, this will effectively return from the lambda
 * function. If called outside of a structured block, an error is thrown.
 * 
 * @param {} value - The value to evaluate that the outermost block will
 *     return. If not specified, the last evaluated value or a null value
 *     will be returned.
 * 
 * @returns {} This function returns from the outermost structured block with
 *     the last evaluated value.
 */
export function afwReturn(client : any, value? : any) : any {

    let _action : IAnyObject = {};

    _action["function"] = "return";

    if (value !== undefined)
        _action["value"] = value;

    return client.perform(_action);
}

/**
 * Converts value to data type script returning script result.
 * 
 * @param {} value - Value to convert
 * 
 * @returns {script} Converted value
 */
export function afwScript(client : any, value : any) : any {

    let _action : IAnyObject = {};

    _action["function"] = "script";
    _action["value"] = value;

    return client.perform(_action);
}

/**
 * This creates a new structured block with a new nested variable scope.
 * 
 * This function will evaluate a list of values while a condition is true.
 * The condition is tested at the beginning of the loop. If the condition is
 * false for the first iteration, the loop returns a null value. See the
 * related functions "break", "continue", and "return".
 * 
 * @param {boolean} condition - While this condition is true, the loop will
 *     continue. This is evaluated in the loop's scope.
 * 
 * @param {list} body - This is a list of values that are evaluated for each
 *     iteration of the loop. Each value in body is evaluated in order until
 *     the end of the list or until a "break", "continue" or "return"
 *     function is encountered.
 * 
 * @returns {} The last value evaluated in body or null if condition
 *     evaluates to false the first time.
 */
export function afwWhile(client : any, condition : boolean, body : any[]) : any {

    let _action : IAnyObject = {};

    _action["function"] = "while";
    _action["condition"] = condition;
    _action["body"] = body;

    return client.perform(_action);
}

