/*
 * Autor: Miguel Lopez
 * Problema: Fighting Fraud
 * Juez online: RPC
 * Veredicto: Accepted
 * Url: 
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
    //init_code();
    int t; cin >> t;
    bool est = true;
    map<string,bool> recog;
    map<string,bool> entre;
    for(int i = 0; i < t; i++) {
        string s, ss; cin >> s >> ss;
        if(s == "pickup") {
            if(recog[ss] || entre[ss]) est = false;
            recog[ss] = true;
        }
        else {
            if(!recog[ss]) est = false;
            recog[ss] = false;
            entre[ss] = true;
        }  
    }
    for(auto i : recog) {
        if(i.second) est = false;
    }
    //if(dq.empty()) est = true;
    if(!est) cout << "no" << endl;
    else cout << "yes" << endl;
}
