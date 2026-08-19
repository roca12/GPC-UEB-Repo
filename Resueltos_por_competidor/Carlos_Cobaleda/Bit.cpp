/*   
Autor: Carlos Eduardo Cobaleda Moreno
Problema: Bit++
Juez online: Codeforces
Veredicto: Accepted
URL: https://codeforces.com/contest/282/problem/A
*/

#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main() {
    int t; cin >> t;
    string sum = "++";
    string rest = "--";
    int x = 0;
    for (int i = 0; i < t; i++) {
        string line; cin >> line;
        if (line == "X++" || line == "++X") {
            x++;
        }
        if (line == "X--" || line == "--X") {
            x--;
        }
    }
 
    cout << x << endl;
 
    return 0;
}
