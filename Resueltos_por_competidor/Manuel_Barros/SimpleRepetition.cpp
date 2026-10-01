/*
 * Autor: Manuel Barros
 * Problema: Simple Repetition
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2093/C
 */

#include <iostream>
#include <vector>

typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll N = 31623;
    vector<bool> prime(N+1, true);
    vector<ll> primos;
    prime[0] = prime[1] = false;
    for (int p = 2; p * p <= N; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= N; i += p) {
                prime[i] = false;
            }
        }
    }

    for(int i = 0; i < N+1; i++) {
        if(prime[i]){
            primos.push_back(i);
        }
    }

    int t;
    cin>>t;


    while(t--) {
        int x, k;
        cin >> x >> k;
        if(k != 1){
            if(x == 1 && k == 2) {
                cout << "Yes" << "\n";
            }
            else cout << "No" << "\n";
        } else {
            bool flag = true;
            for(int i = 0; i < primos.size(); i++) {
                if(x == 1 && k == 1){
                    flag = false;
                    break;
                }
                if(primos[i]*primos[i] > x)
                {
                    break;
                }

                if(x%primos[i] == 0 && x!=primos[i]) {
                    flag = false;
                    break;
                }
            }
            if(flag){
                cout << "Yes" << "\n";
            } else {
                cout << "No" << "\n";
            }
        }
    }
}
