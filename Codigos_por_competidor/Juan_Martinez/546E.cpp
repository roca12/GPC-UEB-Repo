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

vvi adj, capacity;
vi parent;

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
    capacity[a][b] = c;
}

int main() {
	int n, m, total, aux, a, b;
    cin>>n>>m;
    int arr[n];
    total = 2+(2*n);
    adj.resize(total);
    capacity.resize(total, vi(total, 0));
    for(int i = 0; i < n; i++) {
        cin>>aux;
        addNode(0, i+1, aux);
        addNode((i+n), total-1, INF);
    }
    for(int i = 0; i < n; i++) cin>>arr[i];
    for(int i = 0; i < m; i++) {
        cin>>a>>b;
        a--;
        b--;
        addNode(a,(b+n), INF);
    }
    queue<int> q;
    q.push(0);
    while(!q.empty()){
        int act = q.front();
        q.pop();
        for(int to : adj[act]) {
            cout<<to<<ln;
            q.push(to);
        }
    }
}

