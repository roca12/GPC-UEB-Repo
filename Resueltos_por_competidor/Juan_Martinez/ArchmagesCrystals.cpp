/*
 * Autor: EroMergeSort del TCC
 * Problema: Archmage's Crystals
 * Juez online: Vjudge
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/Gym-106063A
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	ll n, con = 0, sum = 0, prom; cin>>n;
    ll arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
        sum += arr[i];
    }
    prom = sum / n;
    while((prom * n) != sum){
        n--;
        con++;
        prom = sum / n;
    }
    cout<<con<<endl;
}
