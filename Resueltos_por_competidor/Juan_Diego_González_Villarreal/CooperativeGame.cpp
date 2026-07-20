/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Cooperative Game
 * Juez Online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/1137/problem/D
 * Rating: 2400
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

int group[10];

int read() {
  int k;
  if (!(cin >> k))
    return 0;
  for (int g = 0; g < k; g++) {
    string s;
    cin >> s;
    if (s == "stop")
      return 0;
    for (char c : s)
      group[c - '0'] = g;
  }
  return k;
}

void print(string out) {
  cout << out << ln;
  cout.flush();
}

int main() {
  while (true) {
    print("next 1"), read();
    print("next 0 1"), read();
    if (group[0] == group[1])
      break;
  }
  while (true) {
    print("next 0 1 2 3 4 5 6 7 8 9");
    if (read() == 1)
      break;
  }
  print("done");
}