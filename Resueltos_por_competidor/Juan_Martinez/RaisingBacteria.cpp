/*
 * Autor: Juan Martinez
 * Problema: Raising Bacteria (579A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/579/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;

int count(int n){
    int cont = 0;
    while(n != 0) {
        if((n & 1) == 1) cont++;
        n >>= 1;
    }
    return cont;
}

int main() {
	int n; cin >> n;
    cout<<count(n)<<endl;
}
