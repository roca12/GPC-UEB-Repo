/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Building Teams
 * Juez Online: CSES
 * Veredicto: Accepted
 * URL: https://cses.fi/problemset/task/1668
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
vi v;

bool dfs(int from) {
  if (v[from] != 0)
    return true;
  stack<pii> st;
  st.push(mp(from, 1));
  while (!st.empty()) {
    pii crr = st.top();
    v[crr.first] = crr.second;
    st.pop();
    for (pii next : adj[crr.first]) {
      if (v[next.first] == crr.second)
        return false;
      if (v[next.first] == 0) {
        next.second = (crr.second == 1) ? 2 : 1;
        st.push(next);
      }
    }
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  // freopen("file.in", "r", stdin);
  // freopen("file.out", "w", stdout);
  int n, m;
  cin >> n >> m;
  adj.resize(n + 1, vector<pii>());
  v.resize(n + 1, 0);
  for (int i = 0, a, b; i < m; i++) {
    cin >> a >> b;
    adj[a].pb(mp(b, 0));
    adj[b].pb(mp(a, 0));
  }
  bool flag = true;
  for (int i = 1; i <= n; i++) {
    if (!dfs(i)) {
      flag = false;
      break;
    }
  }
  if (flag) {
    for (int i = 1; i <= n; i++) {
      cout << v[i] << " ";
    }
  } else {
    cout << "IMPOSSIBLE";
  }
}