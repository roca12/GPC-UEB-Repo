/*
 * Autor: Juan Martinez
 * Problema: Sereja and Suffixes (368B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/368/B
 * Difficulty: 1100
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
    cin>>n>>m;
    int arr[n], dp[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    set<int> dif;
    for(int i = (n-1); i >= 0; i--){
        dif.insert(arr[i]);
        dp[i] = dif.size();
    }
    for(int i = 0; i < m; i++) {
        cin>>n;
        cout<<dp[n-1]<<endl;
    }
}

