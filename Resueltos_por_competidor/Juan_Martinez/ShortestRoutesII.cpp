/*
 * Autor: Juan Martinez
 * Problema: Shortest Routes II
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1672/
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll INF = 1e18;
#define ln "\n"
ll n;
vector<vector<ll>> dist;

void floydWarshall() {
    for(ll z = 0; z < n; z++) {
        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < dist[i].size(); j++) {
                if(dist[i][z] + dist[z][j] < dist[i][j]) dist[i][j] = dist[i][z] + dist[z][j];
            }
        }
    }
}

int main() {
    ll m, q, a, b, p;
    cin>>n>>m>>q;
    dist.resize(n, vector<ll>(n, INF));
    for(int i = 0; i < n; i++) dist[i][i] = 0;
    for(ll i = 0; i < m; i++) {
        cin>>a>>b>>p;
        a--;
        b--;
        if(p < dist[a][b]) dist[a][b] = dist[b][a] = p;
    }
    floydWarshall();
    while(q--) {
        cin>>a>>b;
        a--;
        b--;
        if(!(dist[a][b] == INF)) cout<<dist[a][b]<<ln;
        else cout<<-1<<ln;
    }
}
