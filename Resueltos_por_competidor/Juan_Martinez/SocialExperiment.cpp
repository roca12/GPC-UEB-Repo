/*
 * Autor: Juan Martinez
 * Problema: Social Experiment (2184A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2184/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, res;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        if(n == 2) res = n;
        else if(n == 3) res = 3;
        else res = n % 2;
        printf("%d\n", res);
    }
    return 0;
}
