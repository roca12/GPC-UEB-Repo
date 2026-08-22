/*
 * Autor: OtherSpanish
 * Problema: Static Range Sum Queries
 * Juez online: CSES
 * Veredicto: Accepted
 * URL: https://cses.fi/problemset/result/18411315/
 */
 

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
struct PrefixSum
{
    vector<ll> pref;
    int n;
 
    PrefixSum(vector<ll>& a)
    {
        n = a.size();
        pref.assign(n+1, 0);
        for(int i = 0; i<n; ++i)
            pref[i+1] = pref[i] + a[i];
    }
 
    ll rango(int l, int r)
    {
        if(l>r)return 0;
        return pref[r+1] - pref[l];
    }
};
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    vector<ll> sum;
    int n,q;
    cin>>n>>q;
    ll x;
    for(int i = 0; i<n; ++i){
        cin>>x;
        sum.push_back(x);
    }
    PrefixSum ps(sum);
 
    int a,b;
    for(int j = 0; j<q ; ++j){
        cin>>a>>b;
        cout<<ps.rango(min(a,b)-1, max(a,b)-1)<<'\n';
    }
 
}
