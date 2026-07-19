/*
 * Autor: OtherSpanish
 * Problema: Inversion of a Subsequence
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/2247/problem/C
 */


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, a, b) for (ll i = (a); i < (b); i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    
    cin >> t;
    
    while (t--) {
        
        ll n;
        cin >> n;
        
        vector<int> a(n), b(n);
        rep(i, 0, n)
        cin >> a[i];
        rep(i, 0, n)
        cin >> b[i];
        
        
        bool eq = true, aZeros = true, bOnes = true;
        
        ll diffOnes = 0;
        
        rep(i, 0, n) {
            
            if (a[i] != b[i]) {
                eq = false;
                
                if (a[i] == 1) diffOnes++;
            }
            
            if (a[i] == 1) aZeros = false;
            if (b[i] == 0) bOnes = false;
        
            
        }
        
        int ans;
        
        if (eq) ans = 0;
        else if (aZeros || bOnes) ans = -1;
        else if (diffOnes % 2 == 1) ans = 1;
        else ans = 2;
        
        cout << ans << '\n';
    }
    return 0;
}
