#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Stick Divisions
 * Juez online: CSES1161
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1161/
 **/ 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x,n,a,ans=0,b;
    cin>>x>>n;
    priority_queue<ll,vector<ll>,greater<ll>> arr;
    while(n--){
        cin>>a;
        arr.push(a);
    }
    while(arr.size()>1){
        a = arr.top();
        arr.pop();
        b = arr.top();
        arr.pop();
        ans+=a+b;
        arr.push(a+b);
    }
    cout<<ans<<"\n";

    return 0;
}
