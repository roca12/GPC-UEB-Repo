/*
 * Autor: Juan Martinez
 * Problema: Odd Divisor (1475A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1475/A
 */

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
int main() {
    ll n, aux;
    cin>>n;
    while(n--){
        cin>>aux;
        while(aux%2 == 0){
            aux /=2;
        }
        if(aux == 1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
