/*
 * Autor: Las UEBonas
 * Problema: Las órbitas de Wang Zhenyi
 * Juez online: OmegaUp
 * Veredicto: Accepted
 * URL: https://omegaup.com/arena/CB062026IA/#problems/orbitas-de-wang
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b;
    cin >> a >> b;
    cout << (a * b) %360 << "\n";
    return 0;
}
