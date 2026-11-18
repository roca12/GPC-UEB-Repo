/*
 * Autor: Juan Martinez
 * Problema: Skibidus and Amog'u (2065A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2065/problem/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
int main() {
	int t; cin>>t;
    string s, res;
    while(t--) {
        cin>>s;
        res = "";
        if((int)s.size() < 2) cout<<s<<ln;
        else {
            for(int i = 0; i < (int)s.size()-2; i++) {
                res += s[i];
            }
            res+='i';
        }
        cout<<res<<ln;
    }
}
