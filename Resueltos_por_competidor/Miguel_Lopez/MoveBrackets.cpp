/*
 * Autor: Miguel Lopez
 * Problema: Move brackets
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1374/C
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
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        stack<char> brack;
        string s; cin >> s;
        for(char c: s) {
            if(brack.empty()) {
            //cout << c << endl;
            brack.push(c);
            } 
            else {
                if(c == ')' && brack.top() == '(') {
                //cout << c << " " << brack.top() << " " << "<- Sale" << " " << brack.size() << endl;
                brack.pop();
                } 
                else {
                //cout << c << " " << brack.front() << " " << "<- Entra" << " " << brack.size() <<endl;
                brack.push(c);
            }
            
        }
    }
    cout << brack.size()/2  << endl;
}
}
