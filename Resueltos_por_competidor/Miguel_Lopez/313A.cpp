/*
 * Autor: Miguel Lopez
 * Problema: Ilya and Bank Account
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/313/A
 */
#include <bits/stdc++.h>
#include <cctype>
#include <cstdio>
#include <ios>
#include <ostream>
#include <string>
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
    ll n; cin >> n;

    if(n >= 0) {
        cout << n << endl;
    }
    else {
        string a = to_string(n);
        string s1 = a.substr(0, a.length() - 1);
        string s2 = "";
        for(int i = 0; i < a.length(); i++) {
            if(i == a.length() - 2) continue;
            s2 += a[i];
        }
        ll v1 = stoll(s1);
        ll v2 = stoll(s2);
        cout << max({n, v1, v2}) << endl;
    }
}
