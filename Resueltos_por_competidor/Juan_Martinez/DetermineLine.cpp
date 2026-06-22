/*
 * Autor: Juan Martinez
 * Problema: Determine Line (1056A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1056/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t, res[100], aux, temp;
    scanf("%d", &t);
    for(int i = 0; i < 100; i++) res[i] = 0;

    for(int j = 0; j < t; j++){
      scanf("%d", &aux);
      for(int i = 0; i < aux; i++) {
        scanf("%d", &temp);
        res[temp-1]++;
      }
    }
    for(int i = 0; i < 100; i++){
        if(res[i] == t) printf("%d ", (i+1));
    }
    return 0;
}
