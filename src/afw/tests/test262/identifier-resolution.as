#!/usr/bin/env -S afw --syntax test_script
//?
//? testScript: identifier-resolution.as
//? customPurpose: Part of test262
//? description: identifier-resolution
//? sourceType: script
//?
//? test: S10.2.2_A1_T1
//? description: Checking scope chain containing function declarations
//? expect: null
//? source: ...
#!/usr/bin/env afw


loc x = 0;

function f1(){
  loc x = 1;
  function f2(){
    return x;
  };
  return f2();
}

if(!(f1() === 1)){
  assert(false, "#1: Scope chain disturbed");
}


//? test: S10.2.2_A1_T2
//? description: Checking scope chain containing function declarations
//? expect: null
//? source: ...
#!/usr/bin/env afw


loc x = 0;

function f1(){
  function f2(){
    return x;
  };
  return f2();
}

if(!(f1() === 0)){
  assert(false, "#1: Scope chain disturbed");
}


//? test: S10.2.2_A1_T4
//? description: Checking scope chain containing function declarations
//? expect: null
//? source: ...
#!/usr/bin/env afw


loc x = 0;

function f1(){
  function f2(){
    return x;
  };

  loc x = 1;
  return f2();
}

if(!(f1() === 1)){
  assert(false, "#1: Scope chain disturbed");
}

