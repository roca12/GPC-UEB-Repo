/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Permutation Rounds
 * Juez Online: CSES
 * Veredicto: Accepted
 * URL: https://cses.fi/problemset/task/3398/
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

const ll MOD = 1000000007;
vi state;
vll v;
queue<int> path;
vll path_length;
map<int, int> m;

ll modpow(ll a, ll e) {
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

void factorize(int num) {
  map<int, int> factors;
  for (ll i = 2; i * i <= num; i++) {
    while (num % i == 0) {
      factors[i]++;
      num /= i;
    }
  }
  if (num > 1) {
    factors[num]++;
  }
  for (auto [p, e] : factors) {
    m[p] = max(e, m[p]);
  }
}

void dfs(int start) {
  int crr = start;
  while (!state[crr]) {
    state[crr] = 1;
    path.push(crr);
    crr = v[crr];
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  v.resize(n + 1);
  state.resize(n + 1, 0);
  path_length.resize(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  for (int i = 1; i <= n; i++) {
    if (!state[v[i]]) {
      dfs(v[i]);
      int cnt = path.size();
      factorize(cnt);
      while (!path.empty()) {
        int crr = path.front();
        path.pop();
        path_length[crr] = cnt;
        state[crr] = 2;
      }
    }
  }
  ll ans = 1;
  for (auto [p, e] : m) {
    ans = ((ans % MOD) * modpow((ll)p, (ll)e)) % MOD;
  }
  cout << ans;
}