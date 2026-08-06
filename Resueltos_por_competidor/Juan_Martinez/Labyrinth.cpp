/*
 * Autor: Juan Martinez
 * Problema: Labyrinth
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1193/
 */
#include <bits/stdc++.h>
using namespace std;
 
vector<vector<char>> lab;
vector<vector<bool>> visited;
vector<vector<pair<int,int>>> from;
int hor[4] = {0,1,0,-1};
int ver[4] = {1,0,-1,0};
char pos[4] = {'U','L','D','R'};
 
int n, m;
pair<int, int> fin;
 
bool bfs(pair<int,int> start) {
    queue<pair<int,int>> que;
    que.push(start);
    visited[start.first][start.second] = 1;
    bool b = false;
    while(!que.empty()){
       pair<int, int> act = que.front();
        que.pop();
        if(lab[act.first][act.second] == 'B'){
            b = true;
            fin = act;
            break;
        }
        for(int i = 0; i < 4; i++){
            if((ver[i]+act.first) >= 0 && ((hor[i]+act.second)) >= 0 
            && (ver[i]+act.first) < n && ((hor[i]+act.second)) < m) {
                if(lab[(ver[i]+act.first)][(hor[i]+act.second)] != '#' && !visited[(ver[i]+act.first)][(hor[i]+act.second)]) {
                    visited[(ver[i]+act.first)][(hor[i]+act.second)] = 1;
                    que.push({(ver[i]+act.first), (hor[i]+act.second)});
                    from[(ver[i]+act.first)][(hor[i]+act.second)] = act;
                }
            }
        }
    }
    return b;
}
 
string path(pair<int, int> to){
    queue<pair<int,int>> que;
    que.push(to);
    stack<char> temp ;
    while(!que.empty()) {
        pair<int,int> act = que.front();
        que.pop();
        pair<int, int> temp2;
        for(int i = 0; i < 4; i++) {
            temp2 = {(ver[i]+act.first),(hor[i]+act.second)};
            if(temp2 == from[act.first][act.second]) {
                temp.push(pos[i]);
                que.push(temp2);
            }
        }
    }
    string res = "";
    while(!temp.empty()) res += temp.top(), temp.pop();
    return res;
}
 
int main(){
    cin>>n>>m;
    pair<int,int> start;
    lab.assign(n, vector<char>(m, '#'));
    visited.assign(n, vector<bool>(m, 0));
    from.assign(n, vector<pair<int,int>>(m, {-1,-1}));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin>>lab[i][j];
            if(lab[i][j] == 'A') start = {i, j};
        }
    }
    bool res = bfs(start);
    if(!res) cout<<"NO"<<endl;
    else {
        cout<<"YES"<<endl;
        string temp = path(fin);
        cout<<temp.size()<<endl;
        cout<<temp<<endl;
    }
    return 0;
}
