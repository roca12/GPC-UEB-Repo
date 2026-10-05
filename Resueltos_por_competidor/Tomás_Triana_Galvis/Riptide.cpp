#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Riptide
 * Juez online: Codeforces 2254A
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2254/A
 **/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t,ans;
    cin>>t;
    while(t--){
        vector<int> arr(3);
        ans=0;
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr.begin(),arr.end());
        while(arr[0]!=arr[1] && arr[1]!=arr[2]){
            arr[2]--;
            arr[0]++;
            ans++;
            sort(arr.begin(),arr.end());
        }
        cout<<ans<<"\n";
    }

    return 0;
}
