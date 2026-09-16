/*
 * Autor: Juan Martinez
 * Problema: Strongly Connected City (475B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/475/B
 * Difficulty: 1400
 */
#include <bits/stdc++.h>
using namespace std;

#define ln "\n"
#define vvi vector<vector<int>>
#define vi vector<int>
#define vb vector<bool>
#define pii pair<int,int>
#define vpii vector<pii>
#define add(x) push_back(x)

vector<vector<pair<int,int>>> adj;
set<pii> visited;

int dfs(int x, int y) {
    //cout<<x<<" "<<y<<ln;
    visited.insert({x,y});
    if(adj[x][y].first == -1 && adj[x][y].second == -1) return 0;
    if(adj[x][y].first != -1 && !visited.count({x,adj[x][y].first})) {
        dfs(x,adj[x][y].first);
    }
    //cout<<adj[x][y].first<<ln;
    if(adj[x][y].second != -1 && !visited.count({adj[x][y].second,y})) {
        dfs(adj[x][y].second, y);
    }
    return 0;
}

int main() {
    int n, m;
    string h, v;
    cin>>n>>m;
    adj.resize(n, vector<pair<int,int>>(m, {0,0}));
    cin>>h>>v;
    char c;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            c = h[i];
            if(c == '>') {
                if(j < m-1) adj[i][j].first = j+1;
                else adj[i][j].first = -1;
            } else {
                if(j > 0) adj[i][j].first = j-1;
                else adj[i][j].first = -1;
            }
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            c = v[i];
            if(c == 'v') {
                if(j < n-1) adj[j][i].second = j+1;
                else adj[j][i].second = -1;
            } else {
                if(j > 0) adj[j][i].second = j-1;
                else adj[j][i].second = -1;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            visited.clear();
            dfs(i,j);
            //cout<<visited.size()<<ln;
            if(visited.size() != n*m) {
                cout<<"NO"<<ln;
                return 0;
            }
        }
    }
    cout<<"YES"<<ln;
}
