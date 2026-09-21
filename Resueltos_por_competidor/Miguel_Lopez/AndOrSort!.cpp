/*
 * Autor: Miguel Lopez
 * Problema: AND, OR, Sort!
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2266/problem/C
 */

#include <bits/stdc++.h>
#include <cctype>
#include <cstdio>
#include <ios>
#include <ostream>
#define ln "\n"
typedef long long int ll;
using namespace std;
void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
const ll INF = 1e9;
int main() {
    init_code();
    int t; cin >> t;
     while(t--){
        int n; cin >> n;
        string s; cin >> s;
        if(s[0] == '1'){
            ll ans = 0;
            for(int i = 1; i < n; i++) {
            if(s[i]=='0') ans++;
            }
            cout << ans << ln;
        } else {
            int aux = -1;
            for(int i = 1; i < n; i++){
                if(s[i]=='1') {
                aux = i; break; 
                } 
            }
            if(aux == -1){
                cout << 0 << ln;
                continue;
            }
            vector<int> prefix1(n+1, 0);
            for(int i = 1; i <= n; i++) {
                prefix1[i] = prefix1[i-1] + (s[i-1]=='1');
            }

            ll best = INF;
            for(int k = aux; k <= n; k++){
                ll ones = prefix1[k] - prefix1[0];
                ll zeros = (n-k) - (prefix1[n]-prefix1[k]);
                ll cost = ones + zeros;
                best = min(best, cost);
            }
            cout << best << ln;
        }
    }
}
}
int main() {
    init_code();
    int t; cin >> t;
    while(t--) {
        ll a, b, c; cin >> a >> b >> c;
        ll ans;
        if(a >= b)ans = a - b + c;
        else {
           ll d = b - a;
            ans = max(d, c - d);
        }
        cout << ans << ln;
    }
}
