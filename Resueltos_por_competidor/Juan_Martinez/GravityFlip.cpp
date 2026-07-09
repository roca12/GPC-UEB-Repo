/*
 * Autor: Juan Martinez
 * Problema: Gravity Flip (405A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/405/A
 * Difficulty: 900
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, indice, temp; cin>>n;
    int box[n];
    for(int i = 0; i < n; i++) cin>>box[i];
    bool b;
    while(true){
        b =false;
        for(int i = (n-1); i > 0; i--) {
            if(box[i] < box[i-1]) {
                b = true;
                temp = box[i-1] - box[i];
                box[i] += temp;
                box[i-1] -= temp;
            }
        }
        if(!b) break;
    }
    for(int i = 0; i < n; i++) cout<<box[i]<< " ";
    return 0;
}
