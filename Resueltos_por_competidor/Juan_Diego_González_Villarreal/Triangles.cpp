#include <bits/stdc++.h>
#define DBG(X) cerr<<#X<<": "<<(X)<<"\n"
typedef long long ll;
using namespace std;

int main(){
    int n;
    ll total = 0;
    cin>>n;
    vector<ll> circle (n),prefix(n);
    vector<bool> used(n,false);
    for(int i = 0; i<n; i++){
        cin>>circle[i];
        total+=circle[i];
    }
    prefix[0]=circle[0];
    for(int i = 1; i<n; i++){
        prefix[i]=prefix[i-1]+circle[i];
    }
    if(total%3!=0){
        cout<<0;
        return 0;
    }
    int trgt = total/3;
    ll ans = 0;
    for(int r = 0; r<n; r++){
        if(used[r]) continue;
        auto it1 = find(prefix.begin(),prefix.end(),(prefix[r]+trgt)%total);
        auto it2 = find(prefix.begin(),prefix.end(),(prefix[r]+2*trgt)%total);
        used[r] = true;
        if(it1 != prefix.end())used[it1-prefix.begin()]=true;
        if(it2 != prefix.end())used[it2-prefix.begin()]=true;

        if(it1 == prefix.end()||it2 == prefix.end())continue;
        ans++;
    }
    cout<<ans;
}