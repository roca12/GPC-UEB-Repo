#include<bits/stdc++.h>
#define DBG(X) cerr<<#X<<": "<<(X)<<endl;
using namespace std;

int main(){
    int t,n,i,cnt,last;
    cin>>t;
    while(t--){
        cnt=0;
        cin>>n>>i;
        while(i%2==0){
            if(n%2==0)cnt+=n/2;
            else cnt+=(n/2) + 1;
            i/=2;
            n/=2;
        }
        if(n%2==0)n/=2;
        else n = n/2 + 1;
    }
}