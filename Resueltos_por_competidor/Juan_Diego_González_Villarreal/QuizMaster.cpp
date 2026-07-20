/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Quiz Master
 * Juez Online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/1777/problem/C
 * Rating: 1700
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
#define ln "\n"
#define vb vector<bool>
using namespace std;

map<int, vi> divs;

vi precalcDivs(int num, int m) {
  vi d;
  for (int i = 1; i * i <= num; i++) {
    if (num % i == 0 && i <= m) {
      d.pb(i);
      if (i != num / i && num / i <= m)
        d.pb(num / i);
    }
  }
  return d;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    divs.clear();
    vi v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      divs.in({v[i], precalcDivs(v[i], m)});
    }
    sort(all(v));
    vi cnt(m + 1, 0);
    bool flag = false;
    int l = 0, ans = INT_MAX, trgt = 0;
    for (int r = 0; r < n; r++) {
      for (int d : divs[v[r]]) {
        if (cnt[d] == 0)
          trgt++;
        cnt[d]++;
      }
      while (trgt >= m) {
        flag = true;
        ans = min(ans, v[r] - v[l]);
        for (int d : divs[v[l]]) {
          cnt[d]--;
          if (cnt[d] == 0)
            trgt--;
        }
        l++;
      }
    }
    if (flag)
      cout << ans << ln;
    else
      cout << -1 << ln;
  }
}