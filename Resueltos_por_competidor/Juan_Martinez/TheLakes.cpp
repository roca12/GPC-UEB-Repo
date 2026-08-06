/*
 * Autor: Juan Martinez
 * Problema: The Lakes (1829E)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1829/E
 * Difficulty: 1100
 */
#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> lake;
vector<vector<bool>> visited;
int ver[4] = {1,0,-1,0};
int hor[4] = {0,1,0,-1};

int bfs(pair<int,int> start){
    queue<pair<int,int>> que;
    que.push(start);
    visited[start.first][start.second] = 1;
    pair<int,int> act;
    int v = 0;
    while(!que.empty()) {
        act = que.front();
        que.pop();
        v += lake[act.first][act.second];
        for(int i = 0; i < 4; i++){
            if((act.first+ver[i]) >= 0 && (act.second+hor[i]) >= 0
            && (act.first+ver[i]) < n && (act.second+hor[i]) < m
            ) {
                if(!visited[(act.first+ver[i])][(act.second+hor[i])] 
                && lake[(act.first+ver[i])][(act.second+hor[i])] != 0) {
                    que.push({(act.first+ver[i]), (act.second+hor[i])});
                    visited[(act.first+ver[i])][(act.second+hor[i])] = 1;
                }
            }
        }
    }
    return v;
}

int main() {
    int t, maxi; cin>>t;
    while(t--) {
        cin>>n>>m;
        maxi = 0;
        lake.assign(n, vector<int>(m, 0));
        visited.assign(n, vector<bool>(m, 0));
        for(int i = 0; i < n; i++){
            for(int j = 0 ; j < m; j++) cin>>lake[i][j];
        } 
        for(int i = 0; i < n; i++){
            for(int j = 0 ; j < m; j++) {
                if(!visited[i][j] && lake[i][j] != 0) {
                    maxi = max(maxi, bfs({i,j}));
                }
            }
        } 
        cout<<maxi<<endl;
    }
}   
