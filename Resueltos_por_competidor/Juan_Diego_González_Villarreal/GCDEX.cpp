/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: GCDEX
 * Juez Online: SPOJ
 * Veredicto: Accepted
 * URL: https://www.spoj.com/problems/GCDEX/
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

const int MAX_N = 1e6;

ll phi[MAX_N + 1];
ll f[MAX_N + 1];
ll sum[MAX_N + 1];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  for (int i = 1; i <= MAX_N; i++)
    phi[i] = i;
  for (int i = 2; i <= MAX_N; i++) {
    if (phi[i] == i) {
      for (int j = i; j <= MAX_N; j += i)
        phi[j] -= phi[j] / i;
    }
  }
  for (int i = 1; i <= MAX_N; i++)
    for (int j = i; j <= MAX_N; j += i)
      f[j] += 1LL * i * phi[j / i];

  for (int i = 1; i <= MAX_N; i++)
    sum[i] = sum[i - 1] + f[i] - i;

  int n;
  while (cin >> n) {
    if (n == 0)
      break;
    cout << sum[n] << '\n';
  }
}