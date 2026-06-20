/*
 * Autor: Juan Martinez
 * Problema:  AI Project Development (2233A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2233/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, x, y, z, aux, horas, horas2;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d %d %d", &n, &x, &y, &z);
        aux = n;

        horas = 0;
        while(n>0){
            n -= x;
            n -= y;
            horas++;
        }

        horas2 = 0;
        while(aux>0){
            aux -= x;
            if(z>0) z--;
            else aux -= (y*10);
            horas2++;
        }
        printf("%d\n", min(horas, horas2));
    }
    return 0;
}
