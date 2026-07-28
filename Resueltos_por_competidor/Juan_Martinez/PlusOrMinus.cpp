/*
 * Autor: Juan Martinez
 * Problema: Plus or Minus (1807A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1807/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a ,b ,c; cin>>t;
    while(t--){
       cin>>a>>b>>c;
       if((a+b) == c) cout<<"+"<<endl;
       else cout<<"-"<<endl;
    }
}
