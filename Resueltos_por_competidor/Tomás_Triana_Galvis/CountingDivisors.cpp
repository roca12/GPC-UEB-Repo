#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

/*
 * Autor: Tomás Triana Galvis
 * Problema: Counting Divisors
 * Juez online: CSES1713
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1713/
 **/ 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,n;
    vector<int> ans(1000000);
    for(int i = 1;i<=1000000;i++){
        for(int j = i; j<=1000000;j+=i){
            ans[j]++;
        }
    }
    cin>>t;
    while(t--){
        cin>>n;
        cout<<ans[n]<<endl;
    }
    return 0;
}
