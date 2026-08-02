/*
 * Autor: Juan Martinez
 * Problema: Badge (1020B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1020/B
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited; 

void addNode(int i) {
    int temp; cin>>temp;
    adj[i].push_back((temp-1));
}

int dfs(int start) {
    stack<int> sta;
    sta.push(start);
    visited[start] = 1;
    int act;
    while(!sta.empty()) {
        act = sta.top();
        sta.pop();
        for(int i : adj[act]) {
            if(visited[i]) {
                return (i+1);
            } else {
                sta.push(i);
                visited[i] = 1;
            }  
        }
    }
    return act;
}

int main() {
    int n; cin>>n;
    adj.resize(n);
    for(int i = 0; i < n; i++) addNode(i);
    for(int i = 0 ; i < n; i++) {
        visited.clear();
        visited.resize(n);
        cout<<dfs(i)<<" ";
    }
}
