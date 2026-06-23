/*
 * Autor: Juan Martinez
 * Problema: Game Outcome (157A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/157/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, contador = 0;
    scanf("%d", &n);
    int ce[n][n];
    vector<int> sumC(n), sumR(n);
    for(int i = 0; i < n; i++)
        for(int j =0; j < n; j++) scanf("%d", &ce[i][j]);

    for(int j = 0; j < n; j++){
        for(int i = 0; i < n; i++) {
                sumC[j] += ce[i][j];
                sumR[j] += ce[j][i];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n;j++){
            if(sumC[i] > sumR[j]) contador++;
        }
    }
    printf("%d", contador);

    return 0;
}
