/*
 * Autor: Juan Martinez
 * Problema: Non-academic Problem (1986F)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/1986/problem/F
 * Difficulty: 1900
 */
#include <bits/stdc++.h>
using namespace std;

#define ln "\n"
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define vi vector<int>
#define vl vector<ll>
#define vb vector<bool>
#define pii pair<int,int>
#define pl pair<ll,ll>
#define vpii vector<pii>
#define vpl vector<pl>
#define add(x) push_back(x)

typedef long long int ll;

vvl adj;
vb visited;
vl low, tin;
ll timer, cant, mini;
vl siz;

void dfs(ll node, ll parent) {
    visited[node] = 1;
    siz[node] = 1;
    low[node] = tin[node] = timer++;
    for(ll to : adj[node]) {
        if(to == parent) continue;
        if(visited[to]) low[node] = min(low[node] , tin[to]);
        else {
            dfs(to, node);
            siz[node] += siz[to];
            low[node] = min(low[node], low[to]);
            if(low[to] > tin[node]) {
                if( (((adj.size()-siz[to])*(adj.size()-siz[to]-1))/2) + ((siz[to]*(siz[to]-1))/2) < mini) {
                    mini = (((adj.size()-siz[to])*(adj.size()-siz[to]-1))/2) + ((siz[to]*(siz[to]-1))/2);
                }
            }
        }
    }
}


int main() {
	ll n, m, t, a, b, res;
    cin>>t;
    while(t--) {
        cin>>n>>m;
        adj.resize(n);
        visited.resize(n,0);
        low.resize(n);
        tin.resize(n);
        siz.resize(n, 0);
        timer = 0;
        for(ll i = 0; i < m; i++) {
            cin>>a>>b;
            a--;
            b--;
            adj[a].add(b);
            adj[b].add(a);
        }
        mini = 9e18;
        dfs(0,0);
        if(mini == 9e18) {
            mini = (n*(n-1))/2;
        }
        cout<<mini<<ln;
        adj.clear();
        visited.clear();
        low.clear();
        tin.clear();
    }

}
