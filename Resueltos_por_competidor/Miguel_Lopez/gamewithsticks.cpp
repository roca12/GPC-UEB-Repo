/*
 * Autor: Miguel Lopez
 * Problema: Game With Sticks
 * Juez online: codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/451/A
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
    int n,m; cin >> n >> m;
    int mini = min(n,m);
    if(mini % 2 == 0) cout << "Malvika" << endl;
    else cout << "Akshat" << endl;
}
