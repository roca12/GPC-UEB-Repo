/*   
Autor: Carlos Eduardo Cobaleda Moreno
Problema: Elections in Chefland
Juez online: CodeChef
Veredicto: Accepted
URL: https://www.codechef.com/problems/ELECTN
Mi primer ejercicio usando c++ :D
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n,x;
        cin >> n >> x;
        int array[n];
        int d;
        
        for (int tt = 0; tt < n; tt++) {
        cin >> d;
        array[tt] = d;
        }

        int count = 0;
        for (int ii = 0; ii < n; ii++) {
        if (array[ii] >= x) {
        count++;
        }
        }

        cout << count << "\n";
        count = 0;

    }
    return 0;
}
