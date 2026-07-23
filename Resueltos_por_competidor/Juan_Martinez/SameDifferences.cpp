/*
 * Autor: Juan Martinez
 * Problema: Same Differences (1520D)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1520/D
 * Difficulty: 1200
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	map<int,int> par;
    ll t, n, cantPar, temp; cin>>t;
    while(t--) {
        cin>>n;
        for(int i = 0; i < n; i++) {
            cin>>temp;
            par[temp-(i+1)]++;
        }
        cantPar = 0;
        for(auto [val,cant] : par){
            if(cant > 1){
                while(cant > 0){
                    cantPar += (cant-1);
                    cant--;
                }
            }
        }
        cout<<cantPar<<endl;
        par.clear();
    }
}
