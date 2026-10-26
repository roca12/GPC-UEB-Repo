/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Santa's Bot
 * Juez Online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/1279/problem/D
 */

#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pq priority_queue
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
#define vvll vector<vll>
#define ln "\n"
using namespace std;

ll const MOD = 998244353LL;

ll modPow(ll a, ll e) {
  ll r = 1;
  a %= MOD;
  while (e > 0) {
    if (e & 1) {
      r = r * a % MOD;
    }
    a = a * a % MOD;
    e >>= 1;
  }
  return r;
}

ll modInv(ll n) { return modPow(n, MOD - 2); }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vll cnt(1000001, 0);
  vvll a(n, vll());
  int prob = 0;
  for (int i = 0, k; i < n; i++) {
    cin >> k;
    a[i].resize(k);
    for (int j = 0; j < k; j++) {
      cin >> a[i][j];
      cnt[a[i][j]]++;
    }
  }
  ll ans = 0, invN = modInv(n);
  for (int x = 0; x < n; x++) {
    ll pxy = invN * (modInv(a[x].size())) % MOD;
    for (ll y : a[x]) {
      ans = (ans + pxy * (cnt[y] * invN % MOD)) % MOD;
    }
  }
  cout << ans << ln;
}