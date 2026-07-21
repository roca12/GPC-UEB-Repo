/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Fence Planning
 * Juez Online: USACO
 * Veredicto: Accepted
 * URL: https://usaco.org/index.php?page=viewproblem2&cpid=944
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

vvi adj;
vb vis;
ll ans = LLONG_MAX;
vpii cows;

void bfs(int start) {
  if (vis[start])
    return;
  int minX = INT_MAX, minY = INT_MAX, maxX = -1, maxY = -1;
  queue<int> q;
  q.push(start);
  vis[start] = true;
  while (!q.empty()) {
    int crr = q.front();
    q.pop();
    minX = min(cows[crr].first, minX);
    maxX = max(cows[crr].first, maxX);
    minY = min(cows[crr].second, minY);
    maxY = max(cows[crr].second, maxY);
    for (int next : adj[crr]) {
      if (!vis[next]) {
        vis[next] = true;
        q.push(next);
      }
    }
  }
  ans = min(2LL * (maxX - minX + maxY - minY), ans);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  freopen("fenceplan.in", "r", stdin);
  freopen("fenceplan.out", "w", stdout);
  int n, m;
  cin >> n >> m;
  cows.resize(n + 1);
  adj.resize(n + 1, vi());
  vis.resize(n + 1, false);
  for (int i = 1; i <= n; i++) {
    cin >> cows[i].first >> cows[i].second;
  }
  for (int i = 0, a, b; i < m; i++) {
    cin >> a >> b;
    adj[a].pb(b);
    adj[b].pb(a);
  }
  for (int i = 1; i <= n; i++) {
    bfs(i);
  }
  cout << ans;
}