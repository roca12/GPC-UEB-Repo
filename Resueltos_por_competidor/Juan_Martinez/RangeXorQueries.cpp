/*
 * Autor: Juan Martinez
 * Problema: Range Xor Queries
 * Juez online: Cses
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1650/
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
       segmentTree[i] += segmentTree[(2*i)] ^ segmentTree[(2*i)+1];
    }
}
 
ll get(ll l, ll r, ll n){
    l += n;
    r += n;
    ll mini = 0;
    while(l <= r) {
        if(l & 1) mini ^= segmentTree[l++];
        if (!(r & 1)) mini ^= segmentTree[r--];
        r >>= 1;
        l >>= 1;
    }
    return mini;
}

void update(ll pos, ll value, ll n) {
    pos += n;
    segmentTree[pos] = value;
    ll temp;

    while(pos > 1) {
        pos >>= 1;
        temp = 1e18;
        temp = min(segmentTree[(pos*2)], segmentTree[(pos*2)+1]);
        if(segmentTree[pos] != temp) segmentTree[pos] = temp;
        else break;
    }
}
 
int main() {
	vector<ll> arr;
    ll n, m, a, b;
    cin>>n>>m;
    arr.resize(n);
    for(ll i = 0; i < n; i++) cin>>arr[i];
    build(arr);
    for(ll i = 0; i < m; i++) {
       // cin>>a;
       // if(a == 1) {
            //cin>>a>>b;
            //update((a-1), b, (int)arr.size());
            //for(int i : segmentTree) cout<<i<<" ";
            //cout<<endl;
        //} else {
            cin>>a>>b;
            cout<<get((a-1), (b-1), (int)arr.size())<<endl;
        //}
    }
}
