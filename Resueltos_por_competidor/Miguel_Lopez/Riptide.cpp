/*
 * Autor: Miguel Lopez
 * Problema: Riptide
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2254/problem/A
 */

#include <bits/stdc++.h>
#include <cctype>
#include <cstdio>
#include <ios>
#include <ostream>
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
int main() {
    init_code();
    int t; cin >> t;
    while(t--) {
        int a,b,c; cin >> a >> b >> c;
        int res = 0;
         while(true) {
            if(a == b || b == c || a == c) {
                break;
            }
            
            int mx = max({a, b, c});
            int mn = min({a, b, c});
            
            if(a == mx) a--;
            else if(b == mx) b--;
            else c--;
            
            if(a == mn) a++;
            else if(b == mn) b++;
            else c++;
            
            res++;
        }
        cout << res << endl;
    }
}
