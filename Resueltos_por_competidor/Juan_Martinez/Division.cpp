/*
 * Autor: Juan Martinez
 * Problema: Division? (1669A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1669/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n; cin>>t;
    while(t--) {
        cin>>n;
        if(n <= 1399) cout<<"Division 4"<<endl;
        else if(n <= 1599) cout<<"Division 3"<<endl;
        else if(n <= 1899) cout<<"Division 2"<<endl;
        else cout<<"Division 1"<<endl;
    }
}
