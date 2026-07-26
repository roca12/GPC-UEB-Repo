/*
 * Autor: Miguel Lopez
 * Problema: Love Story
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1829/A
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
    while(t--) {
        int cont = 0;
        string s = "codeforces";
        string ss; cin >> ss;
        vector<char> sv;
        vector<char> ssv;
        for(char c : s) {
            sv.push_back(c);
           // cout << c << endl;
        }
        for(char c : ss) {
            ssv.push_back(c);
            //cout << c << endl;
        }
        int n = 0;
        while(n != (int)s.length()) {
            if(sv[n] != ssv[n]) {
                cont++;
                n++;
            }
            else {
                n++;
            }
        }
        cout << cont << endl;
    }
}
