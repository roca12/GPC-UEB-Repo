/*
 * Autor: Juan Martinez
 * Problema: Marathon (1692A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1692/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
    while(t--) {
        int arr[4], con = 0;
        for(int i = 0; i < 4; i++) cin>>arr[i];
        for(int i = 1; i < 4; i++) {
            if(arr[i] > arr[0]) con++;
        }
        cout<<con<<endl;
    }
}
