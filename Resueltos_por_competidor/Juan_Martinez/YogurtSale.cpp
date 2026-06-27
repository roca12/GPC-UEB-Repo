/*
 * Autor: Juan Martinez
 * Problema: Yogurt Sale (1955A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1955/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, a, b;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d %d", &n, &a, &b);
        if(b > (2*a)) printf("%d\n", n*a);
        else {
            if(n < 2) printf("%d\n", n*a);
            else {
                int val = 0;
                while(n > 0){
                    if(n >= 2) {
                        n -= 2;
                        val += b;
                    } else {
                        val += a;
                        n--;
                    }
                }
                printf("%d\n", val);
            }
        }
    }
    return 0;
}
