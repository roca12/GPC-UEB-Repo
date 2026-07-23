/*
 * Autor: Miguel Lopez
 * Problema: gravity flip
 * Juez online: codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/405/A
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
    vector<int> vc;
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vc.push_back(n);
    }
    sort(vc.begin(), vc.end());
    for(auto i: vc) {
        cout << i << " ";
    }
    cout << endl;
}
