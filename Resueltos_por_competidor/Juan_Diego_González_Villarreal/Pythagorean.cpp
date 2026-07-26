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

bool isSqr(ll x, ll &ans) {
  for (int i = 1; i * i <= x; i++) {
    if (i * i == x) {
      ans = i;
      return true;
    }
  }
  return false;
}

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  ll pptnh = 0, npnh = 0, pptns = 0, npns = 0;
  for (ll a = 1; a < n; a++) {
    ll b2 = n * n - a * a, b;
    if (b2 <= a * a) {
      continue;
    }
    if (isSqr(b2, b)) {
      if (gcd(a, b) == 1) {
        pptnh++;
      } else {
        npnh++;
      }
    }
  }
  for (ll x = 1; x < n; x++) {
    if ((n * n) % x) {
      continue;
    }
    ll y = (n * n) / x, c;
    if (x >= y || (x + y) % 2 != 0) {
      continue;
    }
    c = (y - x) / 2;
    if (c <= 0) {
      continue;
    }
    if (gcd(n, c) == 1) {
      pptns++;
    } else {
      npns++;
    }
  }
  cout << pptnh << " " << npnh << " " << pptns << " " << npns << ln;
}