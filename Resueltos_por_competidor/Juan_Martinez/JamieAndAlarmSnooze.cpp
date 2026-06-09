/*
 * Autor: Juan Martinez
 * Problema:  Jamie and Alarm Snooze (916A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/916/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int x, hh, mm;
    scanf("%d", &x);
    scanf( "%d %d", &hh, &mm);

    int contador = 0;
    bool bandera = true;

    while(bandera) {

 //       cout<< hh << ":" << mm<<endl;
        stringstream ss;
        ss<<hh;
        ss<<mm;
        string s = ss.str();

        for(int i = 0; i < 4; i++) {
            if(s[i] == '7') bandera = false;
        }

        if(mm >= x) {
            mm -= x;
        } else {
            if(hh == 1) {
                hh = 24;
            } else {
                hh--;
            }
            mm -= x;
            mm = 60 + mm;
        }
        if(bandera) contador++;
    }
    printf("%d", contador);

    return 0;
}
