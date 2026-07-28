#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Bigrams
 * Juez online: Codeforces 2242A
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2242/A
 **/ 
int main(){
    ll t,n,cuenta2,a;
    bool ans;
    cin>>t;
    while(t--){
        ans = false;
        cuenta2=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a>=3){
                ans =true;
            }
            if(a==2){
                cuenta2++;
            }
        }
        if(cuenta2>=2){
            ans =true;
        }
        if(ans){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}
