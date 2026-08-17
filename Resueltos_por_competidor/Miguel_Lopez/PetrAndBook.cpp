/*
 * Autor: Miguel Lopez
 * Problema: Petr And Book
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/139/A
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
    cin.tie(nullptr);
    cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main() {
    init_code();
    int t = 7;
    int n; cin >> n;
    int a[7];
    for(int i = 0; i < t; i++) {
        cin >> a[i];
    }
    int i = 0;

    while(n > 0) {
        n -= a[i];
        i++;
        if(i == 7) i = 0; 
    }
    if(i == 0) i = 7;
    int res = i;
    cout << res << endl;
}
