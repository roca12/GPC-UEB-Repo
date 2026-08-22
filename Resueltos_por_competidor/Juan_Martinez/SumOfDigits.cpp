/*
 * Autor: Juan Martinez
 * Problema: Sum of Digits (102B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/102/B
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
    string s;
    cin>>s;
    ll sum, con = 0;
    while(s.length() > 1) {
        sum = 0;
        for(char c: s) sum += c - '0';
        s = to_string(sum);
        con++;
   }
    cout<<con<<endl;
    return 0;
}
