/*
 * Autor: Juan Martinez
 * Problema: Learning Languages (277A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/277/A
 * Difficulty: 1400
 */
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> lang;
vector<vector<int>> adj;
vector<int> visited;
int blocks = 0;

void addNode(int node, int lan){
    for(int i : lang[(lan-1)]){
        adj[node].push_back(i);
        adj[i].push_back(node);
    }
}

void dfs(int node) {
    stack<int> sta;
    if(!visited[node]){
        blocks++;
        sta.push(node);
        visited[node] = 1;
        while(!sta.empty()){
            int act = sta.top();
            sta.pop();
            for(int i : adj[act]){
                if(!visited[i]) {
                    visited[i] = 1;
                    sta.push(i);
                }
            }
        }
    }
}

int main() {
	int n, m, temp, temp2, zer = 0;
    cin>>n>>m;
    lang.resize(m);
    adj.resize(n);
    visited.resize(n);
    for(int i = 0; i < n; i++){
        cin>>temp;
        if(temp == 0) zer++;
        while(temp--) {
            cin>>temp2;
            addNode(i, temp2);
            lang[(temp2-1)].push_back(i);
        }
    }
    for(int i = 0; i < n; i++) dfs(i);
    if(zer == n) cout<<blocks<<endl;
    else cout<<(blocks-1)<<endl;
}
