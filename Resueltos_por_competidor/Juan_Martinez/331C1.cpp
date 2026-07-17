/*
 * Autor: Juan Martinez
 * Problema: The Great Julya Calendar (331C1)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/331/C1
 * Difficulty: 1100
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
	ll n, maxi; cin>>n;
    ll con = 0;
    string s;
    while(n > 0){
        maxi = -1;
        s = to_string(n);
        for(char c : s) if( c -'0' > maxi) maxi = c - '0';
        n-=maxi;
        con++;
    }
    cout<<con<<endl;
}

