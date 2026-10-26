/*
 * Autor: Juan Martinez
 * Problema: Your Name (2167B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2167/B
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"

int main() {
	int t, n; cin>>t;
    while(t--) {
        cin>>n;
        string a, b; cin>>a>>b;
        map<char, int> mapa, mapa2;
        for(char c: a) mapa[c]++;
        for(char c: b) mapa2[c]++;
        bool b1 = 0;
        for(auto [val,cant] : mapa) {
            if(cant != mapa2[val]) b1 = 1;
        }
        if(!b1) cout<<"YES"<<ln;
        else cout<<"NO"<<ln;
    }
}
