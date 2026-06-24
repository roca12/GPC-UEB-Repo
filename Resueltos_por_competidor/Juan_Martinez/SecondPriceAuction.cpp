/*
 * Autor: Juan Martinez
 * Problema: Second-Price Auction (386A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/386/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m1 = 0, m2 = 0, indice;
    scanf("%d", &n);
    int p[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
        if(p[i] > m1) {
            m1 = p[i];
            indice = i+1;
        }
    }
    for(int i = 0; i < n; i++) {
        if(p[i] != m1) m2 = max(m2, p[i]);
    }
    printf("%d %d\n", indice, m2);
    return 0;
}
