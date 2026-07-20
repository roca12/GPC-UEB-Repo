/*
 * Autor: Juan Martinez
 * Problema: Counting Bits
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1146/
 */
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
ll mostSigBit(ll num){
    ll cont = -1;
    while(num != 0) {
        cont++;
        num = num >> 1LL;
    }
    return cont;
}
 
ll count(ll num){
    if(num == 0) return 0;
    ll msb, p, r, bits = 0;
    msb = mostSigBit(num);
    p = (msb *(1LL << (msb - 1)));
    bits += p; 
    r = num - (1LL << msb);
    bits += num - (1LL << msb) + 1;
    //cerr<<num<<" "<<p<<" "<<num - p + 1<<" "<<bits<<endl;
    return bits + count(r);
}
 
int main() {
	ll n, bits; cin>>n;
    bits = count(n);
    cout<<bits<<endl;
}
