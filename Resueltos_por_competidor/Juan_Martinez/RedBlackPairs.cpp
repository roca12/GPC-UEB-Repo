/*
 * Autor: Juan Martinez
 * Problema: Red-Black Pairs (2225C)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2225/problem/C
 * Difficulty: 1100
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define ln "\n"
const int INF = 1e9;
string a, b;

int costoVertical(int i) {
    if(a[i] != b[i]) return 1;
    return 0;
}

int costoHorizontal(int i) {
    if(a[i] == b[i+1]) return 2;
    if(a[i] == a[i+1] && b[i] == b[i+1]) return 0;
    return INF;
}

int main() {
    int t, n, res; cin>>t;
    while(t--) {
        cin>>n;
        cin>>a>>b;
        res = 0;
        vector<int> dp((n+1), INF);
        dp[0] = 0;
        for(int i = 0; i < n; i++) {
            if((n-i) > 1) dp[i+2] = min(dp[i+2], dp[i] + costoHorizontal(i));
            dp[i+1] = min(dp[i+1], dp[i] + costoVertical(i));
            //cout<<dp[i]<<ln;
        }
        cout<<dp[n]<<ln;
    }
}
