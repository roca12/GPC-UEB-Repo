/*
 * Autor: Juan Martinez
 * Problema: Police Recruits (427A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/427/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, aux; cin>>n;
    int policias = 0, crimes = 0;
    for(int i = 0; i < n; i++) {
        cin>>aux;
        if(aux == -1) {
            if(policias > 0) policias--;
            else crimes++;
        } else policias += aux;
    }
    cout<<crimes<<endl;
}
