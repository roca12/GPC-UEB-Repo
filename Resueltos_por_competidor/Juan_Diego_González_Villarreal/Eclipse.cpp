/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema:
 * Juez Online:
 * Veredicto: Accepted
 * URL:
 */

#include <bits/stdc++.h>
#include <iomanip>
typedef long long ll;
typedef unsigned long long ull;
#define pq priority_queue
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
  double x1, y1, x2, y2, a;
  cin >> x1 >> y1 >> x2 >> y2 >> a;
  double cx = (x1 + x2) / 2;
  double cy = (y1 + y2) / 2;
  double dx = x2 - x1, dy = y2 - y1;
  double midMaxX = sqrt(a * a - (dy * dy)) / 2;
  double midMaxY = sqrt(a * a - (dx * dx)) / 2;
  double p1 = cx - midMaxX, p2 = cy - midMaxY, p3 = cx + midMaxX,
         p4 = cy + midMaxY;
  cout << fixed << setprecision(4) << p1 << " " << p2 << " " << p3 << " " << p4;
}