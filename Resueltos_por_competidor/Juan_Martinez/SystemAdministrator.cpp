/*
 * Autor: Juan Martinez
 * Problema: System Administrator (245A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/245/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, aux, x, y;
    int ser[4] = {0, 0, 0, 0};
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        scanf("%d %d %d", &aux, &x, &y);
        if(aux == 1) {
            ser[0] += x; ser[2] += 10;
        } else {
            ser[1] += x; ser[3] += 10;
        }
    }
    for(int i = 0; i < 2; i++){
        if(ser[i] >= (ser[i+2]/2)) printf("%s", "LIVE\n");
        else printf("%s","DEAD\n");
    }
    return 0;
}
