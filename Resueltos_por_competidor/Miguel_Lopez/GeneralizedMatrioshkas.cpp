/*
 * Autor: Miguel Lopez
 * Problema: Generalized Matrioshkas
 * Juez online: OnlineJudge
 * Veredicto: Accepted
 * Url: https://vjudge.net/contest/828473#problem/E
 */
#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string a;
    while(getline(cin, a)) {
        stringstream ss(a);
        stack<int> mat;
        stack<int> sumcajas;
        bool rot = false;
        int c;
        while(ss >> c) {
            if(c < 0) {
                mat.push(-c);
                sumcajas.push(0);
            }
            else if(!rot) {
                if(mat.empty() || mat.top() != c) {
                    rot = true;
                }
                else {
                    mat.pop();
                    int hijos = sumcajas.top();
                    sumcajas.pop();
                    if(hijos >= c) {
                        rot = true;
                    }
                    else if(!sumcajas.empty()) {
                        int padre = sumcajas.top();
                        sumcajas.pop();
                        sumcajas.push(padre + c);
                    }
                }
            }
        }
        if(!mat.empty()) rot = true;
        if(rot) cout << ":-( Try again." << endl;
        else cout << ":-) Matrioshka!" << endl;
    }
}
