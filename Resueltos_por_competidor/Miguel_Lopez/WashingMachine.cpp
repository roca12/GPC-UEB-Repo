/*
 * Autor: Miguel Lopez
 * Problema: Washing Machine
 * Juez online: CodeForces
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/Gym-106068J
 */
// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ll n,k,h; cin >> n >> k >> h;
    ll total = 0;
    bool jod = false;
    while(n--) {
        ll z; cin >> z;
        ll div = (z+k-1)/k;
        if(div > h) jod = true;
        else {
            total+=div;
        }
    }
    if(jod) cout << -1 << endl;
    else {
        ll pri = (total+h-1)/h;
        cout << pri << endl;
    }
}
