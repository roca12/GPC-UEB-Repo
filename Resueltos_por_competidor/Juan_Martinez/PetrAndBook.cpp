/*
 * Autor: Juan Martinez
 * Problema: Petr and Book (139A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/139/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, arr[7];
    cin>>n;
    for(int i = 0; i < 7; i++) cin>>arr[i];
    int indice = 0;
    while(n > 0) {
        n -= arr[indice];
        //cout<<n<<endl;
        if(n < 1) break;
        if(indice == 6) indice = 0;
        else indice++;
    }
    cout<<(indice+1)<<endl;
}
