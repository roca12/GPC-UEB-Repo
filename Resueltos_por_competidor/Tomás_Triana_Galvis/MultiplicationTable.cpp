#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Multiplication Table
 * Juez online: Codeforces 577A
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/577/A
 **/ 
int main()
{
    ll n,a,ans=0;
    cin>>n>>a;
    for(int i=1;i<=n;i++){
        if(a%i==0){
            if(a/i<=n){
                ans++;
            }
        }
    }
    cout<<ans<<"\n";




}
