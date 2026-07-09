#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Prefix K-th Max
 * Juez online: AtCoder abc234_d
 * Veredicto: Accepted
 * Url: https://atcoder.jp/contests/abc234/tasks/abc234_d
 **/ 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k,a,cont,cont2 =0;
    cin>>n>>k;
    cont =k;
    vector<ll> arr(n);
    priority_queue<ll,vector<ll>,greater<ll>> ans;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<k-1;i++){
        ans.push(arr[i]);
    }

    for(int i =k-1;i<n;i++){
        ans.push(arr[i]);
        while(ans.size()>k){
            ans.pop();
        }
        cout<<ans.top()<< "\n";
    }
    return 0;
}
