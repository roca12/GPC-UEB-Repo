#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Odd Queries
 * Juez online: CodeForces1807D
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/1807/problem/D
 **/ 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t,n,q,l,r,k,ans,a;
    cin>>t;
    while(t--){
        cin>>n>>q;
        vector<ll> pre(n+1);
        for(int i =1;i<=n;i++){
            cin>>a;
            pre[i]=pre[i-1]+a;
        }
        while(q--){
            cin>>l>>r>>k;
            ans = pre[n]-pre[r]+pre[l-1]+k*(r-(l-1));
            if(ans%2==0){
                cout<<"NO"<<"\n";
            }else{
                cout<<"YES"<<"\n";
            }
        }

    }

    return 0;
}
