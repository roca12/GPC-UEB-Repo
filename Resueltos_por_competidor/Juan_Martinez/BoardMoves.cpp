/*
 * Autor: Juan Martinez
 * Problema: Board Moves (1353C)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1353/C
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll; 
 
 
ll cuad[1000001];
ll dp[1000001];
 
int main() {
    dp[1] = 0;
    dp[3] = 8;
    cuad[3] = 9;
    ll cuadr;
    for(ll i = 5, j = 2; i < 1000000; i += 2, j++){
        cuad[i] = i*i;
        cuadr = cuad[i] - cuad[i-2];
        dp[i] = (cuadr * j) + dp[i-2];
    }
    ll t, n; cin>>t;
    while(t--) {
        cin>>n;
        cout<<dp[n]<<endl;
    }
}
