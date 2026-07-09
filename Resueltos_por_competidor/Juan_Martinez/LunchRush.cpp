/*
 * Autor: Juan Martinez
 * Problema: Lunch Rush (276A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/276/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, temp1, temp2, ma = INT_MAX*-1;
    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &temp1, &temp2);
        if(temp2 > k) ma = max(ma, (temp1 - (temp2 - k)));
        else ma = max(ma, temp1);
    }
    printf("%d\n", ma);
    return 0;
}
