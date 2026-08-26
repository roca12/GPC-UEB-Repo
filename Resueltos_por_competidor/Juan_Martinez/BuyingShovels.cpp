/*
 * Autor: Juan Martinez
 * Problema: Buying Shovels (1360D)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1360/D
 * Difficulty: 1300
 */
#include <bits/stdc++.h>
using namespace std;

int divisible = 0;
void maximoDivisor(int n, int m) {
    divisible = 0;
    for(int i = 1; i <= sqrt(n)+1 && i <= m; i++) {
        if(n % i == 0) {
            divisible = max(i, divisible);
            if(n / i <= m) divisible = max(divisible, n / i);
        }
    }
}

int main() {
    int t, n, m; cin>>t;
    while(t--) {
        cin>>n>>m;
        if(m >= n) {
            cout<<1<<endl;
        } else {
            maximoDivisor(n,m);
            if(divisible == 0) cout<<n<<endl;
            else cout<<(n/divisible)<<endl; 
        }
    }
}
