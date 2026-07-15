/*
* Autor: Juan Diego Gonzalez Villarreal
* Problema: 
* Juez: 
* Veredicto: Accepted
* URL: 
*/

#include<bits/stdc++.h>
#define DBG(X) cerr<<#X<<": "<<(X)<<endl
#define vi vector<int>
#define vvi vector<vi>
#define mpii map<int,int>
#define mpis map<int,string>
#define mpsi map<string,i>
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define INF INT_MAX
#define DBGARR(a, n) { cerr << #a << " = [ "; for (int i = 0; i < (n); i++) cerr << (a)[i] << " "; cerr << "]" << endl; }
typedef long long ll;
typedef double long dl;
using namespace std;

int n;
vector<vector<ll>> capacity;
vvi adj;

ll bfs(int s, int t, vector<ll>& parent) {
    fill(parent.begin(), parent.end(), -1);
    parent[s] = -2;
    queue<pair<int, int>> q;
    q.push({s, INF});

    while (!q.empty()) {
        ll cur = q.front().first;
        ll flow = q.front().second;
        q.pop();

        for (ll next : adj[cur]) {
            if (parent[next] == -1 && capacity[cur][next]) {
                parent[next] = cur;
                ll new_flow = min(flow, capacity[cur][next]);
                if (next == t)
                    return new_flow;
                q.push({next, new_flow});
            }
        }
    }

    return 0;
}

ll maxflow(int s, int t) {
    ll flow = 0;
    vector<ll> parent(n+1);
    ll new_flow;

    while (new_flow = bfs(s, t, parent)) {
        flow += new_flow;
        ll cur = t;
        while (cur != s) {
            ll prev = parent[cur];
            capacity[prev][cur] -= new_flow;
            capacity[cur][prev] += new_flow;
            cur = prev;
        }
    }

    return flow;
}

int main(){
    int m;
    cin>>n>>m;
    adj.resize(n+1);
    capacity.resize(n+1,vector<ll>(n+1,0));
    for(int i = 0,a,b,c; i<m;i++){
        cin>>a>>b>>c;
        adj[a].push_back(b);
        adj[b].push_back(a);
        capacity[a][b] += c;
    }
    cout<<maxflow(1,n);
}