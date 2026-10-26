/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema:
 * Juez Online:
 * Veredicto: Accepted
 * URL:
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
#define vvll vector<vll>
#define vb vector<bool>
#define ln "\n"
using namespace std;
const ll MOD = 1000000007;
const int MAXN = 1000001;

ll fact[MAXN], inv[MAXN];

ll binpow(ll b, ll e) {
  ll r = 1;
  b %= MOD;
  while (e) {
    if (e & 1)
      r = r * b % MOD;
    b = b * b % MOD;
    e >>= 1;
  }
  return r;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  fact[0] = 1;
  for (int i = 1; i < MAXN; i++)
    fact[i] = fact[i - 1] * i % MOD;
  inv[MAXN - 1] = binpow(fact[MAXN - 1], MOD - 2);
  for (int i = MAXN - 1; i > 0; i--)
    inv[i - 1] = inv[i] * i % MOD;

  int n;
  cin >> n;
  while (n--) {
    int a, b;
    cin >> a >> b;
    if (b < 0 || b > a) {
      cout << 0 << "\n";
      continue;
    }
    cout << fact[a] * inv[b] % MOD * inv[a - b] % MOD << "\n";
  }
}
