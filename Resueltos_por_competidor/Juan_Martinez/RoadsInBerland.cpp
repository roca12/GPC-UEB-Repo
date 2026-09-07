/*
 * Autor: Juan Martinez
 * Problema: Roads in Berland (25C)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/25/problem/C
 * Difficulty: 1900
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const ll INF = 1e9;
vector<vector<int>> dist;

void floydWarshallN2(ll a, ll b) {
    for(ll i = 0; i < dist[0].size(); i++) {
        for(ll j = 0; j < dist[0].size(); j++) {
            if(dist[i][b] + dist[b][j] < dist[i][j]) dist[i][j] = dist[i][b] + dist[b][j];
        }
    }
    for(ll i = 0; i < dist[0].size(); i++) {
        for(ll j = 0; j < dist[0].size(); j++) {
            if(dist[i][a] + dist[a][j] < dist[i][j]) dist[i][j] = dist[i][a] + dist[a][j];
        }
    }
}

int main() {
    ll n, aux, q, a, b, p;
    cin>>n;
    dist.resize(n);
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            cin>>aux;
            dist[i].push_back(aux);
        }
    }
    cin>>q;
    while(q--) {
        cin>>a>>b>>p;
        a--;
        b--;
        if(p < dist[a][b]) {
            dist[b][a] = dist[a][b] = p;
        }
        floydWarshallN2(a,b);
        ll suma = 0;
        for(ll i = 0; i < n; i++) {
            for(ll j = i+1; j < n; j++) suma += dist[i][j];
        }
        cout<<suma<<" ";
    }
}
