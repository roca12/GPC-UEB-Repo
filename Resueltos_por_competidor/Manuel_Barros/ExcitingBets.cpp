/*
 * Autor: Manuel Barros
 * Problema: Exciting Bets
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1543/A
 */

#include <iostream>
typedef long long ll;

using namespace std;

ll gcd(ll a, ll b)
{
    if(b == 0) return a;
    else return gcd(b, a%b);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        ll x, y;
        cin >> x >> y;
        if(x==y){
            cout << "0 0\n";
            continue;
        }

        ll res = x-y;
        if(res < 0) res *= -1;
        ll coolRes = x%res;
        ll theCoolerRes = res-(x%res);
        if(gcd(x, y)== res)
        {
            theCoolerRes=0;
        }
        cout << res << " " << (coolRes<=theCoolerRes?coolRes:theCoolerRes) << "\n";
    }
}
