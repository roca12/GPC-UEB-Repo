/*
 * Autor: Miguel Lopez
 * Problema: Stickogon
 * Juez online: CodeForces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1957/A
 */

// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    while(t--) {
        int i; cin >> i;
        map<int,int> ca;
        int cont = 0;
        while(i--) {
            int z; cin >> z;
            ca[z]++;
        }
        for(auto[val, cant]: ca) {
            cont+=cant/3;
        }
        cout << cont << endl;
        ca.clear();
        }
    }

