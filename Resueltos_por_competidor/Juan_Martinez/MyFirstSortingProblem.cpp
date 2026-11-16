/*
 * Autor: Juan Martinez
 * Problema: My First Sorting Problem (1971A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/1971/problem/A
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
    while(t--) {
        int a, b; cin>>a>>b;
        cout<<min(a,b)<<" "<<max(a,b)<<"\n";
    }
}
