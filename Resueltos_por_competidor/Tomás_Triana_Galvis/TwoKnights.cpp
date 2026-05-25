#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * Autor: Tomás Triana Galvis
 * Problema: Two Knights
 * Juez online: CSES 1072
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1072/
 **/ 

int main()
{
    ll n,k;
    cin>>n;
    for(ll i = 1;i<=n;i++){
        k = i*i;
        cout<<((k*(k-1))/2)-4*(i-2)*(i-1)<<endl;
    }


}
