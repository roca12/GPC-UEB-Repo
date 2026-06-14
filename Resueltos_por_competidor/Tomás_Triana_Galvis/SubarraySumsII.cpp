#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Subarray Sums II
 * Juez online: CSES1661
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1661/
 **/ 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,x,pre =0,temp,ansa=0;
    cin>>n>>x;
    vector<ll> ans(n+1);
    map<ll,ll> um;
    um[0] = 1;
    for(ll i = 1;i<n+1;i++){
        cin>>temp;
        pre+=temp;
        ans[i]=pre;
        if(um.count(pre-x)){
            ansa+=um[pre-x];
        }
        um[pre]++;
    }
    cout<<ansa<<endl;
    return 0;
}
