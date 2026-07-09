/*
 * Autor: Juan Martinez
 * Problema: Sum (1742A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1742/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, b, c;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d %d", &a, &b, &c);

        if((a+b)==c || (a+c) == b || (b+c) == a) printf("%s\n", "YES");
        else printf("%s\n", "NO");
    }
    return 0;
}
