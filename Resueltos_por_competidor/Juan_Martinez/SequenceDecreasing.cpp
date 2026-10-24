/*
 * Autor: Juan Martinez
 * Problema: Sequence Decreasing (2277B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2277/problem/B
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"

int main() {
	int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        int mini = 1e9, aux;
        for(int i = 0 ; i < n; i++) {
            cin>>aux;
            mini = min(mini, aux);
        }
        if(mini < n) cout<<n<<ln;
        else cout<<0<<ln;
    }
}
