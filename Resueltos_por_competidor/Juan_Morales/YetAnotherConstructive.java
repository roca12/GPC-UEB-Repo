/*
 * Autor: OtherSpanish
 * Problema: Yet Another Constructive
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/2247/problem/B
 */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, a, b) for (ll i = (a); i < (b); i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll n, k, m;
        cin >> n >> k >> m;
        if (m < k) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        rep(i, 1, n + 1) {
            cout << (i % k == 0 ? m - k + 1 : 1);
            cout << (i == n ? '\n' : ' ');
        }
    }
    return 0;
}
