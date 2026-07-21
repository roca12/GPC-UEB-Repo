/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Badge
 * Juez Online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/1020/problem/B
 * Rating: 1000
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
#define vb vector<bool>
#define ln "\n"
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int p[n + 1];
  for (int i = 1; i <= n; i++)
    cin >> p[i];
  for (int i = 1; i <= n; i++) {
    int slow = i, fast = i;
    while (true) {
      slow = p[slow];
      fast = p[p[fast]];
      if (slow == fast)
        break;
    }
    slow = i;
    while (slow != fast) {
      slow = p[slow];
      fast = p[fast];
    }
    cout << slow << " ";
  }
}