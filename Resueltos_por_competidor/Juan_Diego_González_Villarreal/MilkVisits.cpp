/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Milk Visits
 * Juez Online: USACO
 * Veredicto: Accepted
 * URL: https://usaco.org/index.php?page=viewproblem2&cpid=968
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

string g;

struct DSU {
  vi p, sz;
  DSU(int n) : p(n), sz(n, 1) { iota(all(p), 0); }
  int find(int x) { return p[x] == x ? x : p[x] = find(p[x]); }
  bool unite(int a, int b) {
    a = find(a);
    b = find(b);
    if (a == b)
      return false;
    if (sz[a] < sz[b])
      swap(a, b);
    p[b] = a;
    sz[a] += sz[b];
    return true;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  freopen("milkvisits.in", "r", stdin);
  freopen("milkvisits.out", "w", stdout);
  int n, m;
  cin >> n >> m;
  cin >> g;
  g = ' ' + g;
  DSU dsu(n + 1);
  for (int i = 0, x, y; i < n - 1; i++) {
    cin >> x >> y;
    if (g[x] == g[y]) {
      dsu.unite(x, y);
    }
  }
  char c;
  for (int i = 0, a, b; i < m; i++) {
    cin >> a >> b >> c;
    if (dsu.find(b) == dsu.find(a) && g[a] != c) {
      cout << 0;
    } else {
      cout << 1;
    }
  }
}