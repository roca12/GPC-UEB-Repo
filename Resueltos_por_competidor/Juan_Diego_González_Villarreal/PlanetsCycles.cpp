/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Planets Cycles
 * Juez Online: CSES
 * Veredicto: Accepted
 * URL: https://usaco.guide/problems/cses-1751-planets-cycles/solution
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

vb vis;
vi pathlength;
queue<int> path;
vi dest;
int steps = 0;

void dfs(int planet) {
  path.push(planet);
  if (vis[planet]) {
    steps += pathlength[planet];
    return;
  }
  vis[planet] = true;
  steps++;
  dfs(dest[planet]);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  pathlength.resize(n + 1, 0);
  vis.resize(n + 1, false);
  dest.resize(n + 1);
  for (int i = 1; i <= n; i++)
    cin >> dest[i];
  for (int i = 1; i <= n; i++) {
    if (!vis[i]) {
      steps = 0;
      dfs(i);
      int decrement = 1;
      while (!path.empty()) {
        if (path.front() == path.back()) {
          decrement = 0;
        }
        pathlength[path.front()] = steps;
        steps -= decrement;
        path.pop();
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    cout << pathlength[i] << " ";
  }
  cout << ln;
  return 0;
}