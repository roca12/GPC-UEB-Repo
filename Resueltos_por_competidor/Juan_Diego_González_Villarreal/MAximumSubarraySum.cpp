/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Maximum Subarray Sum
 * Juez Online: CSES
 * Veredicto: Accepted
 * URL: https://cses.fi/problemset/task/1643
 */

#include <bits/stdc++.h>
#include <climits>
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
  int n;
  cin >> n;
  vi prefix(n + 1, 0);
  for (int i = 1, val; i <= n; i++) {
    cin >> val;
    prefix[i] = val + prefix[i - 1];
  }
  int hi = INT_MIN, idx;
  for (int i = 1; i <= n; i++) {
    hi = max(abs(prefix[i]), hi);
    if (hi == abs(prefix[i])) {
      idx = i;
    }
  }
  if (prefix[idx] > 0) {
    int lo = INT_MAX;
    for (int i = 1; i <= n; i++) {
      lo = min(prefix[i], lo);
    }
  } else {
  }
}