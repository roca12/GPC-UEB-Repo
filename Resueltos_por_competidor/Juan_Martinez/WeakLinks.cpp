/*
 * Autor: Juan Martinez
 * Problema: Weak Links
 * Juez online: Vjudge
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/UVA-12783
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

vvi adj;
vi disc, low;
set<pii> bridges;

int timer = 0;

void addNode(int a, int b) {
    adj[a].add(b);
    adj[b].add(a);
}

void dfs(int node, int parent) {
    low[node] = disc[node] = ++timer;
    for(int&act : adj[node]) {
        if(act != parent) {
            if(!disc[act]) {
                dfs(act, node);
                if(low[act] > disc[node]) bridges.insert({min(act, node), max(act,node)});
                low[node] =  min(low[act], low[node]);
            } else low[node] =  min(low[node], disc[act]);
        }
    }
}

void tarjan() {
    for(int i = 0; i < adj.size(); i++) {
        if(!disc[i]) dfs(i, i);
    }
}

int main() {
    int n, m, a, b;
    while(cin>>n>>m) {
        if(n == 0 && m == 0) break;
        adj.resize(n);
        disc.resize(n);
        low.resize(n);
        for(int j = 0; j < m; j++) {
            cin>>a>>b;
            addNode(a,b);
        }
        tarjan();
        if(bridges.size() == 0) cout<<bridges.size();
        else cout<<bridges.size()<<" ";
        int temp = 0;
        for(auto i: bridges) {
            temp++;
            if(temp != bridges.size()) cout<<i.first<<" "<<i.second<<" ";
            else cout<<i.first<<" "<<i.second;
        }
        cout<<ln;
        adj.clear();
        disc.clear();
        low.clear();
        bridges.clear();
    }

}
