#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    multimap<int,int> mp;
    vector<int> clrs(n);
    for(int i = 0;i<n;i++){
        int a;
        cin>>a>>clrs[i];
        mp.insert({a,clrs[i]});
    }
    int i = 0;
    bool flag = true;
    for(pair<int,int> val:mp){
        if(val.second!=clrs[i]){
            flag = false;
            break;
        }
        i++;
    }
    if(flag)cout<<"Y";
    else cout<<"N";
}