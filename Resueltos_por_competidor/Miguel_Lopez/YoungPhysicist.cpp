/*
 * Autor: Miguel Lopez
 * Problema: Young Physicist
 * Juez online: Codeforces 
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/69/problem/A
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
    int conta = 0, contb = 0, contc = 0;
    while(t--) {
        int a,b,c; cin >> a >> b >> c;
        conta+=a;
        contb+=b;
        contc+=c;
    }
    string s = (conta == 0 && contb == 0 && contc == 0) ? "YES" : "NO";
    cout << s << endl;

}
