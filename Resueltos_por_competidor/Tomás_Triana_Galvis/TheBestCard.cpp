#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: The Best Card
 * Juez online: Codeforces 2253A
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2253/A
 **/

bool prim(ll n){
    if(n==1){
        return false;
    }
    if(n==2){
        return true;
    }
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(prim(n+1)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}
