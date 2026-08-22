/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Gas Stations
 * Juez Online: UVA
 * Veredicto: Accepted
 * URL: https://vjudge.net/contest/841803#problem/G
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

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int l, g;
  while (cin >> l >> g) {
    if (!l && !g) {
      break;
    }
    vpii stations(g);
    int start = 0, end = 0;
    for (int i = 0, x, r; i < g; i++) {
      cin >> x >> r;
      stations[i] = {x - r, x + r};
      start = min(x - r, start);
      end = max(x + r, end);
    }
    sort(all(stations));
    int covered = 0, cnt = 0, i = 0;
    bool flag = true;
    while (covered < l) {
      int best = covered;
      while (i < g && stations[i].first <= covered) {
        best = max(best, stations[i].second);
        i++;
      }
      if (best == covered) {
        flag = false;
        break;
      }
      covered = best;
      cnt++;
    }
    if (flag)
      cout << stations.size() - cnt << ln;
    else
      cout << -1 << ln;
  }
}