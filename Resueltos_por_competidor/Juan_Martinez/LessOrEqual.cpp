/*
 * Autor: Juan Martinez
 * Problema: Less or Equal (977C)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/977/C
 * Difficulty: 1200
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin>>n>>k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];
    sort(arr.begin(), arr.end());
    if(k == n) cout<<arr[k-1]<<endl;
    else {
        if(k == 0){
            if(arr[0] > 1) cout<<arr[0]-1<<endl;
            else cout<<-1<<endl;
        } else if(arr[k-1] == arr[k]) cout<<-1<<endl;
        else cout<<arr[k-1]<<endl;
    }
}
