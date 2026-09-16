/*
 * Autor: Miguel Lopez
 * Problema: Newspaper
 * Juez online: OnlineJudge
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=2315&mosmsg=Submission+received+with+ID+31294740
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
    //init_code();
    int x; cin >> x;
    while(x--) {
    int t; cin >> t;
    unordered_map<char,int> res;
    while(t--) {
        char c;
        int n;
        cin >> c >> n;
        res[c] = n;
    }
    int n; cin >> n;
    cin.ignore();
    double aux = 0;
    while(n--) {
        string s; getline(cin, s);
        for(char c: s) aux+=res[c]; 
    }
    aux = aux/100;
    cout << fixed << setprecision(2) << aux << "$" << ln;
    }
}
