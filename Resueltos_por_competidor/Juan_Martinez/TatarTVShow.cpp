/*
 * Autor: Juan Martinez
 * Problema: Tatar TV Show (2236A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2236/B
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
int main() {
	int t; cin>>t;
    while(t--) {
        int n, m; cin>>n>>m;
        int c = 0;
        bool b = 0;
        string s; cin>>s;
        for(char a : s) if(a == '1') c++;
        if(m >= n && c == 0) b = 1;
        else {
            for(int i = 0; i < n-m; i++) {
                if(s[i] == '1') {
                    s[i] = '0';
                    c--;
                    if(s[i+m] == '1') {
                        s[i+m] = '0';
                        c--;
                    } else {
                        s[i+m] = '1';
                        c++;
                    }
                }
            }
            if(c == 0) b = 1;
        }
        if(b) cout<<"YES"<<ln;
        else cout<<"NO "<<ln; 
    }
}
