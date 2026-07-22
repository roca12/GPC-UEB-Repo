/*
 * Autor: Juan Martinez
 * Problema: Creating Strings
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1622
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

string s, cad = "";
int n;
set<string> k;

void solve(int mask) {
    if(mask == ((1<<n)-1)){
        k.insert(cad);        
    } else {
        for(int i = 0; i < n; i++) {
            if(!(mask & (1<<i))) {
                cad.push_back(s[i]);
                solve((mask ^(1<<i)));
                cad.pop_back();
            }
        }
    }
}

int main() {
	string temp;
    cin>>s;
    n = (int) s.size();
    solve(0);
    cout<<k.size()<<endl;
    for(string p : k) cout<<p<<endl;

}

