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
#define vb vector<bool>
#define ln "\n"
using namespace std;

vector<vector<pii>> adj;
vvi precalc;
void dfs(int start, int n) {
  vi anc(n + 1, 0);
  vb vis(n + 1, false);
  stack<int> st;
  st.push(start);
  vis[start] = true;
  while (!st.empty()) {
    int crr = st.top();
    st.pop();
    for (pii next : adj[crr]) {
      if (!vis[next.first]) {
        vis[next.first] = true;
        anc[next.first] = crr;
        precalc[start][next.first] = min(next.second, precalc[start][crr]);
        st.push(next.first);
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  freopen("mootube.in", "r", stdin);
  freopen("mootube.out", "w", stdout);
  int n, q;
  cin >> n >> q;
  adj.resize(n + 1, vector<pii>());
  precalc.resize(n + 1, vi(n + 1, INT_MAX));
  for (int i = 0, pi, qi, ri; i < n - 1; i++) {
    cin >> pi >> qi >> ri;
    adj[pi].pb(mp(qi, ri));
    adj[qi].pb(mp(pi, ri));
    precalc[pi][qi] = ri;
    precalc[qi][pi] = ri;
  }
  for (int i = 1; i <= n; i++) {
    dfs(i, n);
  }
  for (int i = 0, v, k; i < q; i++) {
    cin >> k >> v;
    int cnt = 0;
    for (int j = 1; j <= n; j++) {
      if (precalc[v][j] >= k && precalc[v][j] != INT_MAX)
        cnt++;
    }
    cout << cnt << ln;
  }
}