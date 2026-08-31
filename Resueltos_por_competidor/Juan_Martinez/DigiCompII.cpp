/*
 * Autor: Juan Martinez
 * Problema: Digi Comp II (CCPL 2026 R8-D)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://vjudge.net/contest/845664#problem/D
 */
#include <bits/stdc++.h>
using namespace std;

//chavales chavales, que han cambiado las arqueras!!!
typedef long long int ll;

#define deb(x) cerr<<x<<"\n";

int main() {
    ll n, m, l, r;
    char c;
    cin>>n>>m;
    vector<pair<vector<ll>, char>> adj(m+1, {vector<ll>(2), 'L'});
    vector<ll> padres(m+1, 0);
    vector<ll> bolas(m+1, 0);
    
    for(ll i = 1; i <= m; i++) {
        cin>>c>>l>>r;
        adj[i].second = c;
        adj[i].first[0] = l;
        adj[i].first[1] = r;
    }

    ll act;
    vector<bool> alcanzables(m+1, 0);
    queue<ll> bfs;
    bfs.push(1);
    alcanzables[1] = 1;
    while(!bfs.empty()) {
        act = bfs.front();
        bfs.pop();
        for(ll i : adj[act].first) if(!alcanzables[i]) bfs.push(i), alcanzables[i] = 1;
    }
    
    for(ll i = 1; i <= m; i++) {
        if (alcanzables[i]) {
            padres[adj[i].first[0]]++;
            if (adj[i].first[0] != adj[i].first[1]) padres[adj[i].first[1]]++;
        }
    }
  
    queue<ll> que;
    que.push(1); 
    bolas[1] = n;
    while(!que.empty()) {
        act = que.front();
        que.pop();
        //deb(act);
        //deb(bolas[act]);
        if(bolas[act] % 2 == 0) {
            bolas[adj[act].first[0]] += bolas[act]/2;
            bolas[adj[act].first[1]] += bolas[act]/2;
        } else {
            if(adj[act].second == 'L') {
                bolas[adj[act].first[0]] += (bolas[act]/2)+1;
                bolas[adj[act].first[1]] += bolas[act]/2;
                adj[act].second = 'R';
            } else {
                bolas[adj[act].first[0]] += bolas[act]/2;
                bolas[adj[act].first[1]] += (bolas[act]/2)+1;
                adj[act].second = 'L';
            }   
        }
        if(adj[act].first[0] != adj[act].first[1]) {
            padres[adj[act].first[0]]--;
            padres[adj[act].first[1]]--;
        } else padres[adj[act].first[0]]--;
        
        if(adj[act].first[0] != 0 && padres[adj[act].first[0]] == 0) que.push(adj[act].first[0]);
        if(adj[act].first[1] != 0 && padres[adj[act].first[1]] == 0 && (adj[act].first[1] != adj[act].first[0])) que.push(adj[act].first[1]);
    }

    for(ll i = 1; i <= m; i++) {
        cout<<adj[i].second;
    }
}
