/*
 * Autor: Juan Martinez
 * Problema: Dr. TC (2106A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2106/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, indice, contador;
    scanf("%d", &t);
    while(t--){
        contador = 0;

        scanf("%d", &a);
        char dig[a];
        scanf("%s", dig);
        indice = 0;
        for(int j = 0; j < a; j++) {
            for(int i = 0; i < a; i++) {
                if(dig[i] == '0' && i == indice) contador++;
                else if(dig[i] == '1' && i !=indice) contador++;
            }
        indice++;
        }
        printf("%d\n", contador);

    }
    return 0;
}
