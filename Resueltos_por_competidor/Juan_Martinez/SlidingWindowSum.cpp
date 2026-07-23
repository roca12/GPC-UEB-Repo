/*
 * Autor: Juan Martinez
 * Problema: Sliding Window Sum
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/result/18063841/
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
    ll l = 0, sum = 0, res = 0, indice = 0;
    for(ll i = 0; i < n; i++) {
        sum += arr[i];
        indice++;
        if(indice >= k) {
            //cout<<arr[l]<<" "<<arr[i]<<" "<<sum<<endl;
            res = res ^ sum;
            sum -= arr[l];
            l++;
        }
    }
    cout<<res<<endl;
}
