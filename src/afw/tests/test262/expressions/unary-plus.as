#!/usr/bin/env -S afw --syntax test_script
//?
//? testScript: unary-minus.as
//? customPurpose: Part of test262
//? description: expressions/unary-minus
//? sourceType: script
//?
//? test: S11.4.6_A1
//? description: Checking by using eval
//? expect: null
//? source: ...
#!/usr/bin/env afw


//CHECK#1
if (evaluate(script("+\u00091")) !== 1) {
  assert(false, '#1: +\\u00091 === 1');
}

//CHECK#2
if (evaluate(script("+\u000B1")) !== 1) {
  assert(false, '#2: +\\u000B1 === 1');
}

//CHECK#3
if (evaluate(script("+\u000C1")) !== 1) {
  assert(false, '#3: +\\u000C1 === 1');
}

//CHECK#4
if (evaluate(script("+\u00201")) !== 1) {
  assert(false, '#4: +\\u0020 === 1');
}

//CHECK#5
if (evaluate(script("+\u00A01")) !== 1) {
  assert(false, '#5: +\\u00A01 === 1');
}

//CHECK#6
if (evaluate(script("+\u000A1")) !== 1) {
  assert(false, '#6: +\\u000A1 === 1');
}

//CHECK#7
if (evaluate(script("+\u000D1")) !== 1) {
  assert(false, '#7: +\\u000D1 === 1');
}

//CHECK#8
if (evaluate(script("+\u20281")) !== 1) {
  assert(false, '#8: +\\u20281 === 1');
}

//CHECK#9
if (evaluate(script("+\u20291")) !== 1) {
  assert(false, '#9: +\\u20291 === 1');
}

//CHECK#10
if (evaluate(script("+\u0009\u000B\u000C\u0020\u00A0\u000A\u000D\u2028\u20291")) !== 1) {
  assert(false, '#10: +\\u0009\\u000B\\u000C\\u0020\\u00A0\\u000A\\u000D\\u2028\\u20291 === 1');
}


//? test: S11.4.6_A2.1_T1
//? description: Either Type(x) is not Reference or GetBase(x) is not null
//? expect: null
//? source: ...
#!/usr/bin/env afw


//CHECK#1
if (+1 !== 1) {
  assert(false, '#1: +1 === 1. Actual: ' + (+1));
}

//CHECK#2
if (+(+1) !== 1) {
  assert(false, '#2: +(+1) === -1. Actual: ' + (+(+1)));
}

//CHECK#3
loc x = 1;
if (+x !== 1) {
  assert(false, '#3: loc x = +1; -x === 1. Actual: ' + (-x));
}

//CHECK#4
x = 1;
if (+(+x) !== 1) {
  assert(false, '#4: loc x = 1; +(+x) === 1. Actual: ' + (+(+x)));
}



//? test: S11.4.6_A2.1_T2
//? description: If GetBase(x) is null, throw ReferenceError
//? expect: error:Parse error at offset 21 around line 3 column 2: Unknown built-in function x
//? source: ...
#!/usr/bin/env afw

+x;


//? test: S11.4.6_A3_T1
//? description: Type(x) is boolean primitive or Boolean object
//? expect: null
//? skip: true
//? source: ...
#!/usr/bin/env afw

// we do not allow this in AFW

//CHECK#1
if (+false !== 0) {
  assert(false, '#1: +false === 0. Actual: ' + string(+false));
}



//? test: S11.4.6_A3_T2
//? description: Type(x) is number primitive or Number object
//? expect: null
//? source: ...
#!/usr/bin/env afw


//CHECK#1
if (+0.1 !== 0.1) {
  assert(false, '#1: +0.1 === 0.1. Actual: ' + (+0.1));
}


//? test: S11.4.6_A3_T3
//? description: Type(x) is string primitive or String object
//? expect: error:Parameter 1 of function is_NaN must evaluate to data type double but evaluated to be string
//? source: ...
#!/usr/bin/env afw


//CHECK#1
/* This won't work in AS
if (+"1" !== 1) {
  assert(false, '#1: +"1" === 1. Actual: ' + (+"1"));
}
*/

//CHECK#3
if (is_NaN(+"x") !== true) {
  assert(false, '#3: +"x" === Not-a-Number. Actual: ' + (+"x"));
}

//CHECK#4
if (is_NaN(+"INFINITY") !== true) {
  assert(false, '#4: +"INFINITY" === Not-a-Number. Actual: ' + (+"INFINITY"));
}

//CHECK#5
if (is_NaN(+"infinity") !== true) {
  assert(false, '#5: +"infinity" === Not-a-Number. Actual: ' + (+"infinity"));
}


//? test: S11.4.6_A3_T4
//? description: Type(x) is undefined or null
//? expect: error:Parameter 2 of function add<string> must evaluate to data type string but evaluated to be null
//? source: ...
#!/usr/bin/env afw


//CHECK#1
/* can't do this in AS
if (isNaN(+void 0) !== true) {
  assert(false, '#1: +void 0 === Not-a-Number. Actual: ' + (+void 0));
}
*/

//CHECK#2
if (+null !== 0) {
  assert(false, '#2: +null === 0. Actual: ' + (+null));
}


//? test: S11.4.6_A3_T5
//? description: Type(x) is Object object or Function object
//? expect: error:Parameter 1 of function is_NaN must evaluate to data type double but evaluated to be object
//? source: ...
#!/usr/bin/env afw

