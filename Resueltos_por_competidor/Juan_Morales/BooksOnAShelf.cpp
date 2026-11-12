/*
 * Autor: OtherSpanish
 * Problema: Books on a Shelf
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/2290/problem/C
 */

#include <bits/stdc++.h>
#include <deque>
#include <queue>
#include <stack>
typedef long long ll;
using namespace std;
int main() {

  int tc;
  cin >> tc;

  while (tc--) {
    int n;
    cin >> n;

    vector<ll> books(n);

    for (int i = 0; i < n; i++) {
      cin >> books[i];
    }

    if (n == 1) {
      cout << 1 << "\n";
      cout << books[0] << "\n";
      continue;
    }

    if (n == 2) {
      cout << 2 << "\n";
      cout << books[0] << " " << books[1] << "\n";
      continue;
    }

    sort(books.begin(), books.end());
    vector<ll> ans(n);
    stack<ll> ans2;
    queue<ll> ans1;
    ans1.emplace(books[0]);
    ans2.push(books[1]);

    int cont = 2;

    bool flag = false;
    for (int i = 2; i < n; i++) {
      flag = (books[i] != books[i - 2]);
      if (flag)
        cont++;
      if (i % 2 == 0) {
        ans1.emplace(books[i]);
      } else {
        ans2.push(books[i]);
      }
    }

    cout << cont << "\n";
    while (!ans1.empty()) {
      cout << ans1.front() << " ";
      ans1.pop();
    }
    while (!ans2.empty()) {
      cout << ans2.top() << " ";
      ans2.pop();
    }

    cout << "\n";
  }
}
