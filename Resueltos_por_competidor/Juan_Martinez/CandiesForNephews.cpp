/*
 * Autor: Juan Martinez
 * Problema: Candies for Nephews (2145A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2145/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, contador;
    scanf("%d", &t);
    while(t--) {
        contador = 0;
        scanf("%d", &n);
        while(n % 3 != 0) {
            contador++;
            n++;
        }
    printf("%d\n", contador);
    }
    return 0;
}
