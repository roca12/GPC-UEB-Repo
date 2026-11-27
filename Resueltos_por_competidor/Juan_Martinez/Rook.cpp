/*
 * Autor: Juan Martinez
 * Problema: Rook (1907A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/1907/problem/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
int main() {
	int t; cin>>t;
    while(t--) {
        string s; cin>>s;
        for(int i = 1; i <= 8; i++) {
            if(s[1] - '0' != i) cout<<s[0]<<i<<ln;
        }     
        for(int i = 97; i <  97+8; i++) {
            if(char(i) != s[0]) cout<<char(i)<<s[1]<<ln;
        }  
    }
}
