/*
 * Autor: Miguel Lopez
 * Problema: HQ9+
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/133/A
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
    string s; cin >> s;
    bool aver = false;
    for(char c: s) {
        if(c == 'H' || c == 'Q' || c == '9') {
            aver = true;
            break;
        }
    }
    if(aver) cout << "YES" << endl;
    else cout << "NO" << endl;
}
