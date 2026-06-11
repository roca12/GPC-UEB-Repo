/*
 * Autor: Juan Martinez
 * Problema: Settlement of Guinea Pigs (1802B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1802/B
 * Difficulty: 1000
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int  t, temp, ind, def, cant,  contador;
    scanf("%d", &t);
    while(t--) {
        ind = 0;
        def= 0;
        contador = 0;
        scanf( "%d", &cant);

        for(int i = 0; i < cant; i++) {
            scanf( "%d", &temp);
            if(temp == 1) {
                ind++;
            } else {
                def += ind;
                ind = 0;
            }
            if(def == 0) contador = max(contador, ind);
            else contador = max(contador, ind + (( def/2 )+ 1));
        }

        printf("%d\n", contador);

    }
    return 0;
}
