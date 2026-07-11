/*
* Autor: pgms1103-afk
* Problema: 2234A - Euclid, Sequence and Two Numbers
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/2234/A
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 0; i<t; i++){
        int n;
        int divisor1 = 0;
        int divisor2 = 0;
        bool cumple = false;
        cin>>n;
        vector<int> tamanioFrecuencia(n);
        for(int j = 0; j<n; j++){
            cin>>tamanioFrecuencia[j];
        }
        sort(tamanioFrecuencia.begin(), tamanioFrecuencia.end(), greater<int>());
        int x = tamanioFrecuencia.front();
        int y = tamanioFrecuencia.at(1);

        if(x>=y && tamanioFrecuencia.size() == 2){
            cout<<x<<" "<<y<<endl;
        }else{

                for(int j = 0; j<tamanioFrecuencia.size()-2; j++){
                    if(tamanioFrecuencia[j] % tamanioFrecuencia[j+1] == tamanioFrecuencia[j+2]){
                        cumple = true;
                    }else{
                        cumple = false;
                      break;
                    }
                }

               if(cumple == true){
                cout<<x<<" "<<y<<endl;
               }else{
               cout<<"-1"<<endl;
               }






    }

}
 return 0;
}
