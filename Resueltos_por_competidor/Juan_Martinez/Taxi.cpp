/*
 * Autor: Juan Martinez
 * Problema: Taxi (158B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/158/B
 * Difficulty: 1100
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    sort(arr.begin(), arr.end());
    int l = 0, r = n-1, con = n;
    while(l < r) {
        if((4-arr[r]) < arr[l]) {
            r--;
        } else {
            arr[r] += arr[l];
            //cout<<arr[l]<<endl;
            l++;
            con--;
        }
    }
    cout<<con<<endl;
}
