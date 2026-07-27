/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: The Bovine Shuffle
 * Juez Online: USACO
 * Veredicto: Accepted
 * URL: https://usaco.org/index.php?page=viewproblem2&cpid=764
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

vi state;
vi dest;
queue<int> path;

void dfs(int start, int &cycleStart) {
  int crr = start;
  while (true) {
    if (state[crr] == 1) {
      cycleStart = crr;
      break;
    }
    if (state[crr] == 2) {
      break;
    }
    path.push(crr);
    state[crr] = 1;
    crr = dest[crr];
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  freopen("shuffle.in", "r", stdin);
  freopen("shuffle.out", "w", stdout);
  int n;
  cin >> n;
  dest.resize(n + 1);
  state.resize(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> dest[i];
  }
  vb inCycle(n + 1, false);
  for (int i = 1; i <= n; i++) {
    if (state[i] == 0) {
      int cycleStart = -1;
      dfs(i, cycleStart);
      bool cycle = false;
      while (!path.empty()) {
        int crr = path.front();
        path.pop();
        if (crr == cycleStart) {
          cycle = true;
        }
        if (cycle) {
          inCycle[crr] = true;
        }
        state[crr] = 2;
      }
    }
  }
  cout << count(all(inCycle), true);
}