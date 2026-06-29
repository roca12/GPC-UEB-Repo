/*
 * Autor: Juan Martinez
 * Problema: Cupboards (248A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/248/A
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
    int n, x, y, l = 0, r = 0, res = 0;
    scanf("%d", &n);
    FOR(n){
        scanf("%d %d", &x, &y);
        if(x == 1) l++;
        if(y == 1) r++;
    }
    if(l >= ((n + 1)/2)) res += n - l;
    else res += l;
    if(r >= ((n + 1)/2)) res += n - r;
    else res += r;
    printf("%d\n", res);
    return 0;
}
