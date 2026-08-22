/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema:
 * Juez Online:
 * Veredicto: Accepted
 * URL:
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
#define vpbb vector<pair<bool, bool>>
#define ln "\n"
using namespace std;

int main() {
  const int N = 30;
  vll f(N + 1), h(N + 1);
  f[0] = f[1] = 1;
  for (int i = 2; i <= N; i++) {
    f[i] = f[i - 1] + 2 * f[i - 2];
  }
  h[0] = h[1] = 1;
  h[2] = 3;
  h[3] = 1;
  for (int i = 4; i <= N; i++) {
    h[i] = h[i - 2] + 2 * h[i - 4];
  }
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << (f[n] + h[n]) / 2 << ln;
  }
}