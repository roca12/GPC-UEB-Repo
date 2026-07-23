/*
 * Autor: Juan Martinez
 * Problema: Sliding Window Xor
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/3426
 */
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
int main() {
	ll n, k;
    ll x, a , b, c;
    cin>>n>>k;
    cin>>x>>a>>b>>c;
    ll arr[n];
 
    for(ll i = 0; i < n; i++) {
        if(i == 0) arr[i] = x;
        else arr[i] = ((a*arr[i-1]) + b) % c;
    }
    ll l = 0, sumXor = 0, res = 0, indice = 0;
    for(ll i = 0; i < n; i++) {
        sumXor ^= arr[i];
        indice++;
        if(indice >= k) {
            //cout<<arr[l]<<" "<<arr[i]<<" "<<sumXor<<endl;
            res = res ^ sumXor;
            sumXor ^= arr[l];
            l++;
        }
    }
    cout<<res<<endl;
}
