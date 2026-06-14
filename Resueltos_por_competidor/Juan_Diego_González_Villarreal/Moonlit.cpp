/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: Moonlit Time Machine
 * Juez online: RPC
 * Veredicto: Accepted
 * URL:
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    string lunas[28] = {
        "New",
        "Crescent","Crescent","Crescent","Crescent",
        "Quarter","Quarter","Quarter","Quarter",
        "Gibbous","Gibbous","Gibbous","Gibbous","Gibbous",
        "Full",
        "Gibbous","Gibbous","Gibbous","Gibbous","Gibbous",
        "Quarter","Quarter","Quarter",
        "Crescent","Crescent","Crescent","Crescent","Crescent"
    };
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int k = 1; k <= 28; k++) {
        bool flag = true;
        for (int i = 1; i <= n && flag; i++)
            if (lunas[(i * k) % 28] != v[i - 1]) flag = false;
        if (flag) {
            cout << k << "\n";
            return 0; 
        }
    }
    return 0;
}