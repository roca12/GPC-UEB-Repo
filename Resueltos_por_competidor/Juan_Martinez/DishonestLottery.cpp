/*
 * Autor: Juan Martinez
 * Problema: Dishonest Lottery 
 * Juez online: Kattis
 * Veredicto: Accepted
 * Url: https://open.kattis.com/problems/dishonestlottery
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, b, c, d, e;
    cin>>n;
    map<int,int> mapa;
    for(int i = 0; i < (10*n); i++) {
        cin>>a>>b>>c>>d>>e;
        mapa[a]++;
        mapa[b]++;
        mapa[c]++;
        mapa[d]++;
        mapa[e]++;
    }
    bool z = 1;
    for(auto [val, cant] : mapa) {
        if(cant > 2*n) {
            cout<<val<<" ";
            z = 0;
        }
    }
    if(z) cout<<-1;
}
