const fs = require("fs");
const input = fs.readFileSync(0).toString().trim().split('\n');

const n = Number(input[0]);
const grid = input.slice(1, n + 1).map(line => line.split(' ').map(Number));

// Please Write your code here.
function canGo(x, y){
    if(!(x<n && y<n && x>=0 && y>=0)) return false;
    if(!grid[x][y]) return false;
    if(visited[x][y]) return false;
    return true;
}
function dfs(x, y){
    const dx = [0, -1, 1, 0];
    const dy = [1, 0, 0, -1];
    let cnt = 1;

    for(let i=0; i<dx.length; i++){
        const newX = x + dx[i];
        const newY = y + dy[i];
        if(canGo(newX, newY)){
            visited[newX][newY] = true;
            cnt += dfs(newX, newY);
        }
    }
    return cnt;
}

const visited = Array.from({length: n}, ()=>Array(n).fill(false));
const people = [];

for(let i=0; i<n; i++){
    for(let j=0; j<n; j++){
        if(grid[i][j]==1 && !visited[i][j]){
            visited[i][j] = true;
            people.push(dfs(i, j));
        }
    }
}

console.log(people.length);
people.sort((a, b)=>a-b)
console.log(people.join("\n"));