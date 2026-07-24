/*
 * Autor: Juan Martinez
 * Problema: Buttons (268B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/268/B
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, cant = 0; cin>>n;
    cant += n;
    for(int i = n-1, j = 1; i > 0; i--, j++) cant += ((i-1) * j)+i;
    cout<<cant<<endl;
}
