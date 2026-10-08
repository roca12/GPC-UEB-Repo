/*
 * Autor: Manuel Barros
 * Problema: SauSaGe Bank
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2269/A
 */

#include <iostream>
#include <cmath>

typedef long long ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        ll res = n-k+1;
        res = pow(2, res)+(2*(k-1));

        cout << res << "\n";

    }
}
