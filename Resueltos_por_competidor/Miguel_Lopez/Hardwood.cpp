/*
 * Autor: Miguel Lopez
 * Problema: Hardwood Species
 * Juez online: OnlineJudge
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/UVA-10226
 */

// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
int main() {
// pene
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string c; 
        map<string, int> cont;
        float cant = 0;
        bool b = true;
        while(getline(cin, c)) {
               if(c[0] != NULL) {
               cont[c]++;
               cant++;
               }
               else if(c[0] == NULL && cant > 0) {

                break;
               }
               
         }
        for(auto[nom, val]: cont) {
            cout << nom << " " << fixed << setprecision(4) << ((float)val/(cant))*100 << endl;
        }
        if(t != 0) {
        cout << endl;
        }
    }
return 0;
}
