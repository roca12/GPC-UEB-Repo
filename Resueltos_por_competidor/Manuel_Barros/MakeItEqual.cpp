/*
 * Autor: Manuel Barros
 * Problema: Make It Equal
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2131/C
 */

#include <iostream>
#include <map>

using namespace std;
typedef long long ll;

ll whichIsCooler(ll res, ll k){
    ll theCoolerRes = k-res;
    return res<=theCoolerRes?res:theCoolerRes;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll sizo = (k/2)+1;
        map<int, int> multiOne;
        map<int, int> multiTwo;
        for(ll i = 0; i < n; i++){
            ll x;
            cin >> x;
            multiOne[whichIsCooler((x%k), k)]++;
        }
        for(ll i = 0; i < n; i++){
            ll x;
            cin >> x;
            multiTwo[whichIsCooler((x%k), k)]++;
        }

        bool valido = multiOne==multiTwo;

        cout << (valido?"Yes\n":"No\n");
    }
}
