/*
* Autor: pgms1103-afk
* Problema: A. Nearly Lucky Number
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/110/A
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string numero;
    cin >> numero;

    int contador = 0;
    for(int i = 0; i<numero.length(); i++){
        if(numero[i] == '4' || numero[i] == '7'){
            contador += 1;
        }
    }
    if(contador == 4 || contador == 7){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}

