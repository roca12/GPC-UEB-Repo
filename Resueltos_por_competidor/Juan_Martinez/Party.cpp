/*
 * Autor: Juan Martinez
 * Problema: Party (115A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/115/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>
using namespace std;

#define ln "\n"
#define vvi vector<vector<int>>
#define vb vector<bool>
#define pii pair<int,int>

vvi adj;
vb visited;
int maxi = 0;

void dfs(int node, int depth) {
    maxi = max(maxi, depth);
    for(int i : adj[node]) {
        dfs(i, depth + 1);
    }
}
int main() {
	int n, b;
    cin>>n;
    adj.resize(n);
    visited.resize(n,0);
    for(int i = 0; i < n; i++) {
        cin>>b;
        if(b == -1) continue;
        b--;
        adj[b].push_back(i);
    }
    for(int i = 0; i < n; i++) {
        dfs(i, 1);
    }
    cout<<maxi<<ln;
}
