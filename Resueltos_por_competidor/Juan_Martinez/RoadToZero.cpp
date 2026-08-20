/*
 * Autor: Juan Martinez
 * Problema: Road To Zero (1342A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1342/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	ll t, x, y, a, b, dif, res; cin>>t;
    while(t--) {
        cin>>x>>y;
        cin>>a>>b;

        res = 0;
        dif = abs(x-y);
        res += (dif*a);
        if((2*a) > b) res += (b*min(x,y));
        else res += ((2*a)*min(x,y));
        cout<<res<<endl;
    }
}
