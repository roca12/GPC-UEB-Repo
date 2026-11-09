/*
 * Autor: Juan Martinez
 * Problema: Stones on the Table (226A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/266/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, res = 0; cin>>n;
    vector<char> arr(n);
    for(char &c : arr) cin>>c;
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i-1]) res++;
    }
    cout<<res<<"\n";
}
