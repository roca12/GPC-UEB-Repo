/*
 * Autor: Juan Martinez
 * Problema: Juicer (709A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/709/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, b, d, sum = 0, contador = 0;
    scanf("%d %d %d", &n, &b, &d);
    int ora[n];
    for(int i = 0; i < n; i++) scanf("%d", &ora[i]);

    for(int i = 0; i < n; i++){
        if(ora[i] <= b) {
            sum += ora[i];
        }
        if(sum > d) {
            sum = 0;
            contador++;
        }
    }
    printf("%d\n", contador);
    return 0;
}
