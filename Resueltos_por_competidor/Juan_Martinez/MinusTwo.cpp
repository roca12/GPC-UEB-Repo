/*
 * Autor: Juan Martinez
 * Problema:  Minus Two (2259B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2259/problem/B
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
typedef long long int ll;

int main() {
	int t, n, mod4, odd, aux, even, maximo; cin>>t;
    while(t--) {
        cin>>n;
        even = mod4 = odd = maximo = 0;
        map<int,int> oguri;
        for(int i = 0; i < n; i++) { 
            cin>>aux;
            oguri[aux]++;
            if(aux % 4 == 0) mod4++;
            else if(aux % 4 == 2) even++;
            if(aux % 2 == 1) odd++;
        }
        for(auto [val,cant]: oguri) {
            maximo = max(cant, maximo);
        }
        cout<<max({maximo, odd, mod4, even})<<ln;
    }
}
