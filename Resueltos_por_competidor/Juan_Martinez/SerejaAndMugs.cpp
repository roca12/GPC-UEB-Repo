/*
 * Autor: Juan Martinez
 * Problema: Sereja and Mugs (426A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/426/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s, mi, indice;
    scanf("%d %d", &n, &s);
    int mu[n];
    bool b = true;
    for(int i = 0; i < n; i++)  scanf("%d", &mu[i]);

    for(int i = 0; i < (n-1); i++) {
        mi = INT_MAX;
        indice = 0;
        for(int j = 0; j < n; j++){
            if(mu[j] != -1) {
                if(mu[j] < mi) {
                    indice = j;
                    mi = mu[j];
                }
            }
        }
        //printf("   %d\n", indice);
        mu[indice] = -1;
        s -= mi;
        if(s < 0) {
            b = false;
            break;
        }
    }
    if(b) printf("%s\n","YES");
    else  printf("%s\n","NO");
    return 0;
}
