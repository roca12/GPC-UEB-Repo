/*
 * Autor: Juan Martinez
 * Problema: Sieve of Erato67henes (2195A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2195/problem/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
    while(t--) {
        bool u = 0,  sixseven = 0;
        int n; cin>>n;
        int aux;
        for(int i = 0; i < n; i++) {
            cin>>aux;
            if(aux == 1) u = 1;
            if(aux == 67) sixseven = 1;
        }
        if(sixseven) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}
