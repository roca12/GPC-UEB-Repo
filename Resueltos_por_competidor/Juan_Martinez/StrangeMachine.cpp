/*
 * Autor: Juan Martinez
 * Problema: Strange Machine (2156B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2156/B
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"

int main() {
	int t; cin>>t;
    while(t--) {
        int n, q, con = 0, aux, res, j; cin>>n>>q;
        string s; cin>>s;
        bool b = 0;
        vector<pair<char,int>> op;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'B') b = 1;
            if(i == 0) con++;
            else {
                if(s[i] != s[i-1]) {
                    if(s[i] == 'B') op.push_back({'A', con});
                    else op.push_back({'B', con});
                con = 1;
                } else con++;
            }
        }
        if(s[n-1] == 'B') op.push_back({'B', con});
        else op.push_back({'A', con});
        for(int i = 0; i < q; i++) {
            cin>>aux;
            res = 0;
            j = 0;
            while(aux > 0) {
                //cout<<aux<<" "<<res<<ln;
                if(!b) {
                    res = aux;
                    aux = 0;
                } else {
                    if(op[j].first == 'A') {
                        if(op[j].second > aux) {
                            res += aux;
                            aux = 0;
                        } else {
                            aux -= op[j].second;
                            res += op[j].second;
                        }
                    } else {
                        for(int z = 0; z < op[j].second && aux > 0; z++) {
                            aux >>=1;
                            res++;
                        }
                    }
                    j = (j+1) % (int)op.size();
                }
            }
            cout<<res<<ln;        
        }
        //cout<<ln;
    }
}
