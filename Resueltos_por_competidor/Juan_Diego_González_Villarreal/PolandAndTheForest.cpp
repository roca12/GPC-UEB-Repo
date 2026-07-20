/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: PolandBall and Forest
 * Juez Online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/755/problem/C
 * Rating: 1300
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

vvi adj;
vb vis;
int cnt = 0;

void bfs(int s) {
  if (vis[s])
    return;
  cnt++;
  queue<int> q;
  q.push(s);
  vis[s] = true;
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
  int n;
  cin >> n;
  adj.resize(n + 1, vi());
  vis.resize(n + 1, false);
  for (int i = 1, a; i <= n; i++) {
    cin >> a;
    adj[i].pb(a);
    adj[a].pb(i);
  }
  for (int i = 1, a; i <= n; i++) {
    bfs(i);
  }
  cout << cnt;
}