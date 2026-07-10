/*
 * Autor: Juan Martinez
 * Problema: New Year Transportation (500A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/500/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
bool visited[30001];

void agregarNodo(int a, int b){
    adj[a].push_back(b);
}

void dfs(int start){
    if(!visited[start]){
        visited[start] = true;
        for(int i : adj[start]){
            dfs(i);
        }
    }
}

int main()
{
    int a, b, temp;
    cin >> a >> b;
    adj.resize((a+1));
    for(int i = 0; i < (a-1); i++) {
        cin >> temp;
        agregarNodo((i+1), temp+(i+1));
    }
    dfs(1);
    if(visited[b]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
