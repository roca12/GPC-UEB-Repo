/*
 * Autor: OtherSpanish
 * Problema: Count a's
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/H
 */
 

#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

struct PrefixSum
{
    vector<ll> pref;
    vector<ll> real;
    int n;

    PrefixSum(vector<ll>& a)
    {
        n = a.size();
        pref.assign(n, 0);

        if(a[0]==1)
        {
            pref[0] = 1;
        }
        for(int i = 1; i<n; ++i)
        {
            if(a[i]==1)
            {
                pref[i] = pref[i-1] + 1;
            }
            else
            {
                pref[i] = pref[i-1];
            }
        }

        real = a;
    }

    ll rango(int l, int r)
    {
        if(l>r)return 0;
        if(real[l] == 1){
            return pref[r] - pref[l] + 1;
        }

        return pref[r] - pref[l];
    }
};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string pal;
    cin>>pal;

    vector<ll> cad;
    for(int i = 0; i<pal.length(); ++i){
        cad.push_back(ll(pal.at(i)-96));
    }
    int q;
    cin>>q;

    PrefixSum ps(cad);

    int a,b;
    for(int j = 0; j<q ; ++j)
    {
        cin>>a>>b;
        cout<<ps.rango(min(a,b)-1, max(a,b)-1)<<'\n';
    }

}
