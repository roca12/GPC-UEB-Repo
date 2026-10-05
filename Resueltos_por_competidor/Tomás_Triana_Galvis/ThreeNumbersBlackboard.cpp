#include <bits/stdc++.h>
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Three Numbers on the Blackboard
 * Juez online: Codeforces 2256A
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2256/problem/A
 **/

int main()
{
    int t,r;
    cin>>t;
    vector<int> arr(3);
    while(t--){
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr.begin(),arr.end());
        r = arr[0]+arr[1];
        cout<<min(r-arr[0],arr[2]-arr[0])<<"\n";
    }

    return 0;
}
