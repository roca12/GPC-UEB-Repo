/*
 * Autor: Juan Martinez
 * Problema: Graph Without Long Directed Paths (1144F)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/1144/problem/F
 * Difficulty: 1700
 */
#include <bits/stdc++.h>
using namespace std;

#define ln "\n"
#define vvi vector<vector<int>>
#define vi vector<int>

vvi adj;
vi color;
vector<pair<int,int>> pares;
int n;

bool dfs(int node, int parent) {
    if(node == parent) color[node] = 1;
    else color[node] = 1 - color[parent];
    for(int i: adj[node]) {
        if(color[i] == -1) {
            if(!dfs(i, node)) return false;
        }
        else if(color[i] == color[node]) return false;
    }
    return true;
}

bool isBipartite() {
    bool bipartite = 1;
    for(int i=  0; i < n; i++) {
        if(color[i] == -1 && !dfs(i, i)) {
            bipartite = 0;
            break;
        }
    }
    return bipartite;
}
int main() {
	int m, a, b;
    cin>>n>>m;
    adj.resize(n);
    color.resize(n,-1);
    for(int i = 0; i < m; i++) {
        cin>>a>>b;
        a--; b--;
        pares.push_back({a,b});
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    if(isBipartite()) {
        cout<<"YES"<<ln;
        for(auto p: pares) {
            if(color[p.first] == 0) cout<<1;
            else cout<<0;
        }
    } else cout<<"NO"<<ln;
}
