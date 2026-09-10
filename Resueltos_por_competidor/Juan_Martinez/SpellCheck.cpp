/*
 * Autor: Juan Martinez
 * Problema: Spell Check (1722A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1722/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

#define ln "\n"

int main() {
    int n, a; cin>>n;
	string s;
    while(n--) {
        cin>>a;
        cin>>s;
        map<char,int> mapa;
        for(char c: s) mapa[c]++;
        if(mapa['T'] == 1 && mapa['i'] == 1 && mapa['m'] == 1 && mapa['u'] == 1 &&
        mapa['r'] == 1 && s.size() == 5) cout<<"YES"<<ln;
        else cout<<"NO"<<ln;
    }
}
