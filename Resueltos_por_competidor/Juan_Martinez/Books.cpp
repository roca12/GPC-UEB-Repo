/*
 * Autor: Juan Martinez
 * Problema: Books (279B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/279/B
 * Difficulty: 1400
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
    cin>>n>>m;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    int l = 0, sum = 0, can = 0, maxi = 0;

    for(int r = 0; r < n; r++) {
        sum += arr[r];
        can++;
        if(sum > m) {
            sum -= arr[l];
            l++;
            can--;
        }
        maxi = max(maxi, can);
    }
    cout<<maxi<<endl;
}   
