/*
 * Autor: Juan Martinez
 * Problema: Weather Tomorrow (847M)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/847/M
 * Difficulty: 1000
 */
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int d;
    scanf( "%d", &d);
    int clima[d];
    int dif[d];
    for(int i = 0; i < d; i++){
        scanf( "%d", &clima[i]);
    }
    for(int i = 0; i < (d-1); i++) {
        dif[i] = clima[i+1] - clima[i];
    }

    bool bandera = true;
    for(int i = 0; i < (d-2); i++){
        if(dif[i] != dif[i+1]) {
            bandera = false;
            continue;
        }
    }
    if(bandera) printf( "%d", (clima[d-1] + dif[d-2]));
    else printf( "%d", clima[d-1]);

    return 0;
}
