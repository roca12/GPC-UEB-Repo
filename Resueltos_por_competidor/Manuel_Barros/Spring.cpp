/*
 * Autor: Manuel Barros
 * Problema: Spring
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2204/C
 */

#include <iostream>
typedef long long ll;

using namespace std;

ll gcd(ll a, ll b)
{
    if(b == 0) return a;
    else return gcd(b, a%b);
}

ll mcm(ll a, ll b)
{
    return (a/gcd(a, b))*b;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    while(n--) {
        ll a, b, c, m;
        cin >> a >> b >> c >> m;

        ll mcmglobal = mcm(a, mcm(b, c));
        ll mcmab = mcm(a, b);
        ll mcmac = mcm(a, c);
        ll mcmbc = mcm(b, c);

        ll da = 6*(m/a);
        ll db = 6*(m/b);
        ll dc = 6*(m/c);
        ll fagb = 3*(m/mcmab);
        ll gafc = 3*(m/mcmac);
        ll fbgc = 3*(m/mcmbc);
        ll fig = 2*(m/mcmglobal);

        cout << (da - fagb - gafc + fig) << " " << (db - fbgc - fagb + fig) << " " << (dc - gafc - fbgc + fig) << "\n";
    }

}
