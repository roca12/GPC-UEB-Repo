/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: SumDivs
 * Juez Online: Kilonova
 * Veredicto: Accepted
 * URL: https://kilonova.ro/problems/127
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
typedef __int128 i128;
const ll MOD = 1000000007LL;
map<ll, ll> factors;

void calcFactors(ll a) {
  for (ll i = 2; i * i <= a; i++) {
    if (a % i == 0) {
      ll cnt = 0;
      while (a % i == 0) {
        a /= i;
        cnt++;
      }
      factors[i] = cnt;
    }
  }
  if (a > 1)
    factors[a] = 1;
}

ll power(ll n, ll e) {
  n %= MOD;
  ll r = 1;
  while (e > 0) {
    if (e & 1)
      r = r * n % MOD;
    n = n * n % MOD;
    e >>= 1;
  }
  return r;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  freopen("sumdiv.in", "r", stdin);
  freopen("sumdiv.out", "w", stdout);

  ll a, b;
  cin >> a >> b;
  calcFactors(a);

  ll s = 1;
  for (auto [p, cnt] : factors) {
    ll pm = p % MOD;
    i128 n = (i128)cnt * b; // exponente real en A^B
    ll term;

    if (pm == 0) {
      term = 1;
    } else if (pm == 1) {
      term = (ll)((n + 1) % MOD);
    } else {
      ll ex = (ll)((n + 1) % (MOD - 1));
      ll num = (power(pm, ex) + MOD - 1) % MOD;
      ll inv = power(pm - 1, MOD - 2);
      term = num * inv % MOD;
    }
    s = s * term % MOD;
  }
  cout << s << ln;
}