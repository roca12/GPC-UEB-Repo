/*
 * Autor: Juan Martinez
 * Problema: Line Trip (1901A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1901/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t,  n, x;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &n, &x);
        int est[(n+2)];
        est[0] = 0;
        est[n+1] = x;
        int maxi = 0;
        for(int i = 1; i <= n; i++) scanf("%d", &est[i]);
        for(int i = 0; i <= n; i++) {
            maxi =max(maxi, est[i+1] - est[i]);
            //printf("i = %d\n", est[i]);
            //printf("i+1 = %d\n", est[i+1]);
           // printf("Maximo = %d\n", maxi);
        }
        maxi = max(maxi, (2*(est[n+1]-est[n])));
        printf("%d\n", maxi);
    }
    return 0;
}
