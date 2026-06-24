/*
 * Autor: Juan Martinez
 * Problema: 1-1 (2207A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2207/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, mi, ma ;
    scanf("%d", &t);
    while(t--) {
       mi = 0; ma = 0;
       scanf("%d", &n);
       char bin[n];
       scanf("%s", bin);

       for(int i = 0; i < n; i++){
            if(i > 0 && i < (n-1)){
                    if(bin[i-1] == '1' && bin[i+1] == '1'){
                        if(bin[i] == '0') {
                            bin[i] = '1';
                        }
                    }
            }
       }
       for(int i = 0; i < n; i++) if(bin[i] == '1') ma++;

       for(int i = 0; i < n; i++){
            if(i > 0 && i < (n-1)){
                    if(bin[i-1] == '1' && bin[i+1] == '1'){
                        if(bin[i] == '1') {
                            bin[i] = '0';
                        }
                    }
            }
       }
       for(int i = 0; i < n; i++) if(bin[i] == '1') mi++;

       printf("%d %d\n", mi, ma);
    }
    return 0;
}
