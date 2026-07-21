/*
 * Autor: Juan Martinez
 * Problema: Kuriyama Mirai's Stones (433B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/433/B
 * Difficulty: 1200
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
    ll n, q, t, l, r;
    cin>>n;

    vector<ll> arr(n+1);
    ll dp[n+1], dpV[n+1];

    arr[0] = 0;
    dp[0] = 0;
    dpV[0] = 0;
    
    for(ll i = 1; i <= n; i++) {
        cin>>arr[i];
        dp[i] = arr[i] + dp[i-1];
    }

    sort(arr.begin(), arr.end());
    for(ll i = 1; i <= n; i++) {
        dpV[i] = arr[i] + dpV[i-1];
    }

    cin>>q;
    while(q--){
        cin>>t>>l>>r;
        if(t == 1) cout<<(dp[r] - dp[l-1])<<endl;
        else cout<<(dpV[r] - dpV[l-1])<<endl;
    }
}
