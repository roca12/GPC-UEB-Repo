/*
 * Autor: Miguel Lopez
 * Problema: Parity
 * Juez online: OnlineJudge
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=1872&mosmsg=Submission+received+with+ID+31296106
 */

#include <bits/stdc++.h>
#include <cctype>
#include <cstdio>
#include <ios>
#include <ostream>
#include <string>
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
const int MAXN = 1e5;
int main() {
    init_code();
    ll t;
    while(cin >> t) {
    if(t == 0) break;
    //string aux = to_string(t);
    bitset<64> aux2(t);
    int cont = aux2.count();
    string s = aux2.to_string();
    
    //cout << s << ln;
    cout << "The parity of " << s.substr(s.find('1')) << " is " << cont << " (mod 2)." << ln;
    }
    return 0;
}
