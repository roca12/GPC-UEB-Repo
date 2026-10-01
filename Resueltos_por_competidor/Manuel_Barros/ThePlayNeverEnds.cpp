/*
 * Autor: Manuel Barros
 * Problema: The play never ends
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2071/A
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        if(a%3 == 1) {
            cout << "YES" << "\n";
        }
        else cout << "NO" << "\n";
    }
}
