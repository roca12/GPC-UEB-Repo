/*
 * Autor: Miguel Lopez
 * Problema: New Year Candles
 * Juez online: codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/379/problem/A
 */

#include <bits/stdc++.h>
//#include <cctype>
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
    int a,b; cin >> a >> b;
    int tot = a;
    int quem = a;
    while(quem >= b) {
        int aux = quem/b;
        quem = aux + quem%b;
        tot+=aux;
       // cout << quem << endl;
       // cout << quem << " " << quem/b << " " << tot << endl;
    }
    /* a = 4, b = 2, tot = 4, vel = a/b = 2, a-=b
       a = 2, b = 2, tot = 6, vel = a/b = 1, a-=b
       a = 0, b = 2, tot = 7, vel = a/b = 0.
    */
    cout << tot << endl;
}
