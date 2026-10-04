/*
 * Autor: Miguel Lopez
 * Problema: Bankey
 * Juez online: OnlineJudge
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=11&page=show_contest&contest=388
 */

#include <bits/stdc++.h>
#include <cctype>
#include <cstdio>
#include <ios>
#include <ostream>
#define ln "\n"
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
    int t,m;
    while(cin >> t >> m) {
        if(t == 0 && m == 0 ) break;
        string s; cin >> s;
        ll res = 0;
        for(int i = 0; i < 2; i++) {
            ll cur = 0;
            for(int j = i; j < t; j+=2) {
                cur += s[j] - '0';
                if(j - 2 * m >= 0) cur -= s[j-2*m] - '0';
                res=max(res,cur);
            }
        }
        cout << res << ln;
    }
}
