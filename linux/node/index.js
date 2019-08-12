
const ffi = require("ffi");

var libPath = "../C++/add/libadd"
var libm = ffi.Library(libPath, {
  'Add': ['int', ['int', 'int']]
});

let res = libm.Add(20, 3);
console.log('node 输出', res);
