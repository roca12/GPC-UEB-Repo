/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema:
 * Juez Online:
 * Veredicto: Accepted
 * URL:
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

const vector<string> posibs = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};
const map<char, int> order = {{'B', 0}, {'G', 1}, {'C', 2}};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  vll v(9);
  while (cin >> v[0]) {
    for (int i = 1; i < 9; i++)
      cin >> v[i];
    ll total = accumulate(all(v), 0LL);
    ll lo = LLONG_MAX;
    string best;
    for (const string &p : posibs) {
      ll stay = 0;
      for (int i = 0; i < 3; i++)
        stay += v[i * 3 + order.at(p[i])];
      ll moved = total - stay;
      if (moved < lo) {
        lo = moved;
        best = p;
      }
    }
    cout << best << " " << lo << ln;
  }
  return 0;
}