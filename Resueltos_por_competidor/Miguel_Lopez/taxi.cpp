/*
 * Autor: Miguel Lopez
 * Problema: Taxi   
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/158/B
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
    vector<int> ch; 
    while(t--) {
        int n; cin >> n;
        ch.push_back(n);
    }
    sort(ch.begin(), ch.end());
    int l = 0, r = ch.size()-1;
    ll tax = 0;
    
    while(l<=r){
        tax++;
        int cap = 4 - ch[r];
        r--;
        while(l<=r && ch[l] <= cap){
            cap -= ch[l];
            l++;
        }
    }
    cout << tax << endl;
}
