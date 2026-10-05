/*
 * Autor: Juan Martinez
 * Problema: Game with Integers (1899A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1899/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, aux; cin>>t;
    while(t--) {
        cin>>aux;
        if(aux % 3 == 0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
}
