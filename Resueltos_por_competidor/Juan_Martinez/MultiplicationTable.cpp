/*
 * Autor: EroMergeSort del TCC
 * Problema: Multiplication Table 
 * Juez online: Vjudge
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/CodeForces-577A
 */
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {

    ll a, b, sum, con = 0;
    cin >> a >> b;
    
    for(ll i = 1; i <= a; i++){
        if((i*a) >= b){
            if(b % i == 0) con++;
        }
    }
    
    cout<<con<<endl;
}
