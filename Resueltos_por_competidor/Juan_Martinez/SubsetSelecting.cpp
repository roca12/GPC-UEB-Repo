/*
 * Autor: Juan Martinez
 * Problema: Subset Selecting (2277A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2277/problem/A
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"

int main() {
    int t, n, k, aux, res, prev; cin>>t;
    while(t--) {
        cin>>n>>k;
        res = 0;
        prev = 0;
        vector<int> mapa(n+1, 0);
        for(int i = 0; i < n; i++) {
            cin>>aux;
            mapa[aux]++;
        }
        for(int i = 0; i <= n; i++) {
            //cout<<prev<<" i "<<i<<ln;
            if(mapa[i] >= k) {
                prev += abs(k - mapa[i]);
                res++;
            } else if((mapa[i] + prev) >= k && mapa[i] != 0) {
                prev =  abs(k - (mapa[i]+prev));
                res++;
            } else {
                break;
            }
        }
        cout<<res<<ln;
    }
}
