#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Double Click
 * Juez online: AtCoder abc297_a
 * Veredicto: Accepted
 * Url: https://atcoder.jp/contests/abc297/tasks/abc297_a
 **/ 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,d,ans =-1;
    cin>>n>>d;
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i =0;i<n-1;i++){
        if(arr[i]+d >=arr[i+1]){
            ans = arr[i+1];
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}


