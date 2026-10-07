#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Twins
 * Juez online: Codeforces 160A
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/160/A
 **/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,suma=0,ans=0,s=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        suma += arr[i];
    }
    sort(arr.begin(),arr.end(),greater<int>());
    int ind =0;
    while(s<=suma/2){
        s+=arr[ind];
        ind++;
        ans++;
    }
    cout<<ans<<"\n";

    return 0;
}
