/*
 * Autor: Juan Martinez
 * Problema: Stones Game
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/gym/106068/problem/C
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int msb(int n) {
    int con = 0;
    while(n > 0) {
        n >>= 1;
        con++;
    }
    return con;
}
int main() {
	ll t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        //cout<<(1<<(msb(n)))-1<<endl;
        if(n == (1<<(msb(n)))-1) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
}

