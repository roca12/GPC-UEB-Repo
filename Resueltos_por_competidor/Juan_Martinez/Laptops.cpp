/*
 * Autor: Juan Martinez
 * Problema: Laptops (456A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/456/A
 * Difficulty: 1100
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b; cin>>n;
    vector<pair<int,int>> arr(n);
    for(int i = 0; i < n; i++) {
        cin>>a>>b;
        arr[i] = {a,b};
    }
    sort(arr.begin(), arr.end());
    bool exist = false;

    for(int i = 0; i < (n-1); i++) {
        if(arr[i].second > arr[i+1].second) {
            exist = true;
            break;
        }
    }
    if(exist) cout<<"Happy Alex"<<endl;
    else cout<<"Poor Alex"<<endl;
}
