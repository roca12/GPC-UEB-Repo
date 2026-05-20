#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Max Even
 * Juez online: AtCoder abc272_c
 * Veredicto: Accepted
 * Url: https://atcoder.jp/contests/abc272/tasks/abc272_c
 **/ 

int main()
{
    ll n,a,ans = 0;
    vector<ll> arr,arr2;
    cin>>n;
    for(ll i = 0; i<n;i++){
        cin>>a;
        if(a & 1){
            arr.push_back(a);
        }else{
            arr2.push_back(a);
        }
    }

    sort(arr.begin(),arr.end(),greater<ll>());
    sort(arr2.begin(),arr2.end(),greater<ll>());
    if(arr.size()<2 && arr2.size()<2){
        ans = -1;
    }else if(arr.size()>=2 && arr2.size()<2){
        ans = arr[0]+arr[1];
    }else if(arr.size()<2 && arr2.size()>=2){
        ans = arr2[0]+arr2[1];
    }else{
        ans = max(arr[0]+arr[1],arr2[0]+arr2[1]);
    }
    cout<<ans<<endl;


}
