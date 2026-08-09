/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Emergency Rations
 * Juez Online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/gym/106178/problem/E
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
  map<int, int> m;
  int q;
  cin >> q;
  while (q--) {
    string s;
    cin >> s;
    stringstream ss(s);
    char c;
    int n;
    ss >> c >> n;
    if (c == '+') {
      if (m.count(n)) {
        m[n]++;
      } else {
        m.insert({n, 1});
      }
    } else {
      if (m.count(n)) {
        m[n]--;
        if (m[n] == 0) {
          m.erase(n);
        }
      }
    }
    cout << m.size() << " ";
  }
}