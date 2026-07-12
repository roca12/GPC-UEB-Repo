#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,r;
    cin>>n>>r;
    if(n==r){
        cout<<"*";
        return 0;
    }
    vector<bool> found(n+1,false);
    for(int i = 0;i<n; i++){
        int tmp;
        cin>>tmp;
        found[tmp] = true;
    }
    for(int i = 1;i<=n; i++){
        if(!found[i]) cout<<i<<" ";
    }
    return 0;
}