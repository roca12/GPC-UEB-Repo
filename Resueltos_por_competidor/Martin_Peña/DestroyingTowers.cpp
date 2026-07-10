/*
* Autor: pgms1103-afk
* Problema: 2237A - Destroying Towers
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/2237/A
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
     int t;
    cin>>t;
    for(int i = 0; i<t; i++){
     int numeroTorres;
     cin>>numeroTorres;
     vector<int> alturaTorres(numeroTorres);
     int suma = 0;
     for(int j = 0; j<numeroTorres; j++){
        cin>>alturaTorres[j];
     }

     while(!alturaTorres.empty()){
         for(int j = 1; j<=alturaTorres.size() - 1; j++){
            int primerEdificio = alturaTorres.front();
         if(primerEdificio < alturaTorres[j]){
            alturaTorres[j] = primerEdificio;
            break;

         }else{
         }
     }

     suma = suma + alturaTorres.front();
     alturaTorres.erase(alturaTorres.begin());
     }

     cout<<suma<<endl;

    }
    return 0;
}
