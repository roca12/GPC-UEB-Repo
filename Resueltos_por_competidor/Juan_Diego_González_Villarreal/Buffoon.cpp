#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, large = 0;
    cin>>n;
    vector<int> v(n);
    for(int &vot: v){
        cin>>vot;
        large = max(large, vot);
    }
    if(large == v[0]) cout<<"S";
    else cout<<"N";
}