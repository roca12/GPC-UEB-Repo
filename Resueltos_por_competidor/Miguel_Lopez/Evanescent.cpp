/*
 * Autor: Miguel Lopez
 * Problema: Evanescent
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2254/problem/B
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
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int aux = 1;
        for(int i = 1; i < n; i++){
            if(s[i] != s[i-1]) aux++;
        }
        
        int res = aux;
        for(int i = 1; i < n - 1; i++){
            if(s[i] != s[i-1] && s[i] != s[i+1]){
                if(s[i-1] == s[i+1]){
                    res = min(res, aux - 2);
                } else {
                    res = min(res, aux - 1);
                }
            }
        }
        
        cout << res << endl;
    }
}
