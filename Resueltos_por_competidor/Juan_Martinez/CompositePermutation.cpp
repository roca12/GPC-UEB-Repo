/*
 * Autor: Juan Martinez
 * Problema: Composite Permutation (2285A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2285/problem/A
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
typedef long long int ll;
int main() {
	int t, n; cin>>t;
    while(t--) {
        cin>>n;
        if(n <= 3) cout<<-1<<ln;
        else {
            if(n % 2 == 0) {
                for(int i = n; i > 0; i--) cout<<i<<" ";
                cout<<ln;
            } else {
                cout<<n-1<<" ";
                for(int i = n; i > 2; i--) {
                    if(i != (n-1)) cout<<i<<" ";
                }
                cout<<1<<" "<<2<<ln;
                cout<<ln;
            }
        }
    }
}
