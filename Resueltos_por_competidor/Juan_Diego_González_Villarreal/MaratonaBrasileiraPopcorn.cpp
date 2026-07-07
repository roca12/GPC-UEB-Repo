#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

bool check(ll t, vector<ll> &bgs, ll c, ll mid){
    ll cap = t*mid,crr=0,groups=1;
    for(ll &x:bgs){
        if(x>cap) return false;
        if(crr+x>cap){
            groups++;
            crr=x;
            if(groups>c) return false;
        }else crr+=x;
    }
    return groups<=c;
}

int main(){
    ll n,c,t;
    cin>>n>>c>>t;
    vector<ll> bgs(n);
    ll total = 0,mx = 0;
    for(ll &pop: bgs){
        cin>>pop;
        mx=max(mx,pop);
        total+=pop;
    }
    ll small = (mx+t-1)/t;
    ll large = (total+t-1)/t;
    while(small<large){
        ll mid = small + (large - small) / 2;
        if(check(t,bgs,c,mid)) large = mid;
        else small = mid+1;
    }
    cout<<small;
}