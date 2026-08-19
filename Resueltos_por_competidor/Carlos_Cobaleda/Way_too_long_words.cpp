/*   
Autor: Carlos Eduardo Cobaleda Moreno
Problema: Way Too Long Words
Juez online: Codeforces
Veredicto: Accepted
URL: https://codeforces.com/contest/71/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin >> t;
 
    for(int i = 0; i < t; i++) {
        string p;cin >> p;
        char pp = p[0];
        int tp = p.size() - 2;
        char up = p[p.size() - 1];
 
        if(p.size() > 10) {
            cout << pp << tp << up << endl;
        } else {
            cout << p << endl;
        }
    }
}
