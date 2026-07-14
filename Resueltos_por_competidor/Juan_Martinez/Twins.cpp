/*
 * Autor: Juan Martinez
 * Problema: Twins (160A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/160/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int max, n, sum = 0, cant = 0,  monedas = 0, indice, ma = 0;
    cin>>n;
    int mon[n];
    for(int i = 0; i < n; i++){
        cin>>mon[i];
        sum+=mon[i];
    }
    while(monedas <= sum){
        ma = 0;
        for(int i = 0; i < n; i++){
            if(mon[i] >= ma) {
                ma = mon[i];
                indice = i;
            }
        }
        sum-=ma;
        monedas+=ma;
        //cout<<" "<<monedas<<endl;
        mon[indice] = 0;
        cant++;
    }
    cout<<cant<<endl;
    return 0;
}
