/*
 * Autor: Juan Martinez
 * Problema: Weird Algorithm
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1068/
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
    ll n; cin>>n;
    while(n != 1) {
        cout<<n<<" ";
        if(n & 1) n = (n*3) + 1; 
        else n >>= 1;
    }
    cout<<1<<endl;
}
