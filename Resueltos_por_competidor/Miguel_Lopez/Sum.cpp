/*
 * Autor: Miguel Lopez
 * Problema: Sum
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1742/A
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int a, b, c; cin >> a >> b >> c;
	    if(a == b+c || b == a+c || c == a+b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
	
