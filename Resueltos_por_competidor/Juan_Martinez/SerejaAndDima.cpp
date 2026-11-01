/*
 * Autor: Juan Martinez
 * Problema: Sereja and Dima (381A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/381/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"

int main() {
	int n; cin>>n;
    vector<int> arr(n);
    for(int &i : arr) cin>>i;
    int l = 0, r  = (n-1), a = 0, b = 0;
    int i = 0;
    while(l <= r) {
        if(i % 2 == 0) {
            if(arr[l] >= arr[r]) a += arr[l], l++;
            else a += arr[r], r--;
        } else {
            if(arr[l] >= arr[r]) b += arr[l], l++;
            else b += arr[r], r--;
        }
        i++;
    }
    cout<<a<<" "<<b<<ln;
}
