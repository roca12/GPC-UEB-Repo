/*
 * Autor: Juan Martinez
 * Problema: Blank Space (1829B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1829/B
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
int main()
{
    int t, n, aux, e, maxi; cin>>t;
    while(t--) {
        cin>>n;
        maxi = 0;
        e = 0;
        for(int i = 0; i < n; i++) {
            cin>>aux;
            if(aux == 1) {
                maxi = max(maxi, e);
                e = 0;
            } else e++;
        }
        maxi = max(maxi, e);
        cout<<maxi<<ln;
    }
    return 0;
}
