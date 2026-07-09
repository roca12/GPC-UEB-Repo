/*
 * Autor: Juan Martinez
 * Problema: Game With Sticks (451A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/451/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if( min(n,m) % 2 == 0) printf("%s\n", "Malvika");
    else printf("%s\n", "Akshat");
    return 0;
}
