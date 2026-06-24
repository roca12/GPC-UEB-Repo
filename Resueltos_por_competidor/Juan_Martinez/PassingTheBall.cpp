/*
 * Autor: Juan Martinez
 * Problema: Passing The Ball (2204A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2204/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, indice, contador;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        char mov[n];

        scanf("%s", mov);
        indice = 1;
        for(int i = 0; i < n; i++){
            if(mov[i] == 'R') indice++;
            else break;
        }

        printf("%d\n", indice);
    }
    return 0;
}
