/*
 * Autor: Miguel Lopez
 * Problema: Less or Equal
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/977/C
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
    cin >> a[i];
    } 
    sort(a.begin(), a.end());
    if (k == 0) {
        if (a[0] > 1) cout << 1 << endl;
        else cout << -1 << endl;
    } else {
        int x = a[k-1];
        if (k < n && a[k] == x) {
            cout << -1 << "\n";
        } else {
            cout << x << "\n";
        }   
    }
}
