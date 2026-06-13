/*
 * Autor: Juan Martinez
 * Problema: No Casino in the Mountains (2126B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2126/B
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{   //freopen("input.txt", "r", stdin);
    int t, n , k, contador, temp;
    scanf("%d", &t);

    while(t--){
        contador = 0;
        scanf("%d %d", &n, &k);

        int cli[n];
        temp = k;
        bool descanso = false;

        for(int i = 0; i < n; i++) {

            scanf("%d", &cli[i]);
           // printf("I: %d\n", i);
            //if(descanso) printf("%s\n", "WIWIWIWI");
           // printf("K: %d\n", temp);
            if(cli[i] == 0) {
                if(descanso) descanso = false;
                else {
                    temp--;
                    if(temp == 0){
                        //printf("%s\n", "PEAK?");
                        contador++;
                        temp = k;
                        descanso = true;
                    }
                }
            } else {
                if(descanso) descanso = false;
                temp = k;
            }

        }

        printf("%d\n", contador);
    }

    return 0;
}
