/*
 * Autor: Juan Martinez
 * Problema: Bad Prices (1213B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1213/B
 * Difficulty: 1100
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
    ll t, n, con; cin>>t;
    while(t--) {
        con = 0;
        cin>>n;
        ll arr[n];
        for(ll i = 0; i < n; i++) cin>>arr[i];
        ll mini = 1e18;
        for(ll i = n-1; i >= 0; i--){
            mini = min(mini, arr[i]);
            if(mini < arr[i]) con++;
        }
        cout<<con<<endl;
    }
}
