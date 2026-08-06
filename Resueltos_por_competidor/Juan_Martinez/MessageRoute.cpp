/*
 * Autor: Juan Martinez
 * Problema: Message Route
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1667
 */
#include <bits/stdc++.h>
using namespace std;
 
vector<vector<int>> adj;
vector<bool> visited;
vector<int> from;
 
int n, m;
 
void addNode(int a, int b) {
    adj[a].push_back(b);
    adj[b].push_back(a);
}
 
bool bfs(int start) {
    queue<int> que;
    que.push(start);
    visited[start] = 1;
    from[start] = start;
    bool b = false;
    while(!que.empty()) {
        int act = que.front();
        que.pop();
        if(act == (n-1)) {
            b = true;
            break;
        }
        for(int i : adj[act]) {
            if(!visited[i]) que.push(i), from[i] = act;
            visited[i] = 1;
        }
    }
    return b;
}
int main() {
    int a, b;
    cin>>n>>m;
    adj.resize(n);
    visited.resize(n);
    from.resize(n);
    while(m--) {
        cin>>a>>b;
        a--;
        b--;
        addNode(a,b);
    }
    bool res = bfs(0);
    if(res){
        stack<int> sta;
        queue<int> que;
        que.push(n-1);
        int act;
        sta.push(n - 1);
        while(!que.empty()) {
            act = que.front();
            que.pop();
            que.push(from[act]);
            sta.push(from[act]);
            //cout<<act<<" " <<from[act]<<endl;
            if(from[act] == 0) break; 
        }
        cout<<sta.size()<<endl;
        while(!sta.empty()) {
            cout<<(sta.top()+1)<<" ";
            sta.pop();
        }
    }else cout<<"IMPOSSIBLE"<<endl;

}
