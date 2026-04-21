const fs = require("fs");
const input = fs.readFileSync(0).toString().trim().split('\n');

const [n, m] = input[0].split(' ').map(Number);
const grid = input.slice(1, n + 1).map(row => row.split(' ').map(Number));

function inRange(x, y){
    return 0 <= x && x < n && y >= 0 && y < m;
}
function canGo(x, y){
    if(!inRange(x, y)) return false;
    if(visited[x][y]) return false;
    if(grid[x][y]===0) return false;
    return true;
}
// Please Write your code here.
function dfs(x, y){
    if(x === n-1 && y === m-1) {result = true; return;}
    // down, right
    const dx = [0, 1];
    const dy = [1, 0];

    for(let i=0; i<dx.length; i++){
        const newX = x + dx[i];
        const newY = y + dy[i];
        if(canGo(newX, newY)){
            visited[newX][newY] = true;
            dfs(newX, newY);
        }
    }
}

let result = false;
const visited = Array.from({length: n}, ()=>Array(m).fill(false));
visited[0][0] = true;

dfs(0, 0);
console.log(result===true?1:0);