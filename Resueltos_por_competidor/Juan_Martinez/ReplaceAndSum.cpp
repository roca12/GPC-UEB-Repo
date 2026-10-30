/*
 * Autor: Juan Martinez
 * Problema: Replace and Sum (2193C)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2193/problem/C
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"

int main() {
	int t, n, q, l, r, act; cin>>t;
    while(t--) {
        cin>>n>>q;
        vector<int> a(n), b(n);
        for(int &i : a) cin>>i;
        for(int &i : b) cin>>i;
        for(int i = 0; i < n; i++) {
            if(i < (n-1)) {
                if(a[i+1] > a[i]) a[i] = a[i+1];
            }
            if(b[i] > a[i]) a[i] = b[i];
        }
        for(int i = (n-1); i >= 0; i--) {
            if(n == 1) break;
            if(i == (n-1)) act = a[i];
            else {
                if(act > a[i]) a[i] = act;
                else act = a[i];
            }
            
        }
        for(int i = 1; i < n; i++){
            a[i] = a[i] + a[i-1];
        }
        
        while(q--) {
            cin>>l>>r;
            l--; r--;
            if(l == 0) cout<<a[r];
            else cout<<(a[r]-a[l-1]);
                cout<<" ";
        }
        cout<<ln;
    }
}
