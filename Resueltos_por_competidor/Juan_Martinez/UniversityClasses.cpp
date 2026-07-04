/*
 * Autor: Juan Martinez
 * Problema: University Classes (847G)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/847/G
 * Difficulty: 900
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, contador, ma = 0;
    scanf("%d", &n);
    string cla[n];
    for(int i = 0; i < n; i++) cin>>cla[i];
    for(int i = 0; i < 7; i++){
        contador = 0;
        for(int j = 0; j < n; j++){
            if(cla[j][i] == '1') contador++;
        }
        ma = max(ma, contador);
    }
    printf("%d\n", ma);
    return 0;
}
