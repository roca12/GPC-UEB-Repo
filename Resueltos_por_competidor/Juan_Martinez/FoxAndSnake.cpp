/*
 * Autor: Juan Martinez
 * Problema: Fox And Snake (510A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/510/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
    cin>>n>>m;
    char sna[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if((i & 1) == 0) sna[i][j] = '#';
            else sna[i][j] = '.';
        }    
    }
    int z = 0;
    for(int i = 0; i < n; i++) {
        if((i & 1) == 1){
            if((z & 1) == 0) sna[i][m-1] = '#';
            else sna[i][0] = '#';
            z++;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout<<sna[i][j];
        }    
        cout<<endl;
    }
    return 0;
}
