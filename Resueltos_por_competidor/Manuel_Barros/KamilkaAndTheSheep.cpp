/*
 * Autor: Manuel Barros
 * Problema: Kamilka and the sheep
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2092/A
 */

#include <iostream>
typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll minim = 1000000000;
        ll maxim = 0;
        while(n--){
            ll a;
            cin >> a;
            if(a < minim) minim = a;
            if(a > maxim) maxim = a;
        }
        cout << (maxim-minim) << "\n";
    }
}
