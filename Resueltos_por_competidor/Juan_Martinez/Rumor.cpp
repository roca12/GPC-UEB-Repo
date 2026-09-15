/*
 * Autor: Juan Martinez
 * Problema: Rumor (893C)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/893/C
 * Difficulty: 1300
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

typedef long long int ll;

vector<vector<ll>> adj; 
vector<ll> weights;
vb visited;
ll mini = 9e18;

void dfs(ll node) {
    visited[node] = 1;
    mini =  min(weights[node],mini);
    for(ll i : adj[node]) {
        if(!visited[i]) dfs(i);
    }
}

void addNode(ll a, ll b) {
    a--; b--;
    adj[a].add(b);
    adj[b].add(a);
}

int main() {
	ll n, m, a, b, res = 0;
    cin>>n>>m;
    weights.resize(n);
    adj.resize(n);
    visited.resize(n,0);
    for(ll i = 0; i < n; i++) cin>>weights[i];
    for(ll i = 0; i < m; i++) {
        cin>>a>>b;
        addNode(a, b);
    }
    for(ll i = 0; i < n; i++) {
        mini = 1e16;
        if(!visited[i]) {
            dfs(i);
            res += mini;
        }
        //cout<<res<<" "<<i<<ln;
    }
    cout<<res<<ln;
}
