/*
 * Autor: Juan Martinez
 * Problema: Xenia and Ringroad (339B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/339/B
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	ll n, m, t = 0, current = 1, temp;
    cin>>n>>m;
    for(ll i = 0; i < m; i++){
        cin>>temp;
        if(temp > current) t += (temp - current);
        else if(temp < current) t += (n-current) + temp;
        current = temp;
    }
    cout<<t<<endl;
}
