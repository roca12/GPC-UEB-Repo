/*
 * Autor: Juan Martinez
 * Problema: Forgotten Episode (440A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/440/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

#define FOR(a) for(int i = 0; i < a; i++)
#define FORI(a)  for(int i = 0; i <= a; i++)
#define FOR2(a, b) for(int i = b; i < a; i++)
#define FORI2(a, b)  for(int i = b; i <= a; i++)

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    set<int> ep;
    FOR(n-1) {
        scanf("%d", &a[i]);
        ep.insert(a[i]);
    }

    FORI2(n, 1){
        if(ep.count(i) == 0) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
