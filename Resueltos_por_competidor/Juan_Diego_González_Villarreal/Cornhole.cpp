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

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int h1, b1, h2, b2, p1, p2;
  cin >> h1 >> b1 >> h2 >> b2;
  p1 = 3 * h1 + b1, p2 = 3 * h2 + b2;
  if (p1 == p2) {
    cout << "NO SCORE";
  } else if (p1 > p2) {
    cout << 1 << " " << abs(p1 - p2);
  } else {
    cout << 2 << " " << abs(p1 - p2);
  }
  cout << ln;
}