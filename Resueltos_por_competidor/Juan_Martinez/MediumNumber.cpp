/*
 * Autor: Juan Martinez
 * Problema: Medium Number (1760A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/1760/problem/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
typedef long long int ll;

int main() {
	int t; cin>>t;
    while(t--) {
        vector<int> arr(3);
        for(int &i : arr) cin>>i;
        sort(arr.begin(), arr.end());
        cout<<arr[1]<<endl;
    }
}
