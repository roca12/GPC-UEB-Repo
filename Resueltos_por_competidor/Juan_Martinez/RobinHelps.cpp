/*
 * Autor: Juan Martinez
 * Problema: Robin Helps (2014A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2014/problem/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
    while(t--) {
        int n, k; cin>>n>>k;
        int cant = 0;
        int aux, res = 0;
        for(int i = 0; i < n; i++) {
            cin>>aux;
            if(aux >= k) cant += aux;
            else if(aux == 0 && cant > 0) cant--, res++;
        }
        cout<<res<<"\n";
    }

}
