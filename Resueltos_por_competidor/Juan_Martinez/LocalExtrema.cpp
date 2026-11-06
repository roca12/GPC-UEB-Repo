/*
 * Autor: Juan Martinez
 * Problema:  Local Extrema (888A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/888/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>

using namespace std;
#define ln "\n"

int main()
{
    int n, res = 0; cin>>n;
    vector<int> arr(n);
    for(int &i : arr) cin>>i;
    for(int i = 1; i < (n-1); i++) {
        if((arr[i] > arr[i-1] && arr[i] > arr[i+1]) || (arr[i] < arr[i-1] && arr[i] < arr[i+1])) res++;
    }
    cout<<res<<ln;
}
