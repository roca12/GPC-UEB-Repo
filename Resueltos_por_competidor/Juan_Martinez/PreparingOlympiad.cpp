/*
 * Autor: Juan Martinez
 * Problema: Preparing Olympiads (550B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/550/B
 * Difficulty: 1400
 */
#include <bits/stdc++.h>
using namespace std;

#define ln "\n"
const int INF = 1e9;

int main() {
	int n, l, r, x, res = 0;
    cin>>n>>l>>r>>x;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    for(int mask = 0; mask < (1<<n); mask++) {
        int p = 0;
        int suma = 0;
        int maxi = 0;
        int mini = INF;
        for(int i = 0; i < n; i++) {
            if((mask & (1<<i)) != 0) {
                p++;
                maxi = max(maxi, arr[i]);
                mini = min(mini, arr[i]);
                suma += arr[i];
            }
        }
        if(p < 2) continue;
        if((maxi - mini) < x) continue;
        if(suma < l || suma > r) continue;
        res++;
    }
    cout<<res<<ln;
}
