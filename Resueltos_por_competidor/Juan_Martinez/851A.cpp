/*
 * Autor: Juan Martinez
 * Problema: Arpa and a research in Mexican wave (851A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/851/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int n, k, t;
    scanf("%d %d %d", &n, &k, &t);
    if(t < k) printf("%d", t);
    else if(t >= k && t <= n) printf("%d", k);
    else printf("%d", (k - (t-n)));
    return 0;
}
