/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Subordinates
 * Juez Online: CSES
 * Veredicto: Accepted
 * URL: cses.fi/problemset/task/1674
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
using namespace std;

vvi adj;

void dfs(int from, int prev, vi &cnt) {
  cnt[from] = 1;
  for (int next : adj[from]) {
    if (from == prev)
      continue;
    dfs(next, from, cnt);
    cnt[from] += cnt[next];
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  // freopen("file.in", "r", stdin);
  // freopen("file.out", "w", stdout);
  int n;
  cin >> n;
  adj.resize(n + 1, vi());
  vi cnt(n + 1);
  for (int i = 2, anc; i <= n; i++) {
    cin >> anc;
    adj[anc].pb(i);
  }
  dfs(1, 0, cnt);
  for (int i = 1; i <= n; i++) {
    cout << cnt[i] - 1 << " ";
  }
}