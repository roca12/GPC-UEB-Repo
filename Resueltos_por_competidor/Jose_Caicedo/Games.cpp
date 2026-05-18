/*
* Autor: BlackJose17
* Problema: Games
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/268/A
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> h(n), a(n);
    for (int i = 0; i < n; i++) cin >> h[i] >> a[i];

    int c = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (h[i] == a[j]) c++;
        }
    }

    cout << c << endl;
    return 0;
}
