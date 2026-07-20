/*
 * Autor: Miguel Lopez
 * Problema: SCPC is Typing...
 * Juez online: CodeForces
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/Gym-106068B
 */
// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ll t; cin >> t;
    vector<ll> cant;
    while(t--) {
        ll n; cin >> n;
        cant.push_back(n);
    }
    sort(cant.begin(), cant.end());
    ll aver= cant.size();
    ll mid = aver / 2;
    cout << cant[mid] << endl;
    }
