#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Dungeon Equilibrium
 * Juez online: CodeforcesGym 106225D
 * Veredicto: Accepted
 * Url: https://codeforces.com/gym/106225/problem/D
 **/ 

int main(){
    ll n,a,diff,ans =0;
    cin>>n;
    vector<ll> arr(n+1);
    for(int i=0;i<n;i++){
        cin>>a;
        arr[a]++;
    }
    for(int i=0;i<=n;i++){
        a = arr[i];
        if(i == 0){
            ans+=a;
            continue;
        }
        diff = a-(i);
        if(diff>0){
            ans+=diff;
        }else if(diff<0){
            ans+=arr[i];
        }
    }
    cout<<ans<<"\n";
    return 0;
}
