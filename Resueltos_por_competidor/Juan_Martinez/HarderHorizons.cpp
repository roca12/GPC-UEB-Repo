/*
 * Autor: Juan Martinez
 * Problema: Harder Horizons
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/gym/106178/problem/H
 */
#include <bits/stdc++.h>
using namespace std;

#define ln "\n"

int main() {
    int aux, n, maxi = 0, res = 0; cin>>n;
    for(int i = 0; i < n; i++) {
        cin>>aux;
        if(aux > maxi) {
            maxi = aux;
            res++;
        }
    }
    cout<<res<<ln;
}
