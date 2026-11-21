/*
 * Autor: Juan Martinez
 * Problema: To My Critics (1850A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/1850/problem/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"

int main() {
	int t; cin>>t;
    while(t--) {
        int a, b, c;
        cin>>a>>b>>c;
        bool z = 0;
        if(a+b >= 10) z = 1;
        if(c+b >= 10) z = 1;
        if(a+c >= 10) z = 1;
        if(z) cout<<"YES"<<ln;
        else cout<<"NO"<<ln;
    }
}
