/*
 * Autor: Juan Martinez
 * Problema: Hungry Student Problem (903A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/903/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, x;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &x);
        if((x % 3) == 0 || (x % 7) == 0) {
            printf("%s\n", "YES");
            continue;
        } else {
            bool b = false;
            for(int i = 0; i <= 100; i++){
                for(int j = 0; j <= 100; j++){
                    if(((3*i)+(7*j)) == x) {
                        printf("%s\n", "YES");
                        b = true;
                        i = 101;
                    }
                }
            }
            if(!b) printf("%s\n", "NO");
        }
    }
    return 0;
}
