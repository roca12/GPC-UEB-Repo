
/*
* Autor: pgms1103-afk
* Problema: 2241A - Divide and Conquer
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/2241/A
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int x;
        int y;
        cin>>x;
        cin>>y;

        int resultado = 0;
        int contador = 1;
        while(resultado < x){
            resultado = y*contador;
            contador++;
        }
        if(resultado == x){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
