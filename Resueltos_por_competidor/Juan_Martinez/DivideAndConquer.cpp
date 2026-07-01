/*
 * Autor: Juan Martinez
 * Problema: Divide and Conquer (2241A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2241/A
 */
#include <bits/stdc++.h>

using namespace std;

int GCD(int a, int b) {
    return b == 0 ? a : GCD(b, a % b);
}

int lcm(int a, int b) {
        return a * (b / GCD(a, b));
    }

int main()
{
    int t, x, y;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &x, &y);
        if(x == y) printf("%s\n", "YES");
        else if(x < y) printf("%s\n", "NO");
        else if(lcm(x,y) == x)printf("%s\n", "YES");
        else printf("%s\n", "NO");
    }
    return 0;
}
