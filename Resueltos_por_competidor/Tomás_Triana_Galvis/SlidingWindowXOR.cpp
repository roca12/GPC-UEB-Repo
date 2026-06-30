#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Sliding Window XOR
 * Juez online: CSES3426
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/3426/
 **/ 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,k,x,a,b,c,temp,j=0,ans=0;
    cin>>n>>k;
    vector<ll> arr(n+1),pre(n+1);
    cin>>x>>a>>b>>c;
    arr[1] = x;
    for(int i =2;i<=n;i++){
        temp = (a*arr[i-1]+b)%c;
        arr[i]=temp;
    }
    for(int i =1;i<=n;i++){
        temp = arr[i];
        pre[i] = pre[i-1]^temp;
    }
    for(int i =k;i<=n;i++){
        ans^=(pre[i]^pre[j]);
        j++;
    }
    cout<<ans<<"\n";

    return 0;
}
