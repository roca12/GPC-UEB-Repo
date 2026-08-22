/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Landscaping
 * Juez Online: Kattis
 * Veredicto: Accepted
 * URL: https://vjudge.net/problem/Kattis-landscaping/origin
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

const ll INF = 1e18;

struct Dinic {
  struct E {
    int to;
    ll cap;
    int rev;
  };
  vector<vector<E>> g;
  vector<int> lvl, it;
  Dinic(int n) : g(n), lvl(n), it(n) {}
  void add(int u, int v, ll c) {
    g[u].push_back({v, c, (int)g[v].size()});
    g[v].push_back({u, 0, (int)g[u].size() - 1});
  }
  bool bfs(int s, int t) {
    fill(lvl.begin(), lvl.end(), -1);
    queue<int> q;
    lvl[s] = 0;
    q.push(s);
    while (!q.empty()) {
      int u = q.front();
      q.pop();
      for (auto &e : g[u])
        if (e.cap > 0 && lvl[e.to] < 0) {
          lvl[e.to] = lvl[u] + 1;
          q.push(e.to);
        }
    }
    return lvl[t] >= 0;
  }
  ll dfs(int u, int t, ll f) {
    if (u == t)
      return f;
    for (int &i = it[u]; i < (int)g[u].size(); i++) {
      E &e = g[u][i];
      if (e.cap > 0 && lvl[u] < lvl[e.to]) {
        ll d = dfs(e.to, t, min(f, e.cap));
        if (d > 0) {
          e.cap -= d;
          g[e.to][e.rev].cap += d;
          return d;
        }
      }
    }
    return 0;
  }
  ll maxflow(int s, int t) {
    ll flow = 0;
    while (bfs(s, t)) {
      fill(it.begin(), it.end(), 0);
      ll f;
      while ((f = dfs(s, t, INF)) > 0)
        flow += f;
    }
    return flow;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  ll a, b;
  while (cin >> n >> m >> a >> b) {
    vector<string> grid(n);
    for (auto &r : grid) {
      cin >> r;
    }
    auto id = [&](int i, int j) { return i * m + j; };
    int s = n * m, t = n * m + 1;
    Dinic din(n * m + 2);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid[i][j] == '#') {
          din.add(s, id(i, j), b);
        } else {
          din.add(id(i, j), t, b);
        }
        if (j + 1 < m) {
          din.add(id(i, j), id(i, j + 1), a);
          din.add(id(i, j + 1), id(i, j), a);
        }
        if (i + 1 < n) {
          din.add(id(i, j), id(i + 1, j), a);
          din.add(id(i + 1, j), id(i, j), a);
        }
      }
    }
    cout << din.maxflow(s, t) << ln;
  }
}