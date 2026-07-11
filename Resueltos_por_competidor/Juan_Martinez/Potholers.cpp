/*
 * Autor: Juan Martinez
 * Problema: Potholers 
 * Juez online: Vjudge
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/SPOJ-POTHOLE
 */
#include <bits/stdc++.h>

using namespace std;

int n;
vector<vector<int>> capacity;
vector<vector<int>> adj;

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

    if(a == 0 || b == (n-1)) capacity[a][b] = 1;
    else capacity[a][b] = 1e9;
}


int main()
{
    //freopen("input.txt", "r", stdin);
    int temp, temp2, t;
    cin>>t;
    while(t--){
        cin>>n;
        adj.clear();
        capacity.clear();
        adj.resize(n);
        capacity.resize(n);
        capacity.assign(n, vector<int>(n, 0));
        for(int i = 0; i < n-1; i++){
            cin >> temp2;
            for(int j = 0; j < temp2; j++){
                cin>>temp;
                addNode(i, temp-1);
            }
        }
        cout<<maxflow(0,n-1)<<endl;
        cin.ignore();
    }
    return 0;
}
