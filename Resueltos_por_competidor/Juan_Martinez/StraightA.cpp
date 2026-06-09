/*
 * Autor: Juan Martinez
 * Problema:  Straight «A» (810A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/810/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>

using namespace std;

#define ll long long

double suma = 0;
int promedio = 0;

int main()
{
    int n, k;
    scanf( "%d %d", &n, &k);
    vector<int> notas(n);

    for(int i = 0; i < n; i++){
        scanf("%d", &notas[i]);
        suma += notas[i];
    }


    promedio = round(suma/notas.size());

    int contador = 0;

    while(promedio  != k) {
  //      printf("%d\n", promedio);
        notas.push_back(k);
        suma += k;
        promedio = round(suma/notas.size());
        contador++;
    }
    printf("%d", contador);

    return 0;
}
