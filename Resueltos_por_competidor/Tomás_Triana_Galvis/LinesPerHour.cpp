#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Lines per Hour
 * Juez online: Kattis linesperhour
 * Veredicto: Accepted
 * Url: https://open.kattis.com/problems/linesperhour
 **/
int main()
{
    ll n,x,cont=0,ans=0;
    cin>>n>>x;
    x*=5;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll in=0;
    sort(arr.begin(),arr.end());
    while(cont+arr[in]<=x && in<n){
        ans++;
        cont+=arr[in];
        in++;
    }
    cout<<ans<<"\n";
    return 0;
}
