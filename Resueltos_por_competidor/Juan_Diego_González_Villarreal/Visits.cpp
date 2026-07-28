/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema:
 * Juez Online:
 * Veredicto: Accepted
 * URL:
 */

#include <bits/stdc++.h>
#include <climits>
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
#define vpll vector<pll>
#define ln "\n"
using namespace std;

vpll dest;
vpll prio;
vi state;
queue<ll> path;

void dfs(ll start, ll &cycleStart) {
  ll crr = start;
  while (true) {
    if (state[crr] == 1) {
      cycleStart = crr;
      return;
    }
    if (state[crr] == 2) {
      return;
    }
    path.push(crr);
    state[crr] = 1;
    crr = dest[crr].first;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  dest.resize(n + 1, pii());
  state.resize(n + 1, 0);
  for (ll i = 1; i <= n; i++) {
    cin >> dest[i].first >> dest[i].second;
  }
  ll total = 0;
  for (ll i = 1; i <= n; i++) {
    if (state[i] == 0) {
      ll cycleStart = -1;
      ll lo = LLONG_MAX;
      dfs(i, cycleStart);
      bool inCycle = false;
      while (!path.empty()) {
        ll crr = path.front();
        path.pop();
        if (crr == cycleStart) {
          inCycle = true;
        }
        if (inCycle) {
          lo = min(lo, dest[crr].second);
        }
        state[crr] = 2;
        total += dest[crr].second;
      }
      if (lo != LLONG_MAX) {
        total -= lo;
      }
    }
  }
  cout << total << ln;
}