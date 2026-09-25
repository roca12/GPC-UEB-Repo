/*
 * Autor: Jorge Nuñez
 * Problema: Minus Two
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2259/B
 */
#include <bits/stdc++.h>
using namespace std;

int rep(const vector<int>& arr) {
    int g0 = 0;
    int g2 = 0;
    int imp = 0;

    for (int i = 0; i < arr.size(); i++) {

        if (arr[i] % 2 != 0) {
            imp++;
        }
        else if (arr[i] % 4 == 0) {
            g0++;
        }
        else {
            g2++;
        }
    }

    return max({g0, g2, imp});
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c;
    cin >> c;

    for(int i = 0; i < c; i++) {

        int n;
        cin >> n;

        vector<int> numeros(n);

        for(int j = 0; j < n; j++) {
            cin >> numeros[j];
        }

        cout << rep(numeros) << endl;
    }

    return 0;
}

