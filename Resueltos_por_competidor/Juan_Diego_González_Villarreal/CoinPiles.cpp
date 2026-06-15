#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,n,k;
        cin>>a>>b;
        n = (2*b-a)/3;
        k = (2*a-b)/3;
        bool flag =(
            k>=0 && n>= 0 
            &&
            2*k+n==a && 2*n+k==b
        );
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
}