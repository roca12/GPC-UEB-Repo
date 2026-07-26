/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Flight Routes Check
 * Juez Online: CSES
 * Veredicto: Accepted
 * URL: https://cses.fi/problemset/task/1682
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

void dfs(int start, vb &vis, vvi &adj) {
  stack<int> st;
  st.push(start);
  vis[start] = true;
  while (!st.empty()) {
    int crr = st.top();
    st.pop();
    for (int next : adj[crr]) {
      if (!vis[next]) {
        st.push(next);
        vis[next] = true;
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vvi forwrd(n + 1, vi()), bckwrd(n + 1, vi());
  for (int i = 0, a, b; i < m; i++) {
    cin >> a >> b;
    forwrd[a].pb(b);
    bckwrd[b].pb(a);
  }
  vb forward_visited(n + 1, false);
  dfs(1, forward_visited, forwrd);
  for (int i = 1; i <= n; i++) {
    if (!forward_visited[i]) {
      cout << "NO" << ln << 1 << " " << i;
      return 0;
    }
  }

  vb backward_visited(n + 1, false);
  dfs(1, backward_visited, bckwrd);
  for (int i = 1; i <= n; i++) {
    if (!backward_visited[i]) {
      cout << "NO" << ln << i << " " << 1;
      return 0;
    }
  }
  cout << "YES";
  return 0;
}