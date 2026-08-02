/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema:
 * Juez Online:
 * Veredicto: Accepted
 * URL:
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

void bfs(int start, vb &vis, vvi &adj, int &cnt) {
  if (vis[start])
    return;
  cnt++;
  queue<int> q;
  q.push(start);
  vis[start] = true;
  while (!q.empty()) {
    int crr = q.front();
    q.pop();
    for (int next : adj[crr]) {
      if (!vis[next]) {
        q.push(next);
        vis[next] = true;
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    char hi;
    cin >> hi;
    int n = hi - 'A';
    vvi adj(n + 1);
    vb vis(n + 1, false);
    string line;
    cin.ignore();
    while (getline(cin, line)) {
      if (line == "") {
        break;
      }
      int from = line[0] - 'A';
      int to = line[1] - 'A';
      adj[from].pb(to);
      adj[to].pb(from);
    }
    int cnt = 0;
    for (int i = 0; i <= n; i++) {
      bfs(i, vis, adj, cnt);
    }
    cout << cnt << ln;
    if (t > 0)
      cout << ln;
  }
}