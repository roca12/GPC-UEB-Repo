/*
 * Autor: Juan Martinez
 * Problema: Cut Ribbon (189A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/189/A
 * Difficulty: 1300
 */
#include <bits/stdc++.h>
using namespace std;

int n, a, b, c;
vector<int> dp;
int calculate(int act) {
    if(act > 0) {
        if(dp[act] == -1) {
            //cout<<"pasando por "<<act<<endl;
            dp[act] = 1 + max(calculate(act-a),max(calculate(act-b),calculate(act-c)));
        }
    } else if(act == 0) return 0;
    else {
        return -100000000;
    }
    return dp[act];
}

int main() {
    cin>>n>>a>>b>>c;
    dp.assign(n+1, -1);
    dp[0] = 0;
    calculate(n);
    cout<<dp[n]<<endl;
    //for(int i = 1; i <= n; i++) cout<<dp[i]<<" ";
    return 0;
}
