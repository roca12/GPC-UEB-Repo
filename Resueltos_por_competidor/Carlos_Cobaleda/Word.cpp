/*   
Autor: Carlos Eduardo Cobaleda Moreno
Problema: Word
Juez online: Codeforces
Veredicto: Accepted
URL: https://codeforces.com/problemset/problem/59/A
*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int mayus, minus;
    mayus = 0; minus = 0;
        string c; cin >> c;
        for (int index = 0; index < c.length(); index++) {
            if (isupper(c[index])) {
            mayus++;
            } else {
                minus++;
            }
        }

        if (mayus > minus) {
            for (int indes = 0; indes < c.length(); indes++) {
            c[indes] = toupper(c[indes]);
            }
        } else {
            for (int indes = 0; indes < c.length(); indes++) {
            c[indes] = tolower(c[indes]);
            }
        }

        cout << c << endl;
    
return 0;    
	
}
