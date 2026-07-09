#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int val, cnt=1;
    cin>>val;
    ll a=1,b=2;
    while(cnt<val){
        int tmp = a;
        a = b;
        b = tmp;
        b+=a;
        cnt++;
    }
    cout<<a;
}