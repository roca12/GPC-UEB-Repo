#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,w,hi=0;
    cin>>h>>w;
    vector<int> l(h),r(h);
    for(int i=0,val;i<h;i++){
        cin>>l[i];
    }
    for(int i=0;i<h;i++){
        cin>>r[i];
    }
    for(int i=0;i<h;i++){
        hi = max(hi,l[i]+r[i]);
    }
    double ans = ((double)w-(double)hi)/2;
    cout<<setprecision(9)<<ans;
}