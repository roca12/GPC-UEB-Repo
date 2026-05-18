/*
* Autor: BlackJose17
* Problema:  I_love_\%username\%
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/155/A
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];

    int c = 0;
    int maxL = p[0];
    int minL = p[0];

    for (int i = 1; i < n; i++) {
        if (p[i] > maxL || p[i] < minL) c++;
        if (p[i] > maxL) maxL = p[i];
        if (p[i] < minL) minL = p[i];
    }

    cout << c << endl;
    return 0;
}
