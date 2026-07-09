/*
 * Autor: Juan Martinez
 * Problema: Dominos 2 (11518)
 * Juez online: Online Judge
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2513
 */
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj(10001);
bool visited[10001];

void dfs(int start) {
    if(!visited[start]) { 
        visited[start] = true;
        //cout<<"visitando "<<start<<endl;
        for(int i : adj[start]) {
           //cout<< " i "<<i<<endl;
            dfs(i);
        }
    }
}

int main() {
	int t, n, m ,l, aux, aux2, contador; cin >> t;
    while(t--){
        contador = 0;
        cin>>n>>m>>l;
        adj.resize(n+1);
        for(int i = 0; i < (n+1); i++) visited[i] = false;
        for(int i = 0; i < m; i++) {
            cin >> aux >> aux2;
            adj[aux].push_back(aux2);
        }
        for(int i = 0; i < l; i++) {
            cin>>aux;
            dfs(aux);
        }
        for(int i = 1; i < (n+1); i++) {
            if(visited[i]) contador++;
        }
        cout<<contador<<endl;
        adj.clear();
    }
}
