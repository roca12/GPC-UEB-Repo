/*
 * Autor: Juan Martinez
 * Problema: School Dance
 * Juez online: Vjudge
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/CSES-1696
 */
#include <bits/stdc++.h>

using namespace std;

int n;
vector<vector<int>> capacity;
vector<vector<int>> adj;
vector<pair<int,int>> parejas;

int bfs(int s, int t, vector<int>& parent) {
    fill(parent.begin(), parent.end(), -1);
    parent[s] = -2;
    queue<pair<int, int>> q;
    q.push({s, 1e9});

    while (!q.empty()) {
        int cur = q.front().first;
        int flow = q.front().second;
        q.pop();

        for (int next : adj[cur]) {
            if (parent[next] == -1 && capacity[cur][next]) {
                parent[next] = cur;
                int new_flow = min(flow, capacity[cur][next]);
                if (next == t)
                    return new_flow;
                q.push({next, new_flow});
            }
        }
    }

    return 0;
}

int maxflow(int s, int t) {
    int flow = 0;
    vector<int> parent(n);
    int new_flow;

    while (new_flow = bfs(s, t, parent)) {
        flow += new_flow;
        int cur = t;
        while (cur != s) {
            int prev = parent[cur];
            capacity[prev][cur] -= new_flow;
            capacity[cur][prev] += new_flow;
            cur = prev;
        }
    }

    return flow;
}

void addNode(int a, int b){
    adj[a].push_back(b);
    adj[b].push_back(a);

    capacity[a][b] = 1;
}

int main()
{
    int b, g, p, temp1, temp2;
    cin>>b>>g>>p;
    n = (b+g) + 2;
    adj.clear();
    capacity.clear();
    parejas.clear();
    adj.resize(n);
    capacity.resize(n);
    capacity.assign(n, vector<int>(n, 0));
    set<int> nodosAgregados;
    set<pair<int,int>> parejas2;
    for(int i = 0; i < p; i++) {
        cin>>temp1>>temp2;
        temp2 += b;
        addNode(temp1, temp2);
        if(nodosAgregados.count(temp1) == 0){
            addNode(0,temp1);
            nodosAgregados.insert(temp1);
        }
        if(nodosAgregados.count(temp2) == 0){
            addNode(temp2, n-1);
            nodosAgregados.insert(temp2);
        }
        parejas.push_back({temp1,temp2});
    }
    cout<<maxflow(0,n-1)<<endl;
    for(auto [i,j] : parejas) {
        if(capacity[i][j] == 0){
            if(parejas2.count({i,(j-b)}) == 0){
                cout<<i<<" "<<(j-b)<<endl;
                parejas2.insert({i,(j-b)});
            }

        }
    }
    return 0;
}
