#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Static Range Sum Queries
 * Juez online: CSES1646
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1646/
 **/ 
int main(){
    ll n,q,pre =0,temp,a,b;
    cin>>n>>q;
    vector<ll> ans(n+1);
    for(ll i = 1;i<n+1;i++){
        cin>>temp;
        pre+=temp;
        ans[i]=pre;
    }

    while(q--){
        cin>>a>>b;
        cout<<ans[b]-ans[a-1]<<endl;
    }

}
