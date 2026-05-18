/*
* Autor: BlackJose17
* Problema: YES or YES?
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/1703/A
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        for (char& c : s) c = tolower(c);

        cout << (s == "yes" ? "YES" : "NO") << "\n";
    }

    return 0;
}
