/*
 * Autor: Juan Martinez
 * Problema: Fence (363B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/363/B
 * Difficulty: 1100
 */
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    ll n,k, mini, sum, indice;
    cin>>n>>k;
    ll dp[n+1];
    dp[0] = 0;
    for(ll i = 1; i <= n; i++) {
        cin>>mini;
        dp[i] = mini + dp[i-1];
    }
    mini =1e18;
    for(ll i = k; i <= n; i++){
       // cout<<i<<" "<<i-k+1<<" "<<(dp[i] - dp[i-k])<<endl;
        if((dp[i] - dp[i-k]) < mini) {
            mini = (dp[i] - dp[i-k]);
            indice = i-k+1;
        }
    }
    cout<<indice<<endl;
    return 0;
}

