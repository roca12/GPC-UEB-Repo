/*
 * Autor: Miguel Lopez
 * Problema: Minority
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1633/B
 */

#include <bits/stdc++.h>
#include <cctype>
#include <cstdio>
#include <ios>
#include <ostream>
typedef long long int ll;
using namespace std;
void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main() {
    init_code();
    int t; cin >> t;
    cin.ignore();
    while(t--) {
       // int mini = 1e9;
        string s; cin >> s;
        int conta = 0, contb = 0;
        for(char c: s) {
            if(c == '0') {
            conta++;
            } 
            else  {
            contb++;
            }
        }
        if(conta != contb) {
            cout << min(conta,contb) << endl;
        }
        else {
            cout << contb-1 << endl;
        }
    }
}

