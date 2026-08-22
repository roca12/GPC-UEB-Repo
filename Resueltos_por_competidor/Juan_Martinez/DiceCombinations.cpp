/*
 * Autor: Juan Martinez
 * Problema: Dice Combinations
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1633/
 */
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
int main() {
    vector<ll> dp(1000001,0);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    dp[4] = 8;
    dp[5] = 16;
    dp[6] = 32;
    ll n; cin>>n;
    for (ll i = 7; i <= n; i++) {
        for(ll j = 1; j <= 6; j++) dp[i] = (dp[i] + dp[i-j]) % 1000000007;
        dp[i] = dp[i] % 1000000007;
    }
    cout<<dp[n]<<endl;
