/*
* Autor: pgms1103-afk
* Problema: 2238A - Another Puzzle from Papyrus
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/2238/A
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){

        bool sinOrdenar = true;
        int contador = 0;
        int resultadoA = 0;
        int resultadoB = 0;
        int resultadoTotal = 0;
        int n;
        int c;
        cin>>n;
        cin>>c;
        int a[n];
        int b[n];
        for(int j = 0; j<n; j++){
            cin>>a[j];
        }

        for(int j = 0; j<n; j++){
            cin>>b[j];
        }

         while(contador<n){
            if(a[contador] >= b[contador]){
            }else{
                sinOrdenar = false;
            }
            contador++;
            if(sinOrdenar == false){
                contador = n;
            }
         }

         if(sinOrdenar == true){
        contador = 0;

         while(contador<n){
            resultadoA = resultadoA+a[contador];
            resultadoB = resultadoB+b[contador];
            contador++;
         }
         resultadoTotal = resultadoA-resultadoB;
            cout<<resultadoTotal<< endl;
         }
         else if(sinOrdenar == false ){
         sort(a, a+n);
         sort(b, b+n);
        bool sinOrdenar = true;

        contador = 0;
         while(contador<n){
            if(a[contador] >= b[contador]){
            }else{
                sinOrdenar = false;
            }
            contador++;
            if(sinOrdenar == false){
                contador = n;
            }
         }

         if(sinOrdenar == false){
            cout<<"-1"<< endl;
         }else{
         contador = 0;

         while(contador<n){
            resultadoA = resultadoA+a[contador];
            resultadoB = resultadoB+b[contador];
            contador++;
         }
         resultadoTotal = c + (resultadoA-resultadoB);
            cout<<resultadoTotal<< endl;
         }
         }

         else{
            cout<<"-1"<< endl;
         }

    }
}
