/*
 * Autor: Juan Martinez
 * Problema: Contest (501A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/501/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    a = max((3*a)/10, a - (a/250) * c);
    b = max((3*b)/10, b - (b/250) * d);
    if(a > b) printf("%s\n", "Misha");
    else if(a < b) printf("%s\n", "Vasya");
    else printf("%s\n", "Tie");
    
    
    return 0;
}
