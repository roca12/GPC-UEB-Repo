/*
 * Autor: Juan Martinez
 * Problema: Fox And Two Dots (510B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/510/B
 * Difficulty: 1500
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define ln "\n"
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define vi vector<int>
#define vl vector<ll>
#define vb vector<bool>
#define pii pair<int,int>
#define pl pair<ll,ll>
#define vpii vector<pii>
#define vpl vector<pl>
#define add(x) push_back(x)
const ll INF = 1e9;
int z, d;

vvi color;
vector<vector<char>> matriz;
int x[4] = {0,1,0,-1};
int y[4] = {1,0,-1,0};

bool dfs(int n, int m, int p, int p1, char c){
    color[n][m] = 1;
    //cout<<n<<" "<<m<<ln;
    for(int i = 0; i < 4; i++){
        if((n+y[i]) == p && (m+x[i]) == p1) continue;
        if(((m+x[i]) >= 0 && (m+x[i]) < d) && ((n+y[i]) >= 0 && (n+y[i]) < z) && matriz[(n+y[i])][(m+x[i])] == c) {
            if(color[(n+y[i])][(m+x[i])] == 1) return 1;
            if(dfs((n+y[i]),(m+x[i]), n, m, c)) return 1;
        }
    }
    color[n][m] = 2;
    return 0;
}

int main() {
    int n, m;
    cin>>n>>m;
    z = n; d = m;
    matriz.resize(n, vector<char>(m));
    color.resize(n, vi(m,0));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin>>matriz[i][j];
        }
    }
    cerr<<"Yes"<<ln;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(color[i][j] == 0) {
                if(dfs(i,j, i,j, matriz[i][j])) {
                    cout<<"Yes"<<ln;
                    return 0;
                }
            }
        }
    }
    cout<<"No"<<ln;
}
