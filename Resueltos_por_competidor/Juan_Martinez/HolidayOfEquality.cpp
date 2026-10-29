/*
 * Autor: Juan Martinez
 * Problema: Holiday Of Equality (758A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/758/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
int main() {
	int t, n, maxi;
        cin>>n;
        vector<int> arr(n);
        maxi = 0;
        int res = 0;
        for(int &a : arr) cin>>a, maxi = max(maxi, a);
        for(int &a : arr) {
            res += maxi-a;
        }
        cout<<res<<ln;
}
