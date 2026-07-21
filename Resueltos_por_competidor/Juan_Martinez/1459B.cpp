/*
 * Autor: Juan Martinez
 * Problema: Move and Turn (1459B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1459/B
 * Difficulty: 1300
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
    int n;
    cin>>n;
    if((n & 1) == 1) cout<<(2*((n/2) + 1)*((n/2) + 2))<<endl;
    else cout<<((n/2) + 1)*((n/2) + 1)<<endl;
}
