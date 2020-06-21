const calculate = require("./build/Release/calculate")

function calcjs() {
    let i, x = 3.1415926, y = 2.718;
    for (i = 0; i < 1000000000; i++) {
        x += y;
    }
    const total = x;
    return total;
}


console.time('C++')
calculate.sum()
console.timeEnd('C++')

console.time('Js')
calcjs()
console.timeEnd('Js')
