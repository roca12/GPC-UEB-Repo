/*
 * Autor: Juan Martinez
 * Problema: Panoramix's Prediction (80A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/80/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

bool esPrimo(int aux){
    if(aux == 2 || aux == 3) return true;
    if(aux % 2 == 0 || aux % 3 == 0) return false;
    for(int i = 5; i*i <= aux; i = i + 6) {
        if(aux % i == 0 || aux % (i + 2) == 0) return false;
    }
    return true;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    bool prim = false;
    for(int i = (n+1); !prim && i <= m; i++){
       //if(esPrimo(i))  printf("primoooo %d\n", i);
        //else  printf("%d\n", i);
        if(esPrimo(i)){
            if(i == m) prim = true;
            break;
        }
    }
    if(prim) printf("%s", "YES");
    else printf("%s", "NO");
    return 0;
}
