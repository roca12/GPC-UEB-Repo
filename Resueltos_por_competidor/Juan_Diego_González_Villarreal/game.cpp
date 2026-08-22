/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: A Multiplication Game
 * Juez Online: UVA
 * Veredicto: Accepted
 * URL: https://vjudge.net/problem/UVA-847/origin
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
  ll n;
  while (cin >> n) {
    ll r = 9;
    bool flag = true;
    while (r < n) {
      if (flag) {
        r *= 2;
      } else {
        r *= 9;
      }
      flag = !flag;
    }
    if (flag) {
      cout << "Stan wins." << ln;
    } else {
      cout << "Ollie wins." << ln;
    }
  }
}