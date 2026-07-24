/*
 * Autor: Juan Martinez
 * Problema: Counting ones
 * Juez online: Online Judge
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4408
 */
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
ll msb(ll num){
    ll cont  = -1;
    while(num > 0) num >>= 1, cont++;
    return cont;
}
 
ll bits(ll num) { 
    ll cont = 0;
    ll msbN = msb(num);
    for(ll i = 0; i <= msbN; i++) {
        cont += ((num+1)/(1LL<<(i+1))) * (1LL<<i);
        cont += max(0LL, (((num+1)%(1LL<<(i+1))) - (1LL<<i)));
    }
    return cont;
}
int main() {
	ll a, b;
    while(cin>>a>>b){
        cout<<(bits(b) - bits(a-1))<<endl;
    }
}
