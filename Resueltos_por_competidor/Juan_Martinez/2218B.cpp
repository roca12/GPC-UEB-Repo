/*
 * Autor: Juan Martinez
 * Problema: The 67th 6-7 Integer Problem (2218B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2218/B
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
   int t, sum; cin>>t;
   while(t--) {
        vector<int> arr(7);
        for(int i = 0; i < 7; i++) cin>>arr[i];
        sort(arr.begin(), arr.end());
        sum = 0;
        for(int i = 0; i < 7; i++) {
            if(i == 6) sum += arr[i];
            else sum -= arr[i];
        }
        cout<<sum<<endl;
   }
}
