/*
 * Autor: Jorge Nuñez
 * Problema: Flip Flops
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2209/A
 */
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define all(x) (x).begin(), (x).end()

const ll MOD = 1e9 + 7;
const int INF = 1e9;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int j ;
    
    cin>>j;
    while(j--){
        ll n,c,k;
        cin>>n>>c>>k;
        vector<ll>m(n);
        for(int i =0;i<n;i++){
            cin>>m[i];
        }
        sort(all(m));
for (int i = 0; i < n; i++) {
            if (m[i] > c) {
                break;
            }
            ll sum = min(k, c - m[i]);

            k -= sum;
            c += m[i] + sum;
        }
        cout << c << endl;
      
      }

    }