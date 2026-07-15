/*
 * Autor: Juan Martinez
 * Problema: Filling Shapes (1182A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1182/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll potencia(ll i){
    ll temp = 2;
    for(ll j = 1 ;j < (i/2); j++) temp *= 2;

    //cout<<i<<" "<<temp<<endl;

    return temp;
}

int main()
{
    ll dp[60];
    for(int i = 1; i <= 60; i++) dp[i-1] = (i % 2 == 0) ? potencia(i) : 0;
    ll n;
    cin>>n;
    cout<<dp[n-1]<<endl;
    return 0;
}
