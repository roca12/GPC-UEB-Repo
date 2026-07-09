#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll solve(vector<int> &w, ll g1, ll g2, int i){
    if(i == w.size()) return llabs(g1-g2);
    ll d1 = solve(w,g1+w[i],g2,i+1);
    ll d2 = solve(w,g1,g2+w[i],i+1);
    return min(d1,d2);
}

int main(){
    int n;
    cin>>n;
    vector<int> w(n);
    for(int &w: w) cin>>w;
    cout<<solve(w,0,0,0);
}