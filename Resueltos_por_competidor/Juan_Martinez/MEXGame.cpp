/*
 * Autor: Juan Martinez
 * Problema: MEX Game (2271B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2271/problem/B
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define ln "\n"

int main() {
	int t, n, k, aux; cin>>t;
    while(t--) {
        cin>>n>>k;
        vector<int> mapa(200001, 0);
        for(int i = 0; i < n; i++) {
            cin>>aux;
            mapa[aux]++;
        }
        bool b = 0;
        for(int i = 0; i <= n; i++) {
            if(mapa[i] < ((2*k)-1)) {
                break;
            }
            if(mapa[i] == ((2*k)-1)) {
                b = 1;
                break;
            }
        }
        if(!b) cout<<"NO"<<ln;
        else cout<<"YES"<<ln;
    }
}
