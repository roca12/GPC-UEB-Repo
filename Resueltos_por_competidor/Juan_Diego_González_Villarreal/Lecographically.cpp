#include <bits/stdc++.h>
#define DBG(X) cerr<<#X<<": "<<(X)<<endl
typedef long long ll;
using namespace std;

int main()
{
    int n,hi=0;
    cin>>n;
    vector<int> v(n);
    for(int &num: v){
        cin>>num;
        hi=max(hi,num);
    }
    int k=0;
    while((1<<k) <= hi)k++;
    vector<int> cnt(k,0);
    for(int i = 0;i<n; i++){
        for(int j = 0; j<k;j++){
            if((v[i]>>j)&1)cnt[j]++;
        }
    }
    
    for(int i = 0;i<n; i++){
        int tmp=0;
        for(int j = 0; j<k;j++){
            if(cnt[j]){
                cnt[j]--;
                tmp|=(1<<j);
            }
        }
        cout<<tmp<<" ";
    }
    return 0;
}