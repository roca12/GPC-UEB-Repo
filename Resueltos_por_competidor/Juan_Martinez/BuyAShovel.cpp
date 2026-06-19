/*
 * Autor: Juan Martinez
 * Problema: BuyAShovel (732A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/732/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{   
    int k, r, indice;
    scanf("%d %d", &k, &r);
    indice = 1;
    while(true){
        if(((indice*k) % 10) == 0 || (((indice*k) % 10)-r) == 0) break;
        indice++;
    }
    printf("%d\n", indice);
    return 0;
}
