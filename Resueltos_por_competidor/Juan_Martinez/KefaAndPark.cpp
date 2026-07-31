/*
 * Autor: Juan Martinez
 * Problema: Kefa and Park (580C)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/580/C
 * Difficulty: 1500
 */
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> cats;
vector<bool> visited;
int res = 0;
int m;

void addLeaf(int start, int end) {
    adj[(start-1)].push_back((end-1));
    adj[(end-1)].push_back((start-1));
}

void dfs(int node){
    stack<int> sta;
    sta.push(node-1);
    visited[(node-1)] = 1;
    while(!sta.empty()){
        int act = sta.top();
        sta.pop();
        //cout<<endl;
        //cout<<act<<" act "<<adj[act].size()<<endl;
        for(int i : adj[act]) {
            //cout<<i<<" ";
            if(cats[act] + cats[i] <= m && !visited[i]) {
                //cout<<act<<" pasando por "<<i<<" "<<cats[act] + cats[i]<<endl;
                if(cats[i] != 0) cats[i] = cats[act] + cats[i];
                if(!visited[i])sta.push(i);
                visited[i] = 1;
                if(adj[i].size() == 1) res++;
            }
        }
    }
}

int main() {
    int n, temp, temp2;
    cin>>n>>m;
    adj.resize(n);
    cats.resize(n);
    visited.resize(n);
    for(int i = 0; i < n; i++) cin>>cats[i];
    for(int i = 0; i < (n-1); i++) {
        cin>>temp>>temp2;
        addLeaf(temp, temp2);
    }
    
    dfs(1);
    cout<<res<<endl;
}
