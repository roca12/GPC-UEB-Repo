/*
 * Autor: Miguel Lopez
 * Problema: Call for problems
 * Juez online: Kattis
 * Veredicto: Accepted
 * Url: https://open.kattis.com/problems/callforproblems
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
    //init_code();
    int t; cin >> t;
    int cont = 0;
    while(t--) {
        int n; cin >> n;
        if(n % 2 != 0) cont++;
    }
    cout << cont << endl;
}
