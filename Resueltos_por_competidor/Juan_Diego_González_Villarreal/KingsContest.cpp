/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Kings Contest
 * Juez Online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/gym/106178/problem/K
 */

#include <bits/stdc++.h>
typedef long long ll;
#define DBG(X) cerr << #X << ": " << (X) << endl
#define mp make_pair
#define vll vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define all(v) v.begin(), v.end()
#define um unordered_map
#define mm multimap
#define ms multiset
#define in insert
#define vpii vector<pii>
#define vb vector<bool>
#define ln "\n"
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n, k;
  cin >> n >> k;
  vll R(n), C(n);
  for (int i = 0; i < n; i++)
    cin >> R[i] >> C[i];

  if (n == 1) {
    cout << 1 << "\n";
    return 0;

    ll rmin = LLONG_MAX, rmax = LLONG_MIN, cmin = LLONG_MAX, cmax = LLONG_MIN;
    for (int i = 0; i < n; i++) {
      rmin = min(rmin, R[i]);
      rmax = max(rmax, R[i]);
      cmin = min(cmin, C[i]);
      cmax = max(cmax, C[i]);
    }
    ll H = rmax - rmin + 1, W = cmax - cmin + 1;

    ll ans = H * W;
    {
      ll v = (W + k - H) / 2;
      for (ll dh : {(ll)0, k, v - 1, v, v + 1}) {
        if (dh < 0 || dh > k)
          continue;
        ans = max(ans, (H + dh) * (W + (k - dh)));
      }
    }

    ll rmin1 = LLONG_MAX, rmin2 = LLONG_MAX, rmax1 = LLONG_MIN,
       rmax2 = LLONG_MIN;
    ll cmin1 = LLONG_MAX, cmin2 = LLONG_MAX, cmax1 = LLONG_MIN,
       cmax2 = LLONG_MIN;
    for (int i = 0; i < n; i++) {
      ll r = R[i], c = C[i];
      if (r < rmin1) {
        rmin2 = rmin1;
        rmin1 = r;
      } else if (r < rmin2)
        rmin2 = r;
      if (r > rmax1) {
        rmax2 = rmax1;
        rmax1 = r;
      } else if (r > rmax2)
        rmax2 = r;
      if (c < cmin1) {
        cmin2 = cmin1;
        cmin1 = c;
      } else if (c < cmin2)
        cmin2 = c;
      if (c > cmax1) {
        cmax2 = cmax1;
        cmax1 = c;
      } else if (c > cmax2)
        cmax2 = c;
    }
    auto exMin = [](ll v, ll m1, ll m2) { return v == m1 ? m2 : m1; };
    auto exMax = [](ll v, ll M1, ll M2) { return v == M1 ? M2 : M1; };

    ll dr[4] = {k, k, -k, -k}, dc[4] = {k, -k, k, -k};
    for (int i = 0; i < n; i++) {
      ll r = R[i], c = C[i];
      ll eRmin = exMin(r, rmin1, rmin2), eRmax = exMax(r, rmax1, rmax2);
      ll eCmin = exMin(c, cmin1, cmin2), eCmax = exMax(c, cmax1, cmax2);
      for (int d = 0; d < 4; d++) {
        ll fr = r + dr[d], fc = c + dc[d];
        ll nH = max(eRmax, fr) - min(eRmin, fr) + 1;
        ll nW = max(eCmax, fc) - min(eCmin, fc) + 1;
        ans = max(ans, nH * nW);
      }
    }
    cout << ans << "\n";
    return 0;
  }
}