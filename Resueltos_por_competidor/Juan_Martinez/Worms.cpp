/*
 * Autor: Juan Martinez
 * Problema: Worms (474B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/474/B
 * Difficulty: 1200
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
vector<ll> arr;

ll binarySearch(ll n) {
    ll l = 0, r = arr.size()-1, m;
    while(l <= r){
        m = l + (r - l)/2;
        if(n <= arr[m]) r = m - 1;
        else l = m + 1;
    }
    if(n > arr[m]) m++;
    return m + 1;
}

int main() {
    ll n, m;
    cin>>n;
    arr.resize(n);
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
        if(i != 0) arr[i] += arr[i-1];
    }
    cin>>m;
    for(ll i = 0; i < m; i++) {
        cin>>n;
        cout<<binarySearch(n)<<endl;
    }

}
