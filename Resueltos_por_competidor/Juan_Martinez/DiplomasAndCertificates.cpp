/*
 * Autor: Juan Martinez
 * Problema: Diplomas and Certificates (818A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/818/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll n,k;
    scanf("%lld %lld", &n, &k);

    ll x, y, z;
    if(k >= n){
        x = 0;
        y = 0;
        z = n;
    } else {
        x = n/(2*(k+1));
        y = x*k;
        z = n - x- y;
    }
    printf("%lld %lld %lld", x, y, z);
    return 0;
}
