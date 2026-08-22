/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Canvas Painting
 * Juez Online: UVA
 * Veredicto: Accepted
 * URL: https://vjudge.net/problem/UVA-13017/origin
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
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (int i = 0; i < n; i++) {
      ll canvas;
      cin >> canvas;
      pq.push(canvas);
    }
    ll cost = 0;
    while (pq.size() > 1) {
      ll a = pq.top();
      pq.pop();
      ll b = pq.top();
      pq.pop();
      cost += a + b;
      pq.push(a + b);
    }
    cout << cost << ln;
  }
}