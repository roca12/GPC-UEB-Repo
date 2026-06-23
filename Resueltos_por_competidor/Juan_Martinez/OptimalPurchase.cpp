/*
 * Autor: Juan Martinez
 * Problema: Optimal Purchase (2230A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2230/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t, n, a, b, aux, aux2;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld %lld %lld", &n, &a, &b);
        aux = n / 3;
        aux2 = n % 3;
        ll res =  min( (n*a), min(((aux*b)+(aux2*a)), (aux*b)+b));
        printf("%lld\n",res);
    }
    return 0;
}
