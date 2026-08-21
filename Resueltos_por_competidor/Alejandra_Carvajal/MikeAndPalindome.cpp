/* Autor: Alejandra Carvajal
* Problema: Mike and Palindrome
* Juez online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/798/A
*/

#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    
    int n = s.length();
    int i = 0;
    int d = n - 1;
    int dif= 0;
    
    while (i < d) {
        if (s[i] != s[d]) {
            dif++;
        }
        i++;
        d--;
    }
   
    if (dif == 1 || dif == 0 && n % 2 == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
} 
