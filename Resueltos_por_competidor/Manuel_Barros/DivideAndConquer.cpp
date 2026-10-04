/*
 * Autor: Manuel Barros
 * Problema: Divide And Conquer
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2241/A
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t-- ){
        int x, y;
        cin >> x >> y;
        if(x%y == 0) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}
