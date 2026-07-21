/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Take A Guess
 * Juez Online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/1556/problem/D
 * Rating: 1800
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

int excOr(int a, int o) { return (~a & o); }

int sum(int a, int o) { return 2 * a + excOr(a, o); }

int query(string op, int a, int b) {
  int val;
  cout << op << " " << a << " " << b << ln;
  cout.flush();
  cin >> val;
  return val;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k;
  cin >> n >> k;
  vi v(n);
  int s12 = sum(query("and", 1, 2), query("or", 1, 2));
  int s13 = sum(query("and", 1, 3), query("or", 1, 3));
  int s23 = sum(query("and", 2, 3), query("or", 2, 3));
  v[0] = (s12 - s23 + s13) / 2;
  v[2] = s13 - v[0];
  v[1] = s23 - v[2];
  for (int i = 3; i < n; i++) {
    v[i] = sum(query("and", 1, i + 1), query("or", 1, i + 1)) - v[0];
  }
  sort(all(v));
  cout << "finish " << v[k - 1] << ln;
  cout.flush();
}