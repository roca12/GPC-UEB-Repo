/*
 * Autor: Juan Martinez
 * Problema: Sum of Round Numbers (1352A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1352/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
    string s;
    while(t--) {
        cin>>s;
        vector<int> res;
        for(int i = s.size()-1; i >= 0; i--) {
            if(s[i] != '0') {
                res.push_back((s[i] - '0')*(pow(10,(s.size()-1)-i)));
            }
        }
        cout<<res.size()<<endl;
        for(int i : res) {
            cout<<i<<" ";
        }
        cout<<endl;
    }

}
