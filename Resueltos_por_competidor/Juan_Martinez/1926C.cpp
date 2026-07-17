/*
 * Autor: Juan Martinez
 * Problema: Vlad and a Sum of Sum of Digits (1926C)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1926/C
 * Difficulty: 1200
 */
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll dp[1000001];


int main()
{
    dp[0] = 0;
    string s;
    for(ll i = 1; i < 1000001; i++){
        s = to_string(i);
        for(char c : s) dp[i] += c - '0';
        dp[i] += dp[i-1];
    }
    int t, temp; cin>>t;
    while(t--) {
        cin>>temp;
        cout<<dp[temp]<<endl;
    }
    return 0;
}
