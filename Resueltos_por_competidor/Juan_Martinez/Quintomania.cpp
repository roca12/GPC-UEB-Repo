/*
 * Autor: Juan Martinez
 * Problema: Quintomania (2036A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2036/problem/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int> arr(n);
        for(int &i : arr) cin>>i;
        bool b = 1;
        for(int i = 1; i < n; i++) {
            if(abs(arr[i] - arr[i-1]) != 5 && abs(arr[i] - arr[i-1]) != 7) b = 0;
        }
        if(b) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}
