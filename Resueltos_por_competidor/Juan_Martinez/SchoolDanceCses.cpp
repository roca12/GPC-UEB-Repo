/*
 * Autor: Juan Martinez
 * Problema: School Dance
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1696/
 */
#include <bits/stdc++.h>
using namespace std;

#define ln "\n"
#define vvi vector<vector<int>>
#define vi vector<int>
#define vb vector<bool>
#define pii pair<int,int>

vvi adj;
vb visited;
vi match;

bool kuhn(int node) {
    if(visited[node]) return 0;
    visited[node] = 1;
    for(int i : adj[node]) {
        if(match[i] == -1 || kuhn(match[i])) {
            match[i] = node;
            return 1;
        }
    }
    return 0;
}

int main() {
    int b, g, k, a, c;
    cin>>b>>g>>k;
    adj.resize(b);
    match.resize(g, -1);
    for(int i = 0; i < k; i++) {
        cin>>a>>c;
        a--; c--;
        adj[a].push_back(c);
    }
    for(int i = 0; i < b; i++) {
        visited.assign(b, 0);
        kuhn(i);
    }
    int cant = 0;
    for(int i: match) if(i != -1) cant++;
    cout<<cant<<ln;
    for(int i = 0; i < g; i++) if(match[i] != -1) cout<<match[i]+1<<" "<<i+1<<ln;
}
