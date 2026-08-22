/*
 * Autor: Juan Martinez
 * Problema: T-primes (230B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/230/B
 * Difficulty: 1300
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

set<ll> tprimos;
vector<bool> primos(1000001, 1);

void criba() {
    primos[0] = 0;
    primos[1] = 0;
    for(ll i = 2; i < 1000001; i++) {
        if(primos[i]) {
            tprimos.insert(i*i);
            for(ll j = 2*i; j < 1000001; j=j+i) {
                primos[j] = 0;
            }
        }
    }
}
int main() {
    ll n, a; cin>>n;
    criba();
    while(n--) {
        cin>>a;
        if(tprimos.count(a) == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
