/*
 * Autor: Juan Martinez
 * Problema: Black Square (431A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/431/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1, a2 , a3, a4, contador;
    string s;
    scanf("%d %d %d %d", &a1, &a2, &a3, &a4);
    cin>>s;
    contador = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '1') contador += a1;
        if(s[i] == '2') contador += a2;
        if(s[i] == '3') contador += a3;
        if(s[i] == '4') contador += a4;
    }
    printf("%d\n", contador);
    return 0;
}
