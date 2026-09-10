/*
 * Autor: Juan Martinez
 * Problema: Course Schedule
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1679
 */
#include <bits/stdc++.h>
using namespace std;

#define ln "\n"

int n;
vector<vector<int>> adj;
vector<int> res;
vector<bool> visited;

vector<int> color;
// 0 - white, 1 - gray, 2 - black

bool dfs2(int node) {
    color[node] = 1;
    for(int i : adj[node]) {
        if(color[i] == 0) {
            if(dfs2(i)) return true;
        } else if (color[i] == 1) {
            return true;
        }
    }
    color[node] = 2;
    return false;
}

bool findCycle(){
    bool e = 0;
    for(int i = 1; i <= n; i++) {
        if(color[i] == 0) if(dfs2(i)) { e = 1; break; }
    }
    return e;
}

void dfs(int v) {
    visited[v] = 1;
    for(int i: adj[v]) {
        if(!visited[i]) dfs(i);
    }
    res.push_back(v);
}

void topologicalSort() {
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) dfs(i);
    }
    reverse(res.begin(), res.end());
}

int main() {
	int m, a, b; cin>>n>>m;
    adj.resize(n+1);
    visited.resize(n+1, 0);
    color.resize(n+1, 0);
    for(int i = 0; i < m ; i++) {
        cin>>a>>b;
        adj[a].push_back(b);
    }
    if(findCycle()) cout<<"IMPOSSIBLE"<<ln;
    else {
        topologicalSort();
        for(int i : res) cout<<i<<" ";
    }
}
      
