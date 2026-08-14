//Profit Increment in Codechef - https://www.codechef.com/problems/PROINC
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; i++){
        int x, y;
        cin>>x>>y;
        int c = x-y;
        x = x + (x/10);
        x = x-c;
        cout<<x<<endl;
    }
}
