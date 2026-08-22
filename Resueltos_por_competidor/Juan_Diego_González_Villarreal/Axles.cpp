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
  int n;
  cin >> n;
  unordered_map<int, vector<int>> groups;
  for (int i = 0, s, c; i < n; i++) {
    cin >> s >> c;
    groups[s].push_back(c);
  }
  double total = 0.0;
  for (auto &[s, cs] : groups) {
    sort(cs.begin(), cs.end());
    int i = 0, j = (int)cs.size() - 1;
    while (i < j && cs[j] > cs[i]) {
      total += log((double)cs[j]) - log((double)cs[i]);
      i++;
      j--;
    }
  }
  cout << fixed << setprecision(16) << total << "\n";
}
