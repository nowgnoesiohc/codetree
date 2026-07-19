const fs = require("fs");
const input = fs.readFileSync(0).toString().trim().split('\n');
const N = Number(input[0]);

function f (n) {
    let tmp = 1;
    for(let i = 0; i < n; i++ ){
        let a = '';
        for( let j = 0; j < n; j++){
            if(tmp === 10) tmp = 1;
            a += tmp++ + ' ';
        }
        console.log(a.trim())
    }
}

f(N)