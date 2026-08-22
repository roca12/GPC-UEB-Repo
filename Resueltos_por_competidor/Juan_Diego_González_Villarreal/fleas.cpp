/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Curious Fleas
 * Juez Online: UVA
 * Veredicto: Accepted
 * URL: https://vjudge.net/problem/UVA-11329/origin
 */

#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pq priority_queue
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

int dxr[4] = {0, 0, -1, 1}, dxc[4] = {1, -1, 0, 0};
int getbit(int m, int i) { return (m >> i) & 1; }
int setbit(int m, int i, int v) { return v ? (m | (1 << i)) : (m & ~(1 << i)); }
int roll(int s, int dir) {
  int t = getbit(s, 0), b = getbit(s, 1), n = getbit(s, 2), so = getbit(s, 3),
      e = getbit(s, 4), w = getbit(s, 5);
  int nt, nb, nn, ns, ne, nw;
  if (dir == 0) {
    nt = w;
    nb = e;
    nn = n;
    ns = so;
    ne = t;
    nw = b;
  } else if (dir == 1) {
    nt = e;
    nb = w;
    nn = n;
    ns = so;
    ne = b;
    nw = t;
  } else if (dir == 2) {
    nt = so;
    nb = n;
    nn = t;
    ns = b;
    ne = e;
    nw = w;
  } else {
    nt = n;
    nb = so;
    nn = b;
    ns = t;
    ne = e;
    nw = w;
  }
  return nt | (nb << 1) | (nn << 2) | (ns << 3) | (ne << 4) | (nw << 5);
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    cin.ignore();
    vector<string> grid(4);
    int dr, dc, tiles = 0;
    for (int i = 0; i < 4; i++) {
      cin >> grid[i];
      for (int j = 0; j < 4; j++) {
        if (grid[i][j] == 'D') {
          dr = i, dc = j;
        } else if (grid[i][j] == 'X') {
          tiles |= (1 << (i * 4 + j));
        }
      }
    }
    auto calcState = [&](int r, int c, int slots, int tiles) {
      return ((r * 4 + c) << 22) | (slots << 16) | tiles;
    };
    int start = calcState(dr, dc, 0, tiles);
    unordered_map<int, int> dist;
    queue<int> q;
    q.push(start);
    dist[start] = 0;
    int ans = -1;
    while (!q.empty()) {
      int crr = q.front();
      q.pop();
      int d = dist[crr];
      int pos = (crr >> 22) & 15, s = (crr >> 16) & 63, tl = crr & 0xFFFF;
      int r = pos / 4, c = pos % 4;
      if (63 == s) {
        ans = d;
        break;
      }
      for (int i = 0; i < 4; i++) {
        int nr = r + dxr[i], nc = c + dxc[i];
        if (nr < 0 || nr >= 4 || nc < 0 || nc >= 4)
          continue;
        int ns = roll(s, i);
        int ntile_idx = (nr * 4 + nc);
        int bottom = getbit(ns, 1);
        int tileflea = getbit(tl, ntile_idx);
        ns = setbit(ns, 1, tileflea);
        int ntl = setbit(tl, ntile_idx, bottom);
        int nstate = calcState(nr, nc, ns, ntl);
        if (!dist.count(nstate)) {
          dist[nstate] = d + 1;
          q.push(nstate);
        }
      }
    }
    if (ans >= 0) {
      cout << ans << ln;
    } else {
      cout << "Impossible" << ln;
    }
  }
}