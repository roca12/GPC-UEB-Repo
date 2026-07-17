/*
 * Autor: EroMergeSort del TCC
 * Problema: Bytelandia's stones
 * Juez online: Vjudge
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/Gym-106063B
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
	ll n, sum = 0, temp; cin>>n;
    for(int i = 0; i < n; i++){
        cin>>temp;
        //cout<<" pos "<<(i+1)<<" cant "<<((n-i)+2)<<" mult "<<((i+1)*((n-i))) * temp <<endl;
        sum += ((i+1)*((n-i))) * temp ;
    }
    cout<<sum<<endl;
}
