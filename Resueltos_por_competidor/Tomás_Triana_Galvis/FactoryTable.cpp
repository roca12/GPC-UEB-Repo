#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

/*
 * Autor: Tomás Triana Galvis
 * Problema: Factory Table
 * Juez online: CodeforcesGym 106225F
 * Veredicto: Accepted
 * Url: https://codeforces.com/gym/106225/problem/F
 **/ 
int main(){
    ll t,diff,n,a,b,ans;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<n;i++){
            a = arr[i-1];
            b = arr[i];
            diff = b-a;
            if(diff == 0){
                ans =2;
                break;
            }
            if(diff <0){
                ans = a/(b-1);
                break;
            }
        }
        if(diff>0){
            if(b>=diff*diff){
                ans = b/diff;
            }else{
                ans = diff;
            }

        }
        cout<<ans<<"\n";
    }

    return 0;
}
