/*
 * Autor: Juan Martinez
 * Problema: Static Range Sum Queries
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1646/
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

vector<ll> segmentTree;

void build(vector<ll> in){
    ll n = 2*((ll)in.size());
    segmentTree.resize(n);
    for(ll i = (n/2), j = 0; i < n; i++, j++) segmentTree[i] = in[j];
    for(ll i = (n/2)-1; i > 0; i--) {
       segmentTree[i] = segmentTree[(2*i)] + segmentTree[(2*i)+1];
    }
}

ll get(ll l, ll r, ll n){
    l += n;
    r += n;
    ll maxi = 0;
    while(l <= r) {
        if(l & 1) maxi += segmentTree[l++];
        if (!(r & 1)) maxi += segmentTree[r--];
        r >>= 1;
        l >>= 1;
    }
    return maxi;
}

int main() {
	vector<ll> arr;
    ll n, m, a, b;
    cin>>n>>m;
    arr.resize(n);
    for(ll i = 0; i < n; i++) cin>>arr[i];
    build(arr);
    for(ll i = 0; i < m; i++) {
        cin>>a>>b;
        cout<<get(a-1,b-1, (ll) arr.size())<<endl;
    }
    //for(int i : segmentTree) cout<< i <<" ";
}
