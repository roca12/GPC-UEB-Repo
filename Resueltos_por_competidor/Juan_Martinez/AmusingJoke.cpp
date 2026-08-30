/*
 * Autor: Juan Martinez
 * Problema: Amusing Joke (141A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/141/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	string a, b, c;
    cin>>a>>b>>c;
    map<char, int> mapa, mapa2;
    for(char d : a) mapa[d]++;
    for(char d : b) mapa[d]++;
    for(char d : c) mapa2[d]++;
    bool Z = 1;
    if(a.size()+b.size() != c.size()) Z = 0;
    for(auto [val, cant] : mapa) {
        if(!(mapa2[val] == cant)) {
            Z = 0;
            break;
        }
    }
    if(Z) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
