/*
 * Autor: Juan Martinez
 * Problema: Letter (14A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/14/problem/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
typedef long long int ll;

int main() {
	int n, m, minI = 1e9, minU = 1e9, maxD = 0, maxR = 0;
    cin>>n>>m;
    vector<vector<char>> arr(n, vector<char>(m)), res;
    char aux;
    for(int i = 0; i < n; i++) { 
        for(int j = 0; j < m; j++) {
           cin>>aux;
           if(aux == '*') {
               minU = min(minU, i);
               minI = min(minI, j);
               maxD = max(maxD, i);
               maxR = max(maxR, j);
           }
            arr[i][j] = aux;
        }
    }
    for(int i = minU; i <= maxD; i++) {
        for(int j = minI; j <= maxR; j++) {
            cout<<arr[i][j];
        }
        cout<<ln;
    }
}
