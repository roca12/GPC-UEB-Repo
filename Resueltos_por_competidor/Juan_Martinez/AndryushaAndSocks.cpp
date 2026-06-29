/*
 * Autor: Juan Martinez
 * Problema: Andryusha and Socks (780A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/780/A
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
    int ma = 0, n, aux;
    set<int> ta;
    scanf("%d", &n);
    FOR((n*2)) {
        scanf("%d", &aux);
        if(ta.count(aux) == 1) ta.erase(aux);
        else ta.insert(aux);
        ma = max(ma, (int)ta.size());
    }
    printf("%d\n", ma);
    return 0;
}
