#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: SauSaGe Bank
 * Juez online: Codeforces 2269A
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2269/A
 **/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t,n,k,ans;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ans = pow(2,(n-(k-1)))+2*(k-1);
        cout<<ans<<"\n";
    }
    return 0;
}
