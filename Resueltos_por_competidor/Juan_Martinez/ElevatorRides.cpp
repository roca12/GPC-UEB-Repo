/*
 * Autor: Juan Martinez
 * Problema: Elevator Rides
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1653/
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
const ll INF = 1e18;

int main() {
	int n, x;
    cin>>n>>x;
    vl persona5(n);
    vpl dp((1<<n), {INF, 0});
    for(ll i = 0; i < n; i++) cin>>persona5[i];
    dp[0] = {1,0};
    for(ll mask = 0; mask < (1<<n); mask++) {
        for(ll i = 0; i < n; i++) {
            if((mask & (1<<i)) == 0) {
                ll peso = dp[mask].second + persona5[i];
                pl temp;
                if(peso > x) temp = {dp[mask].first + 1, persona5[i]};
                else temp = {dp[mask].first, peso};
                dp[(mask | (1<<i))] = min(dp[(mask | (1<<i))], temp);
            }
        }
    }
    cout<<dp[(1<<n)-1].first<<ln;
}
