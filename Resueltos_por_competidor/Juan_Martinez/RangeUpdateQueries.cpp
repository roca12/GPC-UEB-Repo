/*
 * Autor: Juan Martinez
 * Problema: Range Update Queries
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1651/
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

vector<ll> fenwickTree;

void update(ll pos, ll value) {
    while(pos < (ll)fenwickTree.size()) {
        fenwickTree[pos] += value;
        pos += pos & (-pos);
    }
}

void rangeUpdate(ll l , ll r, ll value) {
    update(l, value);
    update(r + 1, -value);
}

void build(vector<ll> arr) {
    fenwickTree.assign(arr.size()+1, 0);
    for(ll i = 1; i < (ll)fenwickTree.size(); i++) {
        ll dif;
        if(i == 1) dif = arr[i-1];
        else dif = arr[i-1] - arr[i-2];
        update(i, dif);
    }
}

ll getSum(ll pos) {
    ll sum = 0;
    while(pos > 0) {
        sum += fenwickTree[pos];
        pos -= pos & (-pos);
    }
    return sum;
}

ll sum(ll l, ll r) {
    return getSum(r) - getSum(l-1);
}


int main() {
    ll n, q, op, l, r, v; 
    cin>>n>>q;
    vector<ll> arr(n);
    for(ll i = 0; i < n; i++) cin>>arr[i];
    build(arr);
    for(ll i = 0; i < q; i++) {
        cin>>op;
        if(op == 2) {
            cin>>l;
            cout<<getSum(l)<<endl;
        } else {
            cin>>l>>r>>v;
            rangeUpdate(l,r,v);
        }
    }
}
