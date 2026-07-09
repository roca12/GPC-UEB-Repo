/*
 * Autor: Juan Martinez
 * Problema: Sonya and Hotels (1004A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1004/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d, contador = 2, aux;
    scanf("%d %d", &n, &d);
    int ho[n];

    for(int i =0; i < n; i++) scanf("%d", &ho[i]);
    for(int i = 0; i < (n-1); i++) {
        aux = abs(ho[i+1] - ho[i]);
        if( aux >= (2*d)){
            if(aux == (2*d)) contador++;
            else contador+=2;
        }
    }
    printf("%d", contador);
    return 0;
}
