/*
 * Autor: Juan Martinez
 * Problema: BerSU Ball (489B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/489/B
 * Difficulty: 1200
 */
#include <bits/stdc++.h>
using namespace std;

#define ln "\n"
#define vvi vector<vector<int>>
#define vi vector<int>
#define vb vector<bool>
#define pii pair<int,int>
#define vpii vector<pii>

vvi adj;
vb visited;
vi match;
vi boys, girls;

bool kuhn(int node) {
    if(visited[node]) return 0;
    visited[node] = 1;
    for(int i : adj[node]) {
        if(match[i] == -1 || kuhn(match[i])) {
            match[i] = node;
            return 1;
        }
    }
    return 0;
}

int main() {
	int n, m, cant = 0, aux;
    cin>>n;
    adj.resize(n);
    for(int i = 0; i < n; i++) {
        cin>>aux;
        boys.push_back(aux);
        //cout<<boys[i]<<ln;
    }
    cin>>m;
    match.resize(m, -1);
    for(int i = 0; i < m; i++) {
        cin>>aux;
        girls.push_back(aux);
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(abs(boys[i] - girls[j]) <= 1) {
                adj[i].push_back(j);
                //cout<<boys[i]<<" "<<girls[j]<<ln;
            }
        }
    }
    for(int i = 0; i < n; i++){
        visited.assign(n, 0);
        kuhn(i);
    }
    for(int i : match) {
        if(i != -1) { 
            cant++;
            //cout<<match[i]+1<<" "<<i+1<<ln;
        }
    }
    cout<<cant<<ln;
}
