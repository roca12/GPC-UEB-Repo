/*
 * Autor: Juan Martinez
 * Problema: Angry Programmer
 * Juez online: Online Judge
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2501
 */
#include <bits/stdc++.h>

using namespace std;

int n, nodes;
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


int numero(int nodo){
    if(nodo == 1) return 0;
    else if(nodo == nodes) return n-1;
    else return nodo-1;
}

int numeroNuevo(int nodo){
    return numero(nodo) + (nodes-2);
}

void addNode(int nodo, int peso){
    adj[numeroNuevo(nodo)].push_back(numero(nodo));
    adj[numero(nodo)].push_back(numeroNuevo(nodo));
    capacity[numero(nodo)][numeroNuevo(nodo)] = peso;
}

void agregarAristas(int a, int b, int peso){
    int temp;
    if(a == 1 || a == nodes) temp = numero(a); else temp = numeroNuevo(a); 
    adj[temp].push_back(numero(b));
    adj[numero(b)].push_back(temp);
    capacity[temp][numero(b)] = peso;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    int temp, temp2, temp3, w, peso;
    while(true){
        cin>>nodes>>w;
        if(nodes == 0 && w == 0) break;
        n = ((nodes-2)*2) + 2;
        adj.clear();
        capacity.clear();
        adj.resize(n);
        capacity.resize(n);
        capacity.assign(n, vector<int>(n, 0));
        for(int i = 0; i < (nodes-2); i++){
            cin>>temp>>temp2;
            addNode(temp, temp2);
        }
        for(int i = 0; i < w; i++){
            cin>>temp>>temp2>>peso;
            agregarAristas(temp, temp2, peso);
            agregarAristas(temp2, temp, peso);
        }
        cout<<maxflow(0, n-1)<<endl;
    }
    return 0;
}
