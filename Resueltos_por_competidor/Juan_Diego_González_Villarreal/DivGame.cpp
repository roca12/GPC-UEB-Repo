/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Div Game
 * Juez Online: AtCoder
 * Veredicto: Accepted
 * URL: https://atcoder.jp/contests/abc169/submissions/me
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
  ll n;
  cin >> n;
  int ans = 0;
  for (ll p = 2; p * p <= n; p++) {
    int exponent = 0;
    while (n % p == 0) {
      exponent++;
      n /= p;
    }
    for (int i = 1; exponent - i >= 0; i++) {
      exponent -= i;
      ans++;
    }
  }
  if (n > 1) {
    ans++;
  }

  cout << ans << endl;
}