/*
 * Autor: Juan Martinez
 * Problema: Creating Words (1985A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1985/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
    string s1, s2;
    char c;
    while(t--) {
        cin>>s1>>s2;
        c = s1[0];
        s1[0] = s2[0];
        s2[0] = c;
        cout<<s1<<" "<<s2<<endl;
    }
}
