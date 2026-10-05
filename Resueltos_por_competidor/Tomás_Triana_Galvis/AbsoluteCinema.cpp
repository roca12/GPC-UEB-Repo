
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Absolute Cinema
 * Juez online: Codeforces 2229B
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2229/problem/B
 **/
int main()
{
    ll t,n,mx,s;
    cin>>t;
    while(t--){
        mx =0;
        s=0;
        cin>>n;
        vector<ll> arr1(n),arr2(n);
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<n;i++){
            cin>>arr2[i];
        }
        for(int i=0;i<n;i++){
            s+=max(arr1[i],arr2[i]);
            mx = max(mx,min(arr1[i],arr2[i]));
        }
        cout<<s+mx<<"\n";
    }

    return 0;
}
