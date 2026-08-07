/*
 * Autor: Juan Martinez
 * Problema: Two Elevators (1729A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1729/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    int a, b, c;
    while(t--) {
        cin>>a>>b>>c;
        a = abs(1-a);
        if(b > c) b = abs(c-b) + abs(1-c);
        else {
            if(c == 1) b = abs(1-b);
            else b = abs(c-b) + abs(1-c);
        }

        //cout<< a<< " "<<b<<endl;
        if(b > a) cout<<1<<endl;
        else if(b < a) cout<<2<<endl;
        else cout<<3<<endl;
    }
    return 0;
}

