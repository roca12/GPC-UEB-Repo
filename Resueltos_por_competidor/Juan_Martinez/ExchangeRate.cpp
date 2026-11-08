/*
 * Autor: Juan Martinez
 * Problema: Exchange Rate
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/gym/106679/problem/C
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, c, k; cin>>t>>c>>k;
    cout<<min(c, (k*t))<<"\n";
}
