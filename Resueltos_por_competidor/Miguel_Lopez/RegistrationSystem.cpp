/*
 * Autor: Miguel Lopez
 * Problema: Registration System
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/4/C
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
    cin.ignore();
    set<string> hash;
    map<string, int> freq;
    while(t--) {
     string s; getline(cin, s);
     if(!hash.count(s)) {
        cout << "OK" << endl;
        hash.insert(s);
        freq[s]++;
     }
     else {
        int i = freq[s];
        string ss = s+to_string(i);
        cout << ss << endl;
        hash.insert(ss);
        freq[s]++;
     }
    }
    return 0;
}⏎                       
