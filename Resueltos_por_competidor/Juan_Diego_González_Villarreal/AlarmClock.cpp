/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Alarm Clock
 * Juez Online: UVA
 * Veredicto: Accepted
 * URL: https://vjudge.net/problem/UVA-11677/origin
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

int mod(int a, int n) { return ((a % n) + n) % n; }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int h1, m1, h2, m2;
  while (cin >> h1 >> m1 >> h2 >> m2) {
    if (!h1 && !m1 && !h2 && !m2)
      break;
    int x = mod(60 * mod(h2 - h1, 24) + m2 - m1, 24 * 60);
    cout << x << ln;
  }
}