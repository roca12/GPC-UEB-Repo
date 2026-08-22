/*   
Autor: Carlos Eduardo Cobaleda Moreno
Problema: Domino piling
Juez online: Codeforces
Veredicto: Accepted
URL: https://codeforces.com/contest/50/problem/A
*/

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
 
int main() {
    int a,b; cin >> a >> b;
    double r = (a*b) / 2;
 
    cout << floor(r) << endl;
    return 0;
}
