
const ffi = require("ffi");

var libPath = "../C++/add/add.dll"
var libm = ffi.Library(libPath, {
  'Add': ['int', ['int', 'int']]
});

let res = libm.Add(2, 3);
console.log(res);