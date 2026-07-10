#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;
vector<int> adj[MAXN];
int disc[MAXN], low[MAXN], timer_;
bool esAP[MAXN];
int n, m;

void dfs(int u, int padre) {
    disc[u] = low[u] = ++timer_;
    int hijos = 0;
    bool saltoPadre = false;
    for (int v : adj[u]) {
        if (v == padre && !saltoPadre) { saltoPadre = true; continue; } 
        if (!disc[v]) {
            hijos++;
            dfs(v, u);
            low[u] = min(low[u], low[v]);
            if (padre != -1 && low[v] >= disc[u]) esAP[u] = true;
        } else {
            low[u] = min(low[u], disc[v]);
        }
    }
    if (padre == -1 && hijos > 1) esAP[u] = true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    while (cin >> n >> m) {
        if(n==0 && m==0) break;
        for (int i = 0; i < n; i++) {
            adj[i].clear();
            disc[i] = low[i] = 0;
            esAP[i] = false;
        }
        timer_ = 0;

        for (int i = 0, u, v; i < m; i++) {
            cin >> u >> v;
            u--, v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for (int i = 0; i < n; i++)
            if (!disc[i]) dfs(i, -1);

        int cnt = 0;
        for (int i = 0; i < n; i++)
            if (esAP[i]) cnt++;

        cout << cnt << "\n";
    }
    return 0;
}