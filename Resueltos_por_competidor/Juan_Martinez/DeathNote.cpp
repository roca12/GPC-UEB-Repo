/*
 * Autor: Juan Martinez
 * Problema: Deat Note (1016A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1016/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int dias, limite, copyDias;
    scanf( "%u", &dias);
    scanf( "%u", &limite);

    copyDias = dias;
    int suma = 0;
    int resultado[dias];
    int indice = 0;

    while(dias--) {
        int cantidadDiaria;
        scanf( "%u", &cantidadDiaria);
        suma += cantidadDiaria;


        if(suma >= limite) {
            resultado[indice] = suma / limite;
            suma = suma % limite;
        } else {
            resultado[indice] = 0;
        }
        indice++;
    }

    for(int i = 0; i < copyDias; i++){
        cout<< resultado[i] << " ";
    }
    return 0;
}
