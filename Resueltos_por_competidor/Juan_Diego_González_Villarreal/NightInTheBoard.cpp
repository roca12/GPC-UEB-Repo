/*
* Autor: Juan Diego Gonzalez Villarreal
* Problema: 
* Juez: 
* Veredicto: Accepted
* URL: 
*/

#include<bits/stdc++.h>
#define DBG(X) cerr<<#X<<": "<<(X)<<endl
#define vi vector<int>
#define vvi vector<vi>
#define mpii map<int,int>
#define mpis map<int,string>
#define mpsi map<string,i>
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define DBGARR(a, n) { cerr << #a << " = [ "; for (int i = 0; i < (n); i++) cerr << (a)[i] << " "; cerr << "]" << endl; }
typedef long long ll;
typedef double long dl;
using namespace std;

int k;
vvi adj;
int cutpoints = 0;

vector<bool> visited;
vi tin, low;
int timer;

vector<bool> is_cut;

void dfs(int v, int p = -1) {
    visited[v] = true;
    tin[v] = low[v] = timer++;
    int children=0;
    for (int to : adj[v]) {
        if (to == p) continue;
        if (visited[to]) {
            low[v] = min(low[v], tin[to]);
        } else {
            dfs(to, v);
            low[v] = min(low[v], low[to]);
            if (low[to] >= tin[v] && p!=-1)
                is_cut[v] = true;
            ++children;
        }
    }
    if(p == -1 && children > 1)
        is_cut[v] = true;
}

void find_cutpoints() {
    timer = 0;
    visited.assign(k, false);
    tin.assign(k, -1);
    low.assign(k, -1);
    is_cut.assign(k, false);
    for (int i = 0; i < k; ++i) {
        if (!visited[i])
            dfs (i);
    }
    cutpoints = count(is_cut.begin(), is_cut.end(), true);
}

int movs [8][2] = {
    {1,2},{2,1},{-1,2},{1,-2},{-2,1},{2,-1},{-1,-2},{-2,-1}
};

bool checkMov(int x, int y, int n){
    return (x>=0 && x<n && y>=0 && y<n);
}

int main(){
    int n;
    bool first = true;
    while(cin>>n>>k){
        adj.assign(k,vi());
        cutpoints = 0;
        map<pii, int> trd;
        vector<vector<bool>> brd(n, vector<bool>(n,false));
        for(int i = 0,r,c; i<k;i++){
            cin>>r>>c;
            brd[--r][--c]=true;
            trd.insert(mp(mp(r,c), i));
        }
        for(int i = 0; i<n;i++){
            for(int j = 0; j<n;j++){
                if(brd[i][j]){
                    for(auto &[r,c]: movs){
                        pii tmp = mp(i+r,j+c);
                        if(checkMov(tmp.first, tmp.second, n) && brd[tmp.first][tmp.second]){
                            int from = trd[mp(i,j)], to = trd[tmp];
                            adj[from].pb(to);
                        }
                    }
                }
            }
        }
        find_cutpoints();
        if(!first) cout<<" ";
        cout<<cutpoints;
        first = false;
    }
}