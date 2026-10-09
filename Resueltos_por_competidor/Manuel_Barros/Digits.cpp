/*
 * Autor: Manuel Barros
 * Problema: Digits
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2043/B
 */

#include <iostream>

using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while(t--){
        ll n, d;
        cin >> n >> d;

        bool tres = d % 3 == 0;
        bool cinco = d == 5;
        bool siete = d == 7;
        bool nueve = d == 9;

        if(n >= 3){
            tres = true;
            siete = true;
            if(d%3 == 0){
                nueve = true;
            }
        }

        if(n >= 6){
            nueve = true;
        }

        cout << "1" << (tres?" 3":"") << (cinco?" 5":"") << (siete?" 7":"") << (nueve?" 9":"") << "\n";
    }
}
