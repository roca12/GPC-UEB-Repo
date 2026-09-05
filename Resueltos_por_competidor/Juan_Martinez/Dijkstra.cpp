/*
 * Autor: Juan Martinez
 * Problema: Dijkstra? (20C)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/20/C
 * Difficulty: 1900
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define pq priority_queue
#define DBG(X) cerr << #X << ": " << (X) << endl
#define mp make_pair
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define all(v) v.begin(), v.end()
#define um unordered_map
#define mm multimap
#define ms multiset
#define in insert
#define vpii vector<pii>
#define vb vector<bool>
#define ln "\n"
const ll INF = 1e18;

vector<vector<pll>> adj;
vll dist, from, weights;

void addNode(ll a, ll b, ll p) {
    adj[a].push_back({b,p});
    adj[b].push_back({a,p});
}

void dijkstra(ll start) {
    dist[start] = 0;
    priority_queue<pll, vector<pll>, greater<pll>> q;
    q.push({dist[start], start});
    while(!q.empty()) {
        pll act = q.top();
        q.pop();
        if(dist[act.second] == INF) break;
        for(auto p: adj[act.second]) {
            ll node = p.first;
            ll len = p.second;
            if(dist[node] > len + dist[act.second]) {
                dist[node] = len + dist[act.second];
                from[node] = act.second;
                q.push({dist[p.first], node});
            }
        }    
    
    }
}

int main() {
    ll n, m, a, b, p;
    cin>>n>>m;
    adj.resize(n);
    from.resize(n);
    dist.resize(n, INF);
    for(ll i = 0; i < m; i++) {
        cin>>a>>b>>p;
        a--;
        b--;
        addNode(a,b,p);
    }
    dijkstra(0);
    if(dist[n-1] != INF) {
        a = n - 1;
        stack<ll> order;
        order.push(n);
        while(from[a] != 0) {
            order.push(from[a]+1);
            a = from[a];
        }
        order.push(1);
        while(!order.empty()) cout<<order.top()<<" ", order.pop();
    } else cout<<-1<<" ";
}
