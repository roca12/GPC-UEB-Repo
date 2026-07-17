/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Moocast
 * Juez Online: USACO
 * Veredicto: Accepted
 * URL: https://usaco.org/index.php?page=viewproblem2&cpid=668
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

struct cow {
  int x, y, p;
};

bool valid(cow em, cow rec) {
  int dx = (em.x - rec.x) * (em.x - rec.x);
  int dy = (em.y - rec.y) * (em.y - rec.y);
  return (dx + dy) <= (em.p * em.p);
}

int bfs(int from) {
  int cnt = 0;
  vector<bool> visited(adj.size(), false);
  queue<int> q;
  q.push(from);
  visited[from] = true;
  while (!q.empty()) {
    int crr = q.front();
    q.pop();
    cnt++;
    for (int next : adj[crr]) {
      if (!visited[next]) {
        visited[next] = true;
        q.push(next);
      }
    }
  }
  return cnt;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  freopen("moocast.in", "r", stdin);
  freopen("moocast.out", "w", stdout);
  int n;
  cin >> n;
  adj.resize(n, vi());
  vector<cow> v(n);
  for (cow &c : v) {
    cin >> c.x >> c.y >> c.p;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        continue;
      }
      if (valid(v[i], v[j])) {
        adj[i].pb(j);
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans = max(ans, bfs(i));
  }
  cout << ans;
}