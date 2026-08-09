/*
	 * Autor: Carlos Eduardo Cobaleda Moreno
	 * Problema: A. Wrong substraction
	 * Juez online: CodeForces
	 * Veredicto: Accepted
	 * URL: https://codeforces.com/contest/977/problem/A
	 */
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,k; cin >> n >> k;
 
    for (int i = 0; i < k; i++) {
        if (n%10 == 0) {
        n = n / 10;
        } else {
            n--;
        }   
    }
 
    cout << n << endl;
}
