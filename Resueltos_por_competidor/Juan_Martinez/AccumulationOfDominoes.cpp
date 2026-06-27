/*
 * Autor: Juan Martinez
 * Problema: Accumulation of Dominoes (1725A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1725/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

#define FOR(a) for(int i = 0; i < a; i++)
#define FORI(a)  for(int i = 0; i <= a; i++)
#define FOR2(a, b) for(int i = b; i < a; i++)
#define FORI2(a, b)  for(int i = b; i <= a; i++)

typedef long long ll;

int main()
{
    ll n, m, res;
    scanf("%lld %lld", &n, &m);
    if(m > 1)  res = (m-1)*n;
    else res = (n*m) - 1;
    printf("%lld\n", res);
    return 0;
}
