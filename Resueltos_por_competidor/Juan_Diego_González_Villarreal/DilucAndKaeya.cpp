/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Diluc And Kaeya
 * Juez Online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/1536/C
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
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    vpii prefix(n);
    for (int i = 0; i < n; i++) {
      prefix[i] = {s[i] == 'D' ? 1 : 0, s[i] == 'K' ? 1 : 0};
    }
    map<pii, ll> m;
    for (int i = 0; i < n; i++) {
      if (i > 0) {
        prefix[i] = {prefix[i].first + prefix[i - 1].first,
                     prefix[i].second + prefix[i - 1].second};
      }
      int g = gcd(prefix[i].first, prefix[i].second);
      if (m.find({prefix[i].first / g, prefix[i].second / g}) == m.end()) {
        m.insert({{prefix[i].first / g, prefix[i].second / g}, 1});
      } else {
        m[{prefix[i].first / g, prefix[i].second / g}]++;
      }
      cout << m[{prefix[i].first / g, prefix[i].second / g}] << " ";
    }
    cout << ln;
  }
}