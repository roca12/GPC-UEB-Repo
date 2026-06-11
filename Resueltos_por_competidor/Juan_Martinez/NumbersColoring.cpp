/*
 * Autor: Juan Martinez
 * Problema: Good ol' Numbers Coloring (1245A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1245/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>

using namespace std;

int GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a % b);
}

int main()
{
    int t, a, b;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &a, &b);
        if(GCD(a,b) != 1) printf("%s\n", "Infinite");
        else printf("%s\n", "Finite");

    }
    return 0;
}
