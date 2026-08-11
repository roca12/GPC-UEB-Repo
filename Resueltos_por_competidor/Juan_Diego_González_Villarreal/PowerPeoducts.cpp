/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema:
 * Juez Online:
 * Veredicto: Accepted
 * URL:
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
  int n, k;
  cin >> n >> k;
  ll ans = 0;
  map<vpii, ll> seen;
  for (int i = 0, a; i < n; i++) {
    cin >> a;
    vpii crr, comp;
    for (int p = 2; p * p <= a; p++) {
      int e = 0;
      while (a % p == 0) {
        e++;
        a /= p;
      }
      e %= k;
      if (e) {
        crr.pb({p, e});
        comp.pb({p, k - e});
      }
    }
    if (a > 1) {
      crr.pb({a, 1});
      comp.pb({a, k - 1});
    }
    ans += seen[comp];
    seen[crr]++;
  }
  cout << ans << ln;
}