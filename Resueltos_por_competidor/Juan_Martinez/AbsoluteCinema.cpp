/*
 * Autor: Juan Martinez
 * Problema: Absolute Cinema (2229B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2229/B
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll t, n, m, temp, sum;
    scanf("%lld", &t);

    while(t--){
        m = 0;
        sum = 0;
        scanf("%lld", &n);
        ll a[n];
        ll b[n];

        for(int i = 0; i < n; i++) scanf("%lld", & a[i]);
        for(int i = 0; i < n; i++) scanf("%lld", & b[i]);
        for(int i = 0; i < n; i++){
            if(a[i] > b[i]) {
                temp = b[i];
                b[i] = a[i];
                a[i] = temp;
            }
                if(a[i] > m) m = a[i];
                sum += b[i];
        }
        printf("%lld\n", (m+sum));
    }
    return 0;
}