//CHECK#1
if (is_NaN(+{}) !== true) {
  assert(false, '#1: +{} === Not-a-Number. Actual: ' + (+{}));
}

//CHECK#2
if (is_NaN(+function(){return 1;}) !== true) {
  assert(false, '#2: +function(){return 1;} === Not-a-Number. Actual: ' + (+function(){return 1;}));
}


//? test: S9.3_A1_T2
//? description: Undefined convert to Number by implicit transformation
//? expect: error:Parameter 1 of function is_NaN can not be undefined
//? source: ...
#!/usr/bin/env afw


// CHECK#1
if (is_NaN(+(undefined)) !== true) {
  assert(false, '#1: +(undefined) === Not-a-Number. Actual: ' + (+(undefined)));
}

// CHECK#2
/* can't do this in AS
if (is_NaN(+(void 0)) !== true) {
  assert(false, '#2: +(void 0) === Not-a-Number. Actual: ' + (+(void 0)));
}
*/

// CHECK#3
if (is_NaN(+(evaluate(script("loc x;")))) !== true) {
  assert(false, '#3: +(evaluate(script("loc x;")) === Not-a-Number. Actual: ' + (+(evaluate(script("loc x;")))));
}


//? test: S9.3_A2_T2
//? description: null convert to Number by implicit transformation
//? expect: null
//? skip: true
//? source: ...
#!/usr/bin/env afw

// \fixme should we allow this?

// CHECK #1
if (+(null) !== 0) {
  assert(false, '#1.1: +(null) === 0. Actual: ' + string(+(null)));
} else {
  if (1/+(null) !== Infinity) {
    assert(false, '#1.2: +(null) === +0. Actual: -0');
  }
}


//? test: S9.3_A3_T2
//? description: False and true convert to Number by implicit transformation
//? expect: null
//? skip: true
//? source: ...
#!/usr/bin/env afw

// we do not allow this in AFW

// CHECK#1
if (+(false) !== +0) {
  assert(false, '#1.1: +(false) === 0. Actual: ' + string(+(false)));
} else {
  if (1/+(false) !== Infinity) {
    assert(false, '#1.2: +(false) === +0. Actual: -0');
  }
}

// CHECK#2
if (+(true) !== 1) {
  assert(false, '#2: +(true) === 1. Actual: ' + string(+(true)));
}


//? test: S9.3_A4.1_T2
//? description:...
    Some numbers including Number.MAX_VALUE and Number.MIN_VALUE are
    converted to Number with implicit transformation
//? expect: null
//? source: ...
#!/usr/bin/env afw


// CHECK#1
if (+(13) !== 13) {
  assert(false, '#1: +(13) === 13. Actual: ' + (+(13)));
}

// CHECK#2
if (+(-13) !== -13) {
  assert(false, '#2: +(-13) === -13. Actual: ' + (+(-13)));
}

// CHECK#3
if (+(1.3) !== 1.3) {
  assert(false, '#3: +(1.3) === 1.3. Actual: ' + (+(1.3)));
}

// CHECK#4
if (+(-1.3) !== -1.3) {
  assert(false, '#4: +(-1.3) === -1.3. Actual: ' + (+(-1.3)));
}


//? test: S9.3_A4.2_T2
//? description:...
    Number.NaN, +0, -0, Number.POSITIVE_INFINITY,
    Number.NEGATIVE_INFINITY,  Number.MAX_VALUE and Number.MIN_VALUE
    convert to Number by implicit transformation
//? expect: null
//? source: ...
#!/usr/bin/env afw


// CHECK#1
if (is_NaN(+(NaN)) !== true) {
  assert(false, '#1: +(NaN) === Not-a-Number. Actual: ' + (+(NaN)));
}

// CHECK#2
if (+(+0) !== +0) {
  assert(false, '#2.1: +(+0) === 0. Actual: ' + (+(+0)));
} else {
  if (1.0/+(+0.0) !== Infinity) {
    assert(false, '#2.2: +(+0) === +0. Actual: -0');
  }
}

// CHECK#3
if (+(-0) !== -0) {
  assert(false, '#3.1: +(-0) === 0. Actual: ' + (+(-0)));
} else {
  if (1.0/+(-0.0) !== -Infinity) {
    assert(false, '#3.2: +(-0) === -0. Actual: +0');
  }
}

// CHECK#4
if (+(Infinity) !== Infinity) {
  assert(false, '#4: +(+Infinity) === +Infinity. Actual: ' + (+(+Infinity)));
}

// CHECK#5
if (+(-Infinity) !== -Infinity) {
  assert(false, '#5: +(-Infinity) === -Infinity. Actual: ' + (+(-Infinity)));
}

/*
// CHECK#6
if (+(Number.MAX_VALUE) !== Number.MAX_VALUE) {
  assert(false, '#6: +(Number.MAX_VALUE) === Number.MAX_VALUE. Actual: ' + (+(Number.MAX_VALUE)));
}

// CHECK#7
if (+(Number.MIN_VALUE) !== Number.MIN_VALUE) {
  assert(false, '#7: +(Number.MIN_VALUE) === Number.MIN_VALUE. Actual: ' + (+(Number.MIN_VALUE)));
}
*/
