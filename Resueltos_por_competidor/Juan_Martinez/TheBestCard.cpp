/*
 * Autor: Juan Martinez
 * Problema: The Best Card (2253A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2253/problem/A
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool primos[200002];

void criba() {
   for(int i = 0; i < 200002; i++) primos[i] = true; 
   primos[0] = 0;
   primos[1] = 0;
   for(int i = 2; i < 200002; i++) {
    if(primos[i]) {
        for(int j = i+i; j < 200002; j += i) {
            primos[j] = 0;
        }
    }
   }

}

int main() {
    criba();
    int t, n; cin>>t;
    while(t--) {
        cin>>n;
        n++;
        if(primos[n]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
