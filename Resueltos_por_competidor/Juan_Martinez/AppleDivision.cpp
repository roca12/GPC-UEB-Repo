/*
 * Autor: Juan Martinez
 * Problema: Apple Division
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1623/
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	ll n; cin>>n;
    ll arr[n], total = 0;
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
        total += arr[i];
    }
    ll mini = total, sum;
    for(ll i = 0; i < (1<<n); i++){
        sum = 0;
        for(ll j = 0; j < n; j++){
            if(i & (1<<j)) sum += arr[j];
        }
        //cout<<sum<<endl;
        if(abs((total - sum) - sum) < mini) mini = abs((total - sum) - sum);
    }
    cout<<mini<<endl;
}

