/*
 * Autor: Juan Martinez
 * Problema:  Ambitious Kid (1866A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1866/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, aux; cin>>n;
    int res = 1e9;
    for(int i = 0; i < n; i++) {
        cin>>aux;
        res = min(res,abs(aux));
    }
    cout<<res<<"\n";
}
