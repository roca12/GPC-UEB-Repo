/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: MooTube
 * Juez Online: USACO
 * Veredicto: Accepted
 * URL: https://usaco.org/index.php?page=viewproblem2&cpid=788
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

vector<vector<pii>> adj;

int dfs(int from, int k) {
  if (adj[from].empty())
    return 1;
  int cnt = 0;
  for (pii next : adj[from]) {
    if (next.second <= k) {
      cnt++;
      cnt += dfs(next.second, k);
    }
  }
  return cnt;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  // freopen("mootube.in", "r", stdin);
  // freopen("mootube.out", "w", stdout);
  int n, q;
  cin >> n >> q;
  adj.resize(n + 1, vector<pii>());
  for (int i = 0, p, q, r; i < n - 1; i++) {
    cin >> p >> q >> r;
    adj[p].pb(mp(q, r));
  }
  for (int i = 0, v, k; i < q; i++) {
    cin >> k >> v;
    cout << dfs(v, k) << ln;
  }
}