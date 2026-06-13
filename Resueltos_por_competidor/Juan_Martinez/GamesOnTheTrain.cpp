/*
 * Autor: Juan Martinez
 * Problema: Games on the Train (2236A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2236/problem/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, torres, mini, maxi;
    scanf("%d", &t);

    while(t--) {
        scanf("%d", &torres);
        int torr[torres];
        mini = 7;
        maxi = 0;
        for(int i = 0; i < torres; i++) {
            scanf("%d", &torr[i]);
            if(torr[i] > maxi) maxi = torr[i];
            if(torr[i] < mini) mini = torr[i];
        }
        printf("%d\n", ((maxi-mini)+1));
    }
    return 0;
}
