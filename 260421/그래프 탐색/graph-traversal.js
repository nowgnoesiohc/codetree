const fs = require("fs");
const input = fs.readFileSync(0).toString().trim().split('\n');

const [n, m] = input[0].split(' ').map(Number);
const edges = [];
for (let i = 1; i <= m; i++) {
    edges.push(input[i].split(' ').map(Number));
}

// Please Write your code here.
// 1. 인접 리스트 생성
const graph = Array.from({length: n + 1}, ()=>[]);
for(const [u, v] of edges){
    graph[u].push(v);
    graph[v].push(u);
}

const visited = new Array(n + 1).fill(false);
let count = 0;

function dfs(node){
    visited[node] = true;
    for(const neighbor of graph[node]){
        if(!visited[neighbor]){
            count++;
            dfs(neighbor);
        }
    }
}

dfs(1);
console.log(count);