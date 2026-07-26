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

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ll m, n;
  cin >> m >> n;
  ll impares = n / 2;
  ll celdas = m * n - impares;
  ll verts = m * n + (n + 1) / 2;
  ll incli = 2 * m * (n + 1) - (n % 2 == 0 ? 2 : 0);
  ll paredes = verts + incli;
  cout << paredes - (celdas + 1) / 2 + 1 << ln;
}