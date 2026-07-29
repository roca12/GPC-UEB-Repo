/*
 * Autor: Miguel Lopez
 * Problema: Two-Gram
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/977/problem/B
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
    int t; cin >> t;
    string s; cin >> s;
    map<string, int> freq;
    for(int i = 0; i+1 < s.length(); i++) {
        string str = s.substr(i,2);
        freq[str]++;
    }
    string str = "";
    int cont = 0;
    for(auto i: freq) {
        if(i.second > cont) {
            cont = i.second;
            str = i.first;
        }
    }
    cout << str << endl;
}
