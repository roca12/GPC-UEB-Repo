/*
 * Autor: Juan Martinez
 * Problema: Chewbaсca and Number (514A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/514/A
 * Difficulty: 1200
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
    ll n; cin>>n;
    string s = to_string(n);
    for(int i = 0; i < s.size(); i++){
        if(i == 0) {
            if((9 -(s[i] - '0')) < (s[i] - '0') && (9 -(s[i] - '0')) != 0){
                s[i] = (9 -(s[i] - '0')) + '0';
            }
        } else {
            if((9 -(s[i] - '0')) < (s[i] - '0')){
                s[i] = (9 -(s[i] - '0')) + '0';
            }
        }
    }
    cout<<s<<endl;
}
