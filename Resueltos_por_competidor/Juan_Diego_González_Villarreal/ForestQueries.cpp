/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Forest Queries
 * Juez Online: CSES
 * Veredicto: Accepted
 * URL: https://cses.fi/problemset/result/18239699/
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

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q, x1, y1, x2, y2;
  cin >> n >> q;
  vector<string> forest(n);
  vvi pfx(n + 1, vi(n + 1, 0));
  for (int i = 0; i < n; i++) {
    cin >> forest[i];
    for (int j = 0; j < n; j++) {
      pfx[i + 1][j + 1] = (forest[i][j] == '*' ? 1 : 0) + pfx[i][j + 1] +
                          pfx[i + 1][j] - pfx[i][j];
    }
  }
  while (q--) {
    cin >> y1 >> x1 >> y2 >> x2;
    cout << pfx[y2][x2] - pfx[y2][x1 - 1] - pfx[y1 - 1][x2] +
                pfx[y1 - 1][x1 - 1]
         << ln;
  }
}