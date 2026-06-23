#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Common Divisors
 * Juez online: Codeforces1203C
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1203/C
 **/ 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,a,b,ans = 0;
    cin>>n>>a;
    for(int i=1;i<n;i++){
        cin>>b;
        a=__gcd(a,b);
    }
    for(int i =1;i<=sqrt(a);i++){
        if(a%i==0){
            ans++;
            if(a/i!=i){
                ans++;
            }
        }
    }
    cout<<ans<<"\n";

    return 0;
}
