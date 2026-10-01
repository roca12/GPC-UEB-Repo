/*
 * Autor: Juan Martinez
 * Problema: Prefix Max (2185B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2185/problem/B
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, maxi; cin>>t;
    while(t--) {
        cin>>n;
        maxi = 0;
        for(int i = 0; i < n; i++) {
            int aux;
            cin>>aux;
            maxi = max(maxi, aux);
        }
        cout<<n*maxi<<"\n";
    }
}
