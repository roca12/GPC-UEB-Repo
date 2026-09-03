/*
 * Autor: Juan Martinez
 * Problema: Critical Links (796)
 * Juez online: Online Judge
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=737
 */
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> disc, low;
set<pair<int,int>> bridges;

int timer = 0;

void addNode(int a, int b) {
    adj[a].push_back(b);
    adj[b].push_back(a);
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
    int n, node, cantidad, aux;
    string cant;
    while(cin>>n) {
        adj.resize(n);
        disc.resize(n);
        low.resize(n);
        for(int j = 0; j < n; j++) {
            cin>>node>>cant;
            stringstream ss;
            for(int i = 0; i < cant.size(); i++) {
                if(cant[i] != '(' && cant[i] != ')') ss<<cant[i];
            }
            ss>>cantidad;
            for(int i = 0; i < cantidad; i++) {
                cin>>aux;
                addNode(node, aux);
            }
        }
        tarjan();
        cout<<bridges.size()<<" critical links"<<"\n";
        for(auto i: bridges) cout<<i.first<<" - "<<i.second<<endl;
        cout<<"\n";
        adj.clear();
        disc.clear();
        low.clear();
        bridges.clear();
        cin.ignore();
    }

}
