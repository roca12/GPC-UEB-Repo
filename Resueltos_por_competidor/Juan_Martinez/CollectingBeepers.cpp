/*
 * Autor: Juan Martinez
 * Problema: Collecting Beepers
 * Juez online: Vjudge
 * Veredicto: Accepted
 * Url: https://vjudge.net/contest/852841#problem/C
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
const int INF = 1e9;

int manhattan(int x1, int y1, int x2, int y2) {
    return abs(x1-x2) + abs(y1-y2);
}

int main() {
	int t, n, m, x1, y1, x, y, q, res; cin>>t;
    while(t--) {
        cin>>n>>m;
        cin>>x>>y;
        vpii puntos;
        cin>>q;
        vvi dp((1<<q), vi(q, INF));
        for(int i = 0; i < q; i++) {
            cin>>x1>>y1;
            puntos.push_back({x1, y1});
        }
        for(int i = 0; i < q; i++) {
            dp[(1<<i)][i] = manhattan(x, y, puntos[i].first, puntos[i].second);
        }
        for(int mask = 1; mask < (1<<q); mask++) {
            for(int i = 0; i < q; i++) {
                if((mask & (1<<i)) != 0) {
                    for(int j = 0; j < q; j++) {
                        if((mask & (1<<j)) == 0) {
                            dp[(mask | (1<<j))][j] = min(dp[(mask | (1<<j))][j], dp[mask][i] + manhattan(puntos[i].first, puntos[i].second, puntos[j].first, puntos[j].second));
                        }
                    }
                }
            }
        }
        res = INF;
        for(int i = 0; i < q; i++) {
            res = min(res, dp[(1<<q)-1][i] + manhattan(x, y, puntos[i].first, puntos[i].second));
        }
        cout<<"The shortest path has length "<<res<<ln;
    }
}
