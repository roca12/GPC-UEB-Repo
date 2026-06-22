/*
 * Autor: Juan Martinez
 * Problema: Minimize! (2009A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2009/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

#define casos int t; scanf("%d", &t); while(t--)

int main()
{   int a, b;
    casos{
        scanf("%d %d", &a, &b);
        printf("%d\n", (b-a));
    }
    return 0;
}
