const fs = require("fs");
const input = fs.readFileSync(0).toString().trim().split('\n');

const [n, m] = input[0].split(' ').map(Number);
const grid = input.slice(1, 1 + Number(n)).map(line => line.split(' ').map(Number));

// Please Write your code here.
function dfs(x, y, k, visited){
    visited[x][y] = true;
    dx = [0, 0, 1, -1];
    dy = [1, -1, 0, 0];

    for(let i=0; i<4; i++){
        const xx = x + dx[i];
        const yy = y + dy[i];
        if(xx<n && xx>=0 && yy<m && yy>=0 && !visited[xx][yy] && grid[xx][yy]>k){
            dfs(xx, yy, k, visited);
        }
    }
}

function safe(k){
    const visited = Array.from({length: n}, ()=>Array(m).fill(false));
    let cnt=0;
    for(let i=0; i<n; i++){
        for(let j=0; j<m; j++){
            if(!visited[i][j] && grid[i][j]>k){
                cnt++;
                dfs(i, j, k, visited);
            }
        }
    }
    return cnt;
}

const maximum = Math.max(...grid.map(row=>Math.max(...row)));
let maxK, maxNum=-1;
for(let i=1; i<=maximum; i++){
    const tmp = safe(i);
    if(tmp>maxNum){
        maxNum = tmp;
        maxK = i;
    }
}
console.log(maxK, maxNum);