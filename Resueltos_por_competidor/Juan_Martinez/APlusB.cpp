/*
 * Autor: Juan Martinez
 * Problema: A+B? (1772A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1772/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
int main() {
    int t; cin>>t;
    while(t--) {
        string aux; cin>>aux;
        string s1 = "", s2 = "";
        bool b = 0;
        for(char c : aux) {
            if(c == '+') {
                b = 1;
            } else {
                if(!b) {
                s1 += c;
            } else {
                s2 += c;
            }
            }
        }
        cout<<(stoi(s1) + stoi(s2))<<ln;
    }
}
