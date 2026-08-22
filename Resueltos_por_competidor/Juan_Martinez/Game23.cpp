/*
 * Autor: Juan Martinez
 * Problema: Game 23 (1141A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1141/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool b = false;
ll res;
void calcular(ll n, ll m, ll c) {
    if(n >= m) {
        if(n == m) b = true, res = c;
    } else {
        calcular(n*3, m, c+1);
        calcular(n*2, m, c+1);
    }
}
int main() {
    ll n, m;
    cin>>n>>m;
    calcular(n, m, 0);
    if(!b)cout<<-1<<endl;
    else cout<<res<<endl;
}
