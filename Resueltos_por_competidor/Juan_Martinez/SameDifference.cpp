/*
 * Autor: Juan Martinez
 * Problema: Same Difference (2266A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2166/problem/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

#define ln "\n"

int main() {
	int t, n; cin>>t;
    string s;
    while(t--) {
        cin>>n;
        cin>>s;
        map<char,int> mapa;
        for(char c: s) mapa[c]++;
        char c = s[n-1];
        int maxi = 0;
        for(auto [val,cant] : mapa) {
            if(val > maxi) {
                maxi = val;
                c = val;
            }
        }
        if(s[s[n-1]] != c) cout<<n-mapa[s[n-1]]<<ln;
        else cout<<n-maxi<<ln;
    }
}
