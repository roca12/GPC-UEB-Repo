/*
 * Autor: Juan Martinez
 * Problema: Counting Rooms
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1192/
 */
#include <bits/stdc++.h>
using namespace std;
 
int n, m, con = 0;
vector<vector<char>> rooms;
vector<vector<bool>> visited;
int ver[4] = {1,0,-1,0};
int hor[4] = {0,1,0,-1};
 
void dfs(pair<int,int> start) {
    stack<pair<int,int>> sta;
    sta.push(start);
    visited[start.first][start.second] = 1;
    pair<int,int> act;
    while(!sta.empty()) {
        act = sta.top();
        sta.pop();
        for(int i = 0; i < 4; i++) {
            if((ver[i]+act.first) >= 0 && (hor[i]+act.second) >= 0
            && (ver[i]+act.first) < n && (hor[i]+act.second) < m
            ) {
                if(rooms[(ver[i]+act.first)][(hor[i]+act.second)] != '#' && !visited[(ver[i]+act.first)][(hor[i]+act.second)]) {
                    visited[(ver[i]+act.first)][(hor[i]+act.second)] = 1;
                    sta.push({(ver[i]+act.first), (hor[i]+act.second)});
                }
            }
        }
    }
}
 
int main(){
    cin>>n>>m;
    rooms.assign(n, vector<char>(m, '#'));
    visited.assign(n, vector<bool>(m, 0));      
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            cin>>rooms[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            if(rooms[i][j] != '#') {
                if(!visited[i][j]) {
                    dfs({i,j});
                    con++;
                }
            }
        }
    }
    cout<<con<<endl;
    return 0;
}
