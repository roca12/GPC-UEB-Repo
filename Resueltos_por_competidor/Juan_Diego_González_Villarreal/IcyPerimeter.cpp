/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Icy Perimeter
 * Juez Online: USACO
 * Veredicto: Accepted
 * URL: https://usaco.org/index.php?page=viewproblem2&cpid=895
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

int a = 0, p = 0, n;
vpii d = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
vector<string> g;
vector<vector<bool>> vis;

void dfs(pii start) {
  if (vis[start.first][start.second] || g[start.first][start.second] == '.')
    return;
  stack<pii> st;
  vis[start.first][start.second] = true;
  st.push(start);
  int candArea = 0, candPerim = 0;
  while (!st.empty()) {
    pii crr = st.top();
    st.pop();
    candArea++;
    for (auto &[x, y] : d) {
      pii next = mp(x + crr.first, y + crr.second);
      if (next.first >= n || next.first < 0 || next.second >= n ||
          next.second < 0 || g[next.first][next.second] == '.') {
        candPerim++;
        continue;
      }

      if (g[next.first][next.second] == '#' && !vis[next.first][next.second]) {
        st.push(next);
        vis[next.first][next.second] = true;
      }
    }
  }
  if (a == candArea) {
    p = min(p, candPerim);
  } else if (max(candArea, a) == candArea) {
    a = candArea;
    p = candPerim;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  freopen("perimeter.in", "r", stdin);
  freopen("perimeter.out", "w", stdout);
  cin >> n;
  g.resize(n);
  vis.resize(n, vb(n, false));
  for (int i = 0; i < n; i++)
    cin >> g[i];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      dfs(mp(i, j));
    }
  }
  cout << a << " " << p;
}