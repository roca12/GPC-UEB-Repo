/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Editor
 * Juez Online: UVA
 * Veredicto: Accepted
 * URL: https://vjudge.net/problem/UVA-1223/origin
 */

#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
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
const ull M1 = 1000000007ULL, M2 = 998244353ULL, B1 = 131ULL, B2 = 137ULL;
string s;
int n;
vector<ull> h1, h2, p1, p2;
void build() {
  n = s.size();
  h1.assign(n + 1, 0);
  h2.assign(n + 1, 0);
  p1.assign(n + 1, 1);
  p2.assign(n + 1, 1);
  for (int i = 0; i < n; i++) {
    h1[i + 1] = (h1[i] * B1 + s[i]) % M1;
    h2[i + 1] = (h2[i] * B2 + s[i]) % M2;
    p1[i + 1] = (p1[i] * B1) % M1;
    p2[i + 1] = (p2[i] * B2) % M2;
  }
}

inline ull getH(int l, int len) {
  ull a = (h1[l + len] + M1 - h1[l] * p1[len] % M1) % M1;
  ull b = (h2[l + len] + M2 - h2[l] * p2[len] % M2) % M2;
  return a * M2 + b;
}

bool check(int l) {
  if (l == 0)
    return true;
  unordered_set<ull> seen;
  seen.reserve(n * 2);
  for (int i = 0; i + l <= n; i++) {
    ull hv = getH(i, l);
    if (seen.count(hv))
      return true;
    seen.insert(hv);
  }
  return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    cin >> s;
    build();
    int lo = 0, hi = n - 1, ans = 0;
    while (lo <= hi) {
      int mid = (lo + hi) / 2;
      if (check(mid)) {
        ans = mid;
        lo = mid + 1;
      } else {
        hi = mid - 1;
      }
    }
    cout << ans << ln;
  }
}