/*
 * Autor: Juan Martinez
 * Problema: Sublime Sequence (2148A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2148/problem/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
int main() {
	int t; cin>>t;
    while(t--) {
        int a, b; cin>>a>>b;
        int sum = 0;
        for(int i = 0; i < b; i++) {
            if(i % 2 == 0) sum+=a;
            else sum-=a;
        }
        cout<<sum<<ln;
    }
}
