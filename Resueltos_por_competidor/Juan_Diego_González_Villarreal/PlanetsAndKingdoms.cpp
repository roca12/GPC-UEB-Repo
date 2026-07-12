#include<bits/stdc++.h>
using namespace std;

vector<bool> visited; 


void dfs(int v, vector<vector<int>> const& adj, vector<int> &output) {
    visited[v] = true;
    for (auto u : adj[v])
        if (!visited[u])
            dfs(u, adj, output);
    output.push_back(v);
}

void strongly_connected_components(vector<vector<int>> const& adj,
                                  vector<vector<int>> &components,
                                  vector<vector<int>> &adj_cond) {
    int n = adj.size();
    components.clear(), adj_cond.clear();

    vector<int> order; 

    visited.assign(n, false);

    for (int i = 0; i < n; i++)
        if (!visited[i])
            dfs(i, adj, order);

    vector<vector<int>> adj_rev(n);
    for (int v = 0; v < n; v++)
        for (int u : adj[v])
            adj_rev[u].push_back(v);

    visited.assign(n, false);
    reverse(order.begin(), order.end());

    vector<int> roots(n, 0); 

    for (auto v : order)
        if (!visited[v]) {
            std::vector<int> component;
            dfs(v, adj_rev, component);
            components.push_back(component);
            int root = *component.begin();
            for (auto u : component)
                roots[u] = root;
        }

    adj_cond.assign(n, {});
    for (int v = 0; v < n; v++)
        for (auto u : adj[v])
            if (roots[v] != roots[u])
                adj_cond[roots[v]].push_back(roots[u]);
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n, vector<int>()), components(n , vector<int>()), adj_cond(n , vector<int>());
    for(int i = 0,a,b; i<m; i++){
        cin>>a>>b;
        adj[--a].push_back(--b);
    }
    strongly_connected_components(adj,components,adj_cond);
    cout<<components.size()<<endl;
    vector<int> ans(n);
    for(int i = 0; i<components.size(); i++){
        for(int vert: components[i]){
            ans[vert]=i+1;
        }
    }
    for(int num: ans)cout<<num<<" ";
}