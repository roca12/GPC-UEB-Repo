#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Left and Down
 * Juez online: Codeforces2125B
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2125/problem/B
 **/ 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t,a,b,k,gcd;
    cin>>t;
    while(t--){
        cin>>a>>b>>k;
        gcd = __gcd(a,b);
        a/=gcd;
        b/=gcd;
        if(a<=k && b<=k){
            cout<<"1\n";
        }else{
            cout<<"2\n";
        }
    }

    return 0;
}




