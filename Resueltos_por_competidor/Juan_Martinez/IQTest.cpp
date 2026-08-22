/*
 * Autor: Juan Martinez
 * Problema: IQ test (25A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/25/A
 * Difficulty: 1300
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
    map<int,int> m;
    int arr[n];
    bool e = 1;
    for(int i = 0; i < n; i++) cin>>arr[i], m[(arr[i]%2)]++;
    if(m[0] > m[1]) e = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]%2 != e) cout<<i+1<<endl;
    }
}
