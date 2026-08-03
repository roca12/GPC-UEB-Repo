/*
 * Autor: Miguel Lopez
 * Problema: Sale
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/34/problem/B
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
    int n,m; cin >> n >> m;
    vector<int> prec;
    for(int i = 0; i < n; i++) {
        int z; cin >> z;
        prec.push_back(z);
    }
    sort(prec.begin(), prec.end());
    int res = 0;
    for(int i = 0; i < m; i++) {
        if(prec[i] < 0) res+=(abs(prec[i]));
        else break;
    }
    cout << res << endl;
}
