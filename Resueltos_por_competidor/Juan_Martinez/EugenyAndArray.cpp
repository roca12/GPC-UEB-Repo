/*
 * Autor: Juan Martinez
 * Problema: Eugeny and Array (302A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/302/A
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
    int n, m, l, r, c1 = 0, cneg = 0, que;
    scanf("%d %d", &n, &m);
    int a[n], res[m];
    FOR(n) {
        scanf("%d", &a[i]);
        if(a[i] == 1) c1++;
        else cneg++;
    }

    FOR(m){
        scanf("%d %d", &l, &r);
        que = r - l + 1;
        if(que % 2 == 0){
            if((que/2) <= (c1) && (que/2) <= (cneg)) res[i] = 1;
            else res[i] = 0;
        } else {
            res[i] = 0;
        }
    }

    FOR(m) printf("%d\n", res[i]);
    return 0;
}
