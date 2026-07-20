/*
 * Autor: Juan Martinez
 * Problema: Buying Torches (1418A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1418/A
 * Difficulty: 1000
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
	int t; cin>>t;
    ll sticks, trads;
    ll x, y, n;

    while(t--){
        trads = 0;
        cin>>x>>y>>n;

        sticks = (y*n) + n - 1;
        trads += n;
        trads += (sticks + x - 2)/(x - 1);
        //cout<<" req "<<sticks/(x - 1)<<endl;
        cout<<trads<<endl;
    }
}
