/*   
Autor: Carlos Eduardo Cobaleda Moreno
Problema: Babelfish
Juez online: VJudge
Veredicto: Accepted
URL: https://vjudge.net/problem/UVA-10282
*/
#include <iostream>
#include <unordered_map>
#include <sstream>
using namespace std;
int main() {
    unordered_map <string, string> hash;
    string linea;
    while(getline(cin, linea)) {
        if(linea.empty()) {
            break;
        } else {
            string palabra, traduccion;
            stringstream ss(linea);
            ss >> palabra >> traduccion;
            hash[traduccion] = palabra;
        }
    }
    string palabrab;
    while(cin >> palabrab) {
        if(hash.count(palabrab)) {
            cout << hash[palabrab] << endl;
        } else {
            cout << "eh" << endl;
        }
    }
    return 0;
}
