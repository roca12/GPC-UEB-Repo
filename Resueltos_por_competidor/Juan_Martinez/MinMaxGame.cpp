/*
 * Autor: Juan Martinez
 * Problema: Min Max Game (2263A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2263/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a; cin>>t;
    while(t--) {
        string s;
        int temp = 0;
        cin>>n;
        for(int i = 0; i < n; i++) {
            cin>>a;
            if(a == 1) temp++;
        }
        //cout<<temp<<" ";
        if(temp < (n - temp)) cout<<"Elsie"<<"\n";
        else cout<<"Bessie"<<"\n";
    }
}
