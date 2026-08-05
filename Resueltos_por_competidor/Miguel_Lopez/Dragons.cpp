/*
 * Autor: Miguel Lopez
 * Problema: Dragons
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/230/A
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
    int s,t; cin >> s >> t;
    vector<pair<int,int>> lvl;
    bool win = true;
    while(t--) {
        int fd, b; cin >> fd >> b;
        lvl.push_back({fd,b}); 
    }
    sort(lvl.begin(), lvl.end());
    for(auto i: lvl) {
        if(s > i.first) {
            s+=i.second;
            win = true;
        }
        else {
            win = false;
        }
    }
    if(win) cout << "YES" << endl;
    else {
    cout << "NO" << endl;
    } 
}
