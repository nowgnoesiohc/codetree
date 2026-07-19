const fs = require("fs");
const input = fs.readFileSync(0).toString().trim().split(" ");
let n = Number(input[0]);
let m = Number(input[1]);
// Please Write your code here.

const a = [...getMeasure(n)].reverse();
const b = [...getMeasure(m)].reverse();

loop1:for( const x of a ){
    for( const y of b ){
        if( x === y ) {
            console.log(x)
            break loop1;
        }
    }
}





function getMeasure (x) {
    const tmp = [];
    for ( let i = 1; i <= x; i++ ){
        if( x % i === 0 ) tmp.push(i); 
    }
    return tmp;
}

