/*
 * Autor: Miguel Lopez
 * Problema: Oooh I See
 * Juez online: RPC
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/Baekjoon-32813
 */

#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int a,b; scanf("%d %d", &a,&b);
    vector<string> test(a);
    for(int i = 0; i < a; i++) {
        cin >> test[i];
    }
    int cont = 0, pos1, pos2;
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            if(test[i][j] == '0') {
                if(i > 0 && i < a-1 && j > 0 && j < b-1) {
                    if(test[i-1][j-1]=='O' && test[i-1][j]=='O' && test[i-1][j+1]=='O' &&
                       test[i][j-1]=='O'   &&                      test[i][j+1]=='O'    &&
                       test[i+1][j-1]=='O' && test[i+1][j]=='O' && test[i+1][j+1]=='O') {
                        cont++;
                        pos1 = i;
                        pos2 = j;
                    }
                }
            }
        }
    }
    if(cont == 0){
        printf("Oh no!\n");
    } else if(cont == 1){
        printf("%d %d\n", pos1+1, pos2+1);
    } else {
        printf("Oh no! %d locations\n", cont);
    }
    return 0;
}
