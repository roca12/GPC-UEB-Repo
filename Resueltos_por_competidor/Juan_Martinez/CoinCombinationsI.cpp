/*
 * Autor: Juan Martinez
 * Problema: Coin Combinations I
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1635/
 */
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
vector<ll> arr;
vector<ll> dp;
ll n, m;
const ll modulo = 1e9 + 7;
 
ll calculate(ll act) {
    if(act > 0) {
        if(dp[act] == -1) {
            dp[act] = 0;
            for(ll i = 0; i < n; i++){
                //cout<<"pasando por "<<act-arr[i]<<endl;
                dp[act] += calculate(act-arr[i]) % modulo;
            }   
        }
        return dp[act];
    } else if(act < 0) {
        return 0;
    } else return 1;
}
 
int main() {
  //  ios_base::sync_with_stdio(false);
  //  cin.tie(nullptr);
  //  cout.tie(nullptr);
     cin>>n>>m;
     arr.resize(n);
     dp.assign(m+1, -1);
     for(ll i = 0 ; i < n; i++) {
        cin>>arr[i];
     }
     calculate(m);
     cout<<dp[m] % modulo<<endl;
}
