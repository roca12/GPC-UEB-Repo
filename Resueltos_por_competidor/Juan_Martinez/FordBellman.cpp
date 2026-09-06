/*
 * Autor: Juan Martinez
 * Problema: Ford-Bellman (1453)
 * Juez online: Eolymp
 * Veredicto: Accepted
 * Url: https://eolymp.com/en/problems/1453
 */
#include <bits/stdc++.h>
using namespace std;

const int INF = 30000;
vector<vector<pair<int,int>>> adj;
vector<int> dist;

void bellmanFord(int start) {
    bool c;
    dist[start] = 0;
    for(int i = 0; i < adj.size()-1; i++) {
        c = 0;
        for(int j = 0; j < adj.size(); j++) {
            for(auto p : adj[j]) {
                if(dist[j] != INF) {
                    if(dist[j] + p.second < dist[p.first]) {
                        dist[p.first] = dist[j] + p.second;
                        c = 1;
                    }
                }
            }

        }
        if(!c) break;
    }
}

void addNode(int a, int b, int p){
    adj[a].push_back({b, p});
}

int main() {
    int n, m, a, b, p;
    cin>>n>>m;
    adj.resize(n);
    dist.resize(n,INF);
    for(int i = 0; i < m; i++) {
        cin>>a>>b>>p;
        a--;
        b--;
        addNode(a,b,p);
    }
    bellmanFord(0);
    for(int i = 0; i < n; i++) cout<<dist[i]<<" ";
}
