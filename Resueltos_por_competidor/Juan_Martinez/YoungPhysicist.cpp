/*
 * Autor: Juan Martinez
 * Problema: Young Physicist (69A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/69/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, res[6];
    scanf("%d", &n);
    res[3] = 0;
    res[4] = 0;
    res[5] = 0;
    for(int i = 0; i < n; i++) {
            scanf("%d %d %d", &res[0], &res[1], &res[2]);
            res[3] += res[0];
            res[4] += res[1];
            res[5] += res[2];
    }
    if(res[3] == 0 && res[4] == 0 && res[5] == 0) printf("%s", "YES");
    else printf("%s", "NO");
    return 0;
}
