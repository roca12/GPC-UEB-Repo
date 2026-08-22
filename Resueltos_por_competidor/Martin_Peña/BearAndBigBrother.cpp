/*
* Autor: pgms1103-afk
* Problema: A. Bear and Big Brother
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/791/A
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >> b;

    int contador = 0;
    while(a<=b){
        a = a*3;
        b = b*2;
        contador += 1;
    }
    cout << contador << endl;
    return 0;
}
