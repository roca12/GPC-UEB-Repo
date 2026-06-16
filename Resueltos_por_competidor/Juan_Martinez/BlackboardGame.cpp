/*
 * Autor: Juan Martinez
 * Problema: Blackboard Game (2123A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2123/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        if((n % 4) == 0) printf("%s\n", "Bob");
        else printf("%s\n", "Alice");
    }
    return 0;
}
