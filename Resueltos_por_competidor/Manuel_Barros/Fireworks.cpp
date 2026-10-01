/*
 * Autor: Manuel Barros
 * Problema: Fireworks
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1945/B
 */

#include <iostream>
typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while(t--){
        ll a, b, m;
        cin >> a >> b >> m;
        cout << ((m/a) + (m/b) + 2) << "\n";
    }
}
