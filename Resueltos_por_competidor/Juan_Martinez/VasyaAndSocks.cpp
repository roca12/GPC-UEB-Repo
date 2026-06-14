/*
 * Autor: Juan Martinez
 * Problema: Vasya and Socks (460A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/460/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, temp;
    int contador = 0;
    scanf("%d %d", &n, &m);

    temp = m;
    while(n!=0) {
        n--;
        contador++;
        temp--;
        if(temp == 0) {
            n++;
            temp = m;
        }
    }
    printf("%d", contador);
    return 0;
}
