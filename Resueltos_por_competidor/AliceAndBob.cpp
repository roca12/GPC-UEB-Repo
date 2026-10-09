#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Alice and Bob
 * Juez online: Codeforces 2169A
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2169/A
 **/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t,n,a,b,may,men,ans;
    cin>>t;
    while(t--){
        cin>>n>>b;
        may=0,men=0;
        while(n--){
            cin>>a;
            if(a<b){
                men++;
            }
            if(a>b){
                may++;
            }

        }
        if(may>=men){
            ans = b+1;
        }else{
            ans = b-1;
        }
        cout<<ans<<"\n";
    }


    return 0;
}
