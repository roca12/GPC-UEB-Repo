#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Product of Three Numbers
 * Juez online: Codeforces1294C
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/1294/problem/C
 **/ 
set<ll> mult(ll n){
    set<ll> ans;
    for(ll i = 2;i<=sqrt(n);i++){
       if(n%i == 0){
            ans.insert(i);
            n/=i;
            break;
       }
    }
    for(ll i = 2;i<=sqrt(n);i++){
       if(n%i == 0 && !ans.count(i)){
            ans.insert(i);
            n/=i;
            break;
       }
    }
    if(n!=1 && !ans.count(n)){
        ans.insert(n);
    }
    return ans;
}

int main(){
    int t;
    ll n;
    cin>>t;
    set<ll> ans;
    while(t--){
        cin>>n;
        ans = mult(n);
        if(ans.size()<3){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            for(auto a:ans){
                cout<<a<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}
