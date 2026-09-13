/*
 * Autor: Juan Martinez
 * Problema: Gopher II
 * Juez online: Kattis
 * Veredicto: Accepted
 * Url: https://open.kattis.com/problems/gopher2
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
vector<pair<double,double>> gopher, holes;

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
	double m, n, s, v, dmax;
    while(cin>>n>>m>>s>>v){
        int cant = 0;
        double x, y;
        dmax = s * v;
        adj.resize(n);
        match.resize(m, -1);
        for(int i = 0; i < n; i++) {
            cin>>x>>y;
            gopher.push_back({x,y});
        }
        for(int i = 0; i < m; i++) {
            cin>>x>>y;
            holes.push_back({x,y});
        }
        for(int j = 0; j < n; j++) {
            pair<double,double> g = gopher[j];
            for(int i = 0; i < m; i++) {
                double aux = sqrt(((g.first - holes[i].first)*(g.first - holes[i].first)) + ((g.second - holes[i].second)*(g.second - holes[i].second)));
                //cout<<aux<<ln;
                if(aux <= dmax) adj[j].push_back(i);
            }
        }
        for(int i = 0; i < n; i++) {
            visited.assign(n,0);
            kuhn(i);
        }
        for(int i = 0; i < m; i++) if(match[i] == -1) cant++;
        cout<<cant<<ln;
        adj.clear();
        match.clear();
        gopher.clear();
        holes.clear();
    }
}
