/*
 * Autor: Juan Martinez
 * Problema: Frogs Jump (2272B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2272/problem/B
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
int main() {
	int t, n, tot; cin>>t;
    while(t--) {
        cin>>n;
        tot = 0;
        string a, b; cin>>a>>b;
        for(char c : a) if(c == 'f') tot++;
        for(char c : b) if(c == 'f') tot++;
        if(tot % 2 == 0) cout<<0<<ln;
        else cout<<1<<ln;
    }
}
