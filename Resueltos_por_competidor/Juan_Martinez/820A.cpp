/*
 * Autor: Juan Martinez
 * Problema: Mister B and Book Reading (820A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/820/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c, v0, v1, a, l, aux, dias;
    scanf("%d %d %d %d %d", &c, &v0, &v1, &a, &l);
    aux = v1;
    dias = 0;
    while(c > 0){
        if(dias == 0) {
            c -= v0;
        } else {
            c += l;
            if(v0 + (a*dias) > v1) c -= v1;
            else c -= v0 + (a*dias);
        }
        dias++;
    }
    printf("%d", dias);
    return 0;
}
