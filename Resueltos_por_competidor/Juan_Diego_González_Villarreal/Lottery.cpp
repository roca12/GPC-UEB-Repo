/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema:
 * Juez Online:
 * Veredicto: Accepted
 * URL:
 */

#include <bits/stdc++.h>
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

  int frec[51] = {0};

  for (int i = 0; i < 10 * n; i++) {
    for (int j = 0; j < 5; j++) {
      int x;
      cin >> x;
      frec[x]++;
    }
  }

  bool flag = false;
  for (int k = 1; k <= 50; k++) {
    if (frec[k] > 2 * n) {
      if (flag)
        cout << " ";
      cout << k;
      flag = true;
    }
  }
  if (!flag)
    cout << -1;
  cout << ln;
}