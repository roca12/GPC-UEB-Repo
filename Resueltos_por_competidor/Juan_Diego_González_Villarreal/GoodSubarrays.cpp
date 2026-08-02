/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Good Subarrays
 * Juez Online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/1398/problem/C
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

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vll prefix(n + 1);
    for (int i = 1; i <= n; i++) {
      char c;
      cin >> c;
      prefix[i] = c - '0';
      prefix[i] += prefix[i - 1];
    }
    map<ll, ll> mp;
    for (int i = 0; i <= n; i++) {
      ll key;
      key = prefix[i] - i;
      if (mp.count(key)) {
        mp[key]++;
      } else {
        mp.insert({key, 1});
      }
    }
    ll ans = 0;
    for (auto [key, value] : mp) {
      ans += (value) * (value - 1) / 2;
    }
    cout << ans << ln;
  }
}