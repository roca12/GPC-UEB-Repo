/*
 * Autor: Juan Martinez
 * Problema: Stair, Peak, or Neither? (1950A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1950/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

#define casos int t; scanf("%d", &t); while(t--)

int main()
{
    int a, b, c;
    casos {
        scanf("%d %d %d", &a, &b, &c);
        if(a < b && b < c) printf("%s\n", "STAIR");
        else if(a < b && b > c) printf("%s\n", "PEAK");
        else printf("%s\n", "NONE");
    }
    return 0;
}
