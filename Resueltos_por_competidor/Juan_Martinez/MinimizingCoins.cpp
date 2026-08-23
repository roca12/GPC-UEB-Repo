/*
 * Autor: Juan Martinez
 * Problema: Minimizing Coins
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1634/
 */
#include <bits/stdc++.h>
using namespace std;

int n, m, INF = 1000000000; 
vector<int> arr, dp;

int calculate(int act) {
    if(act > 0) {
        if(dp[act] == -1) {
           int mini = INF; 
            for(int i = 0; i < n; i++) {
                mini = min(mini, calculate(act-arr[i]) + 1);
            }
            dp[act] = mini;
        }
    } else if(act < 0) {
        return INF;
    } 
    return dp[act];
}
int main() {
    cin>>n>>m;
    arr.resize(n);
    dp.assign(m+1, -1);
    dp[0] = 0;
    for(int i = 0; i < n; i++) cin>>arr[i];
    calculate(m);
    if(dp[m] == INF) cout<<-1<<endl;
    else cout<<dp[m]<<endl;
    //for(int i: dp) cout<<i<<" ";
}
