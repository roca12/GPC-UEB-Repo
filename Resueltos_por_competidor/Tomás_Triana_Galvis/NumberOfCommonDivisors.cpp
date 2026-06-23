#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Number of Common Divisors
 * Juez online: SPOJCOMDIV
 * Veredicto: Accepted
 * Url: https://www.spoj.com/problems/COMDIV/
 **/ 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t,a,b,gcd,ans;
    cin>>t;
    while(t--){
        ans =0;
        cin>>a>>b;
        gcd = __gcd(a,b);
        for(int i =1;i<=sqrt(gcd);i++){
            if(gcd%i==0){
                ans++;
                if(gcd/i!=i){
                    ans++;
                }
            }
        }
        cout<<ans<<"\n";
    }


    return 0;
}




