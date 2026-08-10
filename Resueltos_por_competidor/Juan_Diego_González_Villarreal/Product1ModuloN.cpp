/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Product 1 Modulo N
 * Juez Online: Codeforces
 * Veredicto: Accepted
 * URL:
 * https://codeforces.com/problemset/problem/1514/C?adcd1e=caf4fyw0tm6vtl&csrf_token=5265febc8e6c9a96efb42b666ebe798e
 * Rating: 1600
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

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  vll coprimes;
  for (int i = 1; i < n; i++) {
    if (gcd(n, i) == 1) {
      coprimes.pb(i);
    }
  }
  ll prod = 1;
  for (ll x : coprimes) {
    prod = (prod * x) % n;
  }
  if (prod == 1) {
    cout << coprimes.size() << ln;
    for (ll x : coprimes) {
      cout << x << " ";
    }
  } else {
    cout << coprimes.size() - 1 << ln;
    for (int i = 0; i < coprimes.size() - 1; i++) {
      cout << coprimes[i] << " ";
    }
  }
}