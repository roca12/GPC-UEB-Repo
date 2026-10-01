/*
 * Autor: Manuel Barros
 * Problema: Substractions
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/267/A
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
        int a, b;
        cin >> a >> b;
        int maxim = a>=b?a:b;
        int minim = a>=b?b:a;
        int res = 0;
        int sum = 0;

        do {
            sum += maxim/minim;
            res = maxim%minim;
            maxim = minim;
            minim = res;
        }while(res != 0);
        cout << sum << "\n";
    }
}
