/*
 * Autor: Miguel Lopez
 * Problema: Lecture
 * Juez online: codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/499/B
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
    int t,n; cin >> t >> n;
    //int nn = n*2;
    map<string,string> pal;
    while(n--) {
        string a,b; cin >> a >> b;
        if (b.length() < a.length()) {
            pal[a] = b;
        }
        else {
            pal[a] = a;
        }
    }
    while(t--) {
        string c; cin >> c;
        cout << pal[c] << " ";
    } 

}
