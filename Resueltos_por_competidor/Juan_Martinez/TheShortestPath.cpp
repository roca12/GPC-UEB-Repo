/*
 * Autor: Juan Martinez
 * Problema: SHPATH - The Shortest Path
 * Juez online: Spoj
 * Veredicto: Accepted
 * Url: https://www.spoj.com/problems/SHPATH/
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
}

void dijkstra(ll start) {
    dist[start] = 0;
    pq<pll, vector<pll>, greater<pll>> q;
    q.push({dist[start], start});
    while(!q.empty()) {
        pll act = q.top();
        q.pop();
        if(act.first != dist[act.second]) continue;
        for(auto p: adj[act.second]) {
            ll node = p.first;
            ll len = p.second;
            if(dist[node] > len + dist[act.second]) {
                dist[node] = len + dist[act.second];
                from[node] = act.second;
                q.push({dist[node], node});
            }
        }    
    
    }
}

int main() {
    ll t, n, m, b, p;
    cin>>t;
    string s, s1;
    while(t--) {
        map<string, int> names;
        cin>>n;
        adj.resize(n);
        from.resize(n);
        dist.resize(n, INF);
        for(int i = 0; i < n; i++) {
            cin>>s;
            names[s] = i;
            cin>>m;
            for(int j = 0; j < m; j++) {
                cin>>b>>p;
                b--;
                addNode(i, b, p);
            }
        }
        cin>>p;
        for(int i = 0; i < p; i++){
            cin>>s>>s1;
            dijkstra(names[s]);
            cout<<dist[names[s1]]<<ln;

            from.clear();
            dist.clear();
            dist.resize(n, INF);
            from.resize(n);
        }
        adj.clear();
        from.clear();
        dist.clear();
    }
}
