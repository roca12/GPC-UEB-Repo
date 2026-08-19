/*   
Autor: Carlos Eduardo Cobaleda Moreno
Problema: Football
Juez online: Codeforces
Veredicto: Accepted
URL: https://codeforces.com/contest/96/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string n; cin >> n;
    int count = 0;
    for (int i = 0; i < n.length(); i++) {
        if (n[i] == n[i-1]) {
            count++;
        } else {
            count = 1;
        }
 
        if (count >= 7) {
        break;
        }
    }
 
    if (count >= 7) {
    cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
return 0;
}
