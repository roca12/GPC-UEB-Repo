/*
 * Autor: Juan Martinez
 * Problema: Multiplication Table (577A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/577/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	ll n, x, con = 0; cin>>n>>x;
    for(ll i = 1; i <= n; i++) {
        if(x % i == 0) {
            if(i*n >= x) con++;
        }
    }
    cout<<con<<endl;
}
