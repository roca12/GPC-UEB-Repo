/*
 * Autor: Juan Martinez
 * Problema: Petr and a calendar (760A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/760/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int col, m, d;
    scanf("%d %d", &m, &d);
    int dias[] = {31, 28, 31, 30, 31, 30 ,31, 31, 30, 31, 30, 31};

    col = 1;
    int indice = 1;
    d--;
    while(indice <= dias[m-1]) {
        if(d == 7) {
            col++;
            //printf(" CAMBIO %d\n", col);
            d = 0;
        }
            d++;
        //printf("%d\n", indice);
        indice++;
    }
    printf("%d", col);
    return 0;
}
