/*
 * Autor: Juan Martinez
 * Problema: Candies and Two Sisters (1335A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1335/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"

int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        if(n <= 2) cout<<0<<ln;
        else cout<<(n-1)/2<<ln;
    }
}
