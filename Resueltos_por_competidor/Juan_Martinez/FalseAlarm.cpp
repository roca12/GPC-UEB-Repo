/*
 * Autor: Juan Martinez
 * Problema: False Alarm (2117A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2117/problem/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"

int main() {
	int t; cin>>t;
    while(t--) {
        int n, k, aux; cin>>n>>k;
        bool b = 0, z = 0;
        for(int i = 0; i < n; i++) {
            cin>>aux;
            if(b) k--;
            if(aux == 1) {
                b = 1;
                if(k <= 0) z = 1;
            }
        }
        if(!z) cout<<"YES"<<ln;
        else cout<<"NO"<<ln;
    }
}
