#include<bits/stdc++.h>
#define MAX 1000001
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Aliquot Sum
 * Juez online: Codeforces103373B
 * Veredicto: Accepted
 * Url: https://codeforces.com/gym/103373/problem/B
 **/ 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,a;
    vector<ll> ans(MAX);
    for(int i = 1;i<MAX;i++){
        for(int j = i;j<MAX;j+=i){
            ans[j]+=i;
        }
    }
    cin>>t;
    while(t--){
        cin>>a;
        if(ans[a]-a<a){
            cout<<"deficient\n";
        }else if(ans[a]-a>a){
            cout<<"abundant\n";
        }else{
            cout<<"perfect\n";
        }
    }
    return 0;
}




