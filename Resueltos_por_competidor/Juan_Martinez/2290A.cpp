/*
 * Autor: Juan Martinez
 * Problema: Three Piles (2290A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2290/problem/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
    while(t--) {
        int a, b, c; cin>>a>>b>>c;
        int dif = 0;
        dif += abs(a-b);
        dif += abs(b-c);
        if(dif != 2 || (a == b || b == c)) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
}
