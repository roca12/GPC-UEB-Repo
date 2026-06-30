#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: K-th Divisor
 * Juez online: CodeForces762A
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/762/A
 **/ 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k,ans = -1;
    vector<ll> arr;
    cin>>n>>k;
    for(ll i = 1; i<=sqrt(n);i++){
        if(n%i==0){
            arr.push_back(i);
            if(n/i!=i){
                arr.push_back(n/i);
            }
        }
    }
    sort(arr.begin(),arr.end());
    if(arr.size()>=k){
        ans = arr[k-1];
    }
    cout<<ans<<"\n";
    return 0;
}
