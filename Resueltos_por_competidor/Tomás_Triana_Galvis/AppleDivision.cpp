#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Apple Division
 * Juez online: CSES 1623
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1623
 **/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    vector<ll> pesos(n);
    ll mn = LONG_MAX;
    ll suma1,suma2;
    for(int i=0;i<n;i++){
        cin>>pesos[i];
    }
    for(int mask=0;mask<(1<<n);mask++){
        suma1=0,suma2=0;
        for(int i=0;i<n;i++){
            if(mask &(1<<i)){
                suma1+=pesos[i];
            }else{
                suma2+=pesos[i];
            }
        }
        mn = min(mn,abs(suma2-suma1));
    }
    cout<<mn<<"\n";

    return 0;
}
