/*
 * Autor: Juan Martinez
 * Problema: Water Supply
 * Juez online: Vjudge
 * Veredicto: Accepted
 * Url: https://vjudge.net/contest/849932#problem/B
 */
#include <bits/stdc++.h>
using namespace std;

#define ln "\n"
#define vvi vector<vector<int>>
#define vi vector<int>
#define vb vector<bool>
#define pii pair<int,int>
#define vpii vector<pii>
#define add(x) push_back(x)

vvi adj, adj_inv;
vb visited, conexion;
stack<int> st;
vi scc;
vpii conexiones;
int iscc = 0;

void dfs(int node) {
    visited[node] = 1;
    for(int i : adj[node]) {
        if(!visited[i]) {
            dfs(i);
        }
    }
    st.push(node);
}

void dfs2(int node) {
    visited[node] = 1;
    scc[node] = iscc;
    for(int i : adj_inv[node]) {
        if(!visited[i]) {
            dfs2(i);
        }
    }
}


int main() {
    int n, m, a, b;
    while(cin>>n>>m) {
        iscc = 0;
    adj.resize(n+1);
    adj_inv.resize(n+1);
    for(int i = 0; i < m; i++) {
        cin>>a>>b;
        conexiones.push_back({a,b});
        adj[a].add(b);
        adj_inv[b].add(a);
    }
    //Kosaraju de Danrt
    visited.resize(n+1);
    for(int i = 0; i <= n; i++) {
        if(!visited[i]) dfs(i);
    }
    visited.clear();
    visited.resize(n+1);
    int act;
    scc.resize(n+1);
    while(!st.empty()) {
        act = st.top();
        st.pop();
        if(!visited[act]) {
            dfs2(act);
            iscc++;
        }
    }

    conexion.resize(iscc+1);
    for(int i = 0; i < m; i++) {
        auto p = conexiones[i];
        if(scc[p.first] != scc[p.second]) {
            conexion[scc[p.second]] = 1;
        }
    }
    int res = 0;
    for(int i = 0; i < iscc; i++) {
        if(!conexion[i] && i != scc[0]) {
            res++;
        }
    }
    cout<<res<<ln;
    adj.clear();
    adj_inv.clear();
    visited.clear();
    scc.clear();
    conexion.clear();
    conexiones.clear();
    }
}
