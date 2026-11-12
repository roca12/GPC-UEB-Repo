/*
 * Autor: OtherSpanish
 * Problema: Avalanche
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/2290/problem/E
 */

// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {

  int tc;
  cin >> tc;

  while (tc--) {

    int n, k;
    cin >> n >> k;

    vector<long long> a(n + 1);

    for (int i = 1; i < n + 1; i++)
      cin >> a[i];

    vector<int> f(n + 1, 0), p(n + 1, 0);
    f[1] = 1;
    p[1] = 1;

    for (int i = 2; i <= n; i++) {
      int lo = max(1, i - k);
      f[i] = 1 ^ p[i - 1] ^ p[lo - 1];
      p[i] = p[i - 1] ^ f[i];
    }

    int total = 0;
    for (int i = 1; i <= n; i++) {
      total ^= (int)(a[i] & 1) & f[i];
    }
    cout << (total ? "Alice" : "Bob") << "\n";
  }
}
