/*
 * Autor: Juan Martinez
 * Problema: Borze (32B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/32/B
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
int main() {
	string s;
    cin>>s;
    string mensaje = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '.') mensaje.push_back((0 + '0'));
        else if(s[i] == '-' && s[i+1] == '.') {
            mensaje.push_back((1 + '0'));
            i++;
        }
        else {
            mensaje.push_back((2 + '0'));
            i++;
        }
    }
    cout<<mensaje<<ln;
}
