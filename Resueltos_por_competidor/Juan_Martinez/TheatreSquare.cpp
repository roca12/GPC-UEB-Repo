/*
 * Autor: Juan Martinez
 * Problema: Theatre Square (1A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n, m, a, fi, co;
    scanf("%lld %lld %lld", &n, &m, &a);
    double x,y;
    x = m;
    y = n;
    fi = ceil(y/a);
    co = ceil(x/a);
    printf("%lld", (co*fi));
    return 0;
}
