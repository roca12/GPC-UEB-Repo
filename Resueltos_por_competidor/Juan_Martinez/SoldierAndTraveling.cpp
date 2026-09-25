/*
 * Autor: Juan Martinez
 * Problema: Soldier and Traveling (546E)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/546/E
 * Difficulty: 2100
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

vvi adj, capacity, capacity2;
vi parent;
vpii conexiones;

int bfs(int s, int f, int n) {
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

void addNode(int a, int b, int c){
    adj[a].add(b);
    adj[b].add(a);
    capacity[a][b] = c;
    capacity2[a][b] = c;
}

int main() {
	int n, m, total, a, b, sum1 = 0, sum2 = 0;
    cin>>n>>m;
    int arr[n], arr2[n];
    total = 2+(2*n);
    adj.resize(total);
    capacity.resize(total, vi(total, 0));
    capacity2.resize(total, vi(total, 0));
    for(int i = 0; i < n; i++) cin>>arr[i], sum1 += arr[i];
    for(int i = 0; i < n; i++) cin>>arr2[i], sum2 += arr2[i];
    for(int i = 1; i <= n; i++) {
        addNode(0, i, arr[i-1]);
        addNode(i, (i+n), INF);
        addNode((i+n), total-1, arr2[i-1]);
    }
    for(int i = 0; i < m; i++) {
        cin>>a>>b;
        conexiones.push_back({a,b});
        //cout<<a<<" y "<<b<<ln;
        addNode(a,(b+n), INF);
        addNode(b, (a+n), INF);
    }
    if(maxFlow(0, total-1, total) != sum1 || sum1 != sum2) {
        cout<<"NO"<<ln;
        return 0;
    }
    cout<<"YES"<<ln;
    int temp; 
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            temp = capacity2[i][j+n] - capacity[i][j+n];
            cout<<max(0,temp);
            if(j < n) cout<<" ";
        }
        cout<<ln;
    }
}
