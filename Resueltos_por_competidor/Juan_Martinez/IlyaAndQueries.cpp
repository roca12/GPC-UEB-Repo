/*
 * Autor: Juan Martinez
 * Problema: Ilya and Queries (313B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/313/B
 * Difficulty: 1100
 */
#include <bits/stdc++.h>
using namespace std;

int dp[1000000];

void guardar(string s){
    for(int i = 0; i < s.size(); i++){
        if(i == 0)dp[0] = 0;
        else {
            if(s[i] == s[i-1]) dp[i] = 1 + dp[i-1];
        }
    }
}

int solve(int l, int r){
    return dp[r-1] - dp[l-1];
}

int main() {
    string s; cin>>s;
    guardar(s);
    int q, l, r; cin>>q;
    for(int i = 0; i < q; i++) {
        cin>>l>>r;
        cout<<solve(l,r)<<endl;
    }
}


