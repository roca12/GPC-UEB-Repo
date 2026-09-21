/*
 * Autor: Miguel Lopez
 * Problema: Three Piles
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2266/problem/B
 */

#include <bits/stdc++.h>
#include <cctype>
#include <cstdio>
#include <ios>
#include <ostream>
#define ln "\n"
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
        ll a, b, c; cin >> a >> b >> c;
        ll ans;
        if(a >= b)ans = a - b + c;
        else {
           ll d = b - a;
            ans = max(d, c - d);
        }
        cout << ans << ln;
    }
}
