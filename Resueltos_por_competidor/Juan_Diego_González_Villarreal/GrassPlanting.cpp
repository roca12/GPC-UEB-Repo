/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Grass Planting
 * Juez Online: USACO
 * Veredicto: Accepted
 * URL: https://usaco.org/index.php?page=viewproblem2&cpid=894
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

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  freopen("planting.in", "r", stdin);
  freopen("planting.out", "w", stdout);
  int n;
  cin >> n;
  adj.resize(n + 1, vi());
  for (int i = 1, a, b; i < n; i++) {
    cin >> a >> b;
    adj[a].pb(b);
    adj[b].pb(a);
  }
  int hi = 0;
  for (int i = 1; i <= n; i++) {
    hi = max(hi, (int)adj[i].size());
  }
  cout << hi + 1;
}