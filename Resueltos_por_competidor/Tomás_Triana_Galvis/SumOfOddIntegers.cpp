#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Sum of Odd Integers
 * Juez online: Codeforces 1327A
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1327/A
 **/ 
int main(){
    ll n,k,t;
    bool ans = false;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ans =false;
        if(n%2==0 && k%2==0){
            if(k*k<=n){
                ans =true;
            }
        }else if(n%2==1 && k%2==1){
            if(k*k<=n){
                ans =true;
            }
            if(k==1){
                ans =true;
            }
        }
        if(ans){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }


    return 0;
}
