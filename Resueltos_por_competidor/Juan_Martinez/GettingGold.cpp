/*
 * Autor: Juan Martinez
 * Problema: Getting Gold
 * Juez online: Online Judge
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2597
 */
#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> arr;
vector<vector<bool>> visited;

int gold;

queue<pair<int,int>> que;
void bfs(pair<int,int> p){
    que.push(p);
    visited[p.first][p.second] = true;
    while(!que.empty()){
        pair<int,int> act = que.front();
        que.pop();
        //cout<<act.first<<" "<<act.second<<endl;

        if(arr[act.first][act.second] == 'G') gold++;
       
        if(arr[act.first][(act.second+1)] == 'T' 
        || arr[act.first][(act.second-1)] == 'T' 
        || arr[(act.first+1)][act.second] == 'T' 
        || arr[(act.first-1)][act.second] == 'T'){
            continue;
        }

        if(!visited[act.first][(act.second+1)] && arr[act.first][(act.second+1)] != '#') que.push({act.first,(act.second+1)}), visited[act.first][(act.second+1)] = true;
        if(!visited[act.first][(act.second-1)] && arr[act.first][(act.second-1)] != '#') que.push({act.first,(act.second-1)}), visited[act.first][(act.second-1)] = true;
        if(!visited[(act.first+1)][act.second] && arr[(act.first+1)][act.second] != '#') que.push({(act.first+1),act.second}), visited[(act.first+1)][act.second] = true;
        if(!visited[(act.first-1)][act.second] && arr[(act.first-1)][act.second] != '#') que.push({(act.first-1),act.second}), visited[(act.first-1)][act.second] = true;
    }
}

int main() {
	int m, n;
    pair<int,int> p = {0,0};
    while(cin>>m>>n){
        arr.clear();
        visited.clear();
        arr.assign(n, vector<char>(m, 0));
        visited.assign(n, vector<bool>(m, 0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++) {
                cin>>arr[i][j];
                if(arr[i][j] == 'P') p = {i,j};
            }
        }
        gold = 0;
        bfs(p);
        cout<<gold<<endl;
    }

}
