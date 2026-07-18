/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Counting Rooms
 * Juez Online: CSES
 * Veredicto: Accepted
 * URL: https://cses.fi/problemset/task/1192
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
#define MAX 1000
using namespace std;
char grid[MAX][MAX];
bool visited[MAX][MAX];
vector<pii> d = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

bool dfs(pii f, int n, int m) {
  if (visited[f.first][f.second]) {
    return false;
  }
  stack<pii> st;
  st.push(f);
  visited[f.first][f.second] = true;
  while (!st.empty()) {
    pii crr = st.top();
    st.pop();
    for (auto &[y, x] : d) {
      if (crr.first + y >= 0 && crr.first + y < n && crr.second + x >= 0 &&
          crr.second + x < m && !visited[crr.first + y][crr.second + x] &&
          grid[crr.first + y][crr.second + x] != '#') {
        st.push(mp(crr.first + y, crr.second + x));
        visited[crr.first + y][crr.second + x] = true;
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
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> grid[i][j];
      visited[i][j] = false;
    }
  }
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (grid[i][j] != '#' && dfs(mp(i, j), n, m))
        cnt++;
    }
  }
  cout << cnt;
}