/*
 * Autor: Juan Martinez
 * Problema: Stubborn Pen (2299B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2290/problem/B
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
int main() {
	int t; cin>>t;
    int n, res; string s;
    bool rojo;
    while(t--) {
        cin>>n;
        cin>>s;
        res = 0;
        rojo = 1;
        for(char c: s) {
            if(rojo) {
                if(c != 'R') res++, rojo = !rojo;
            } else {
                if(c != 'B') res++, rojo = !rojo;
            }
            rojo = !rojo;
        }
         cout<<res<<ln;
    }
}
