/*
 * Autor: Juan Martinez
 * Problema: Distinct Routes
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1711/
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
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
const int INF = 1e9;

vvi adj, og, capacity, paths;
vi parent;
vb visited, realVisited;

bool bfs(int s, int f, int n) {
    parent.clear();
    parent.resize(n, -1);
    parent[s] = s;
    queue<pii> que;
    que.push({s,INF});
    int node;
    pii act;
    while(!que.empty()) {
        act = que.front();
        que.pop();
        node = act.first;
        if(node == f) return act.second;
        for(int to : adj[node]) {
            if(capacity[node][to] > 0 && parent[to] == -1) {
                parent[to] = node;
                que.push({to, min(act.second, capacity[node][to])});
            }
        }
    }
    return 0;
}

void dfs(int start, int f) {
    stack<int> st;
    st.push(start);
    int act;
    parent[start] = start;
    visited[start] = 1;
    while(!st.empty()) {
        act = st.top();
        st.pop();
        if(act == f) break;
        for(int to: og[act]) {
            if(capacity[act][to] == 0 && !visited[to]) {
                visited[to] = 1;
                parent[to] = act;
                st.push(to);
            }
        }
    }
}

int maxFlow(int s, int f, int n) {
    int flow = 0, temp, curr;
    while(temp = bfs(s,f,n)) {
        flow += temp;
        curr =  f;
        while(curr != s) {
            capacity[parent[curr]][curr] -= temp;
            capacity[curr][parent[curr]] += temp;
            curr = parent[curr];
        }
    }
    return flow;
}

int main() {
	int n, m, a, b;
    cin>>n>>m;
    adj.resize(n);
    og.resize(n);
    realVisited.resize(n,0);
    capacity.resize(n, vi(n,0));
    for(int i=  0; i < m; i++) {
        cin>>a>>b;
        a--; b--;
        adj[a].add(b);
        adj[b].add(a);
        og[a].add(b);
        capacity[a][b] = 1;
    }
    a = maxFlow(0, n-1, n);
    cout<<a<<ln;
    while(a--) {
        paths.push_back({});
        parent.clear();
        parent.resize(n,-1);
        visited.clear();
        visited.resize(n,0);
        dfs(0, n-1);
        int curr =  n-1;
        while(curr != 0) {
            paths[paths.size()-1].push_back(curr+1);
            capacity[parent[curr]][curr] = 1;
            curr = parent[curr];
        }
         paths[paths.size()-1].push_back(1);
    }
    for(vi v : paths) {
        cout<<v.size()<<ln;
        for(int i = v.size()-1; i >= 0; i--) cout<<v[i]<<" ";
        cout<<ln;
    }
}
