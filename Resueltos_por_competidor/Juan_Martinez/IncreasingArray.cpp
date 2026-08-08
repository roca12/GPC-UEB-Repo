/*
 * Autor: Juan Martinez
 * Problema: Increasing Array
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1094
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	ll n, moves = 0; cin>>n;
    vector<ll> arr(n);
    for(ll i = 0; i < n ; i++) {
        cin>>arr[i];
        if(i != 0) 
            if(arr[i] < arr[i-1]) {
                moves += arr[i-1] - arr[i];
                arr[i] = arr[i-1];
            }
    }
    cout<<moves<<endl;
}
