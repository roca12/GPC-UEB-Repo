/*   
Autor: Carlos Eduardo Cobaleda Moreno
Problema: Translation
Juez online: Codeforces
Veredicto: Accepted
URL: https://codeforces.com/contest/41/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string s,t; cin >> s >> t;
	reverse(s.begin(), s.end());
	if(s == t) {
        cout << "YES" << endl;
	} else {
	cout << "NO" << endl;
    }
	return 0;
}
