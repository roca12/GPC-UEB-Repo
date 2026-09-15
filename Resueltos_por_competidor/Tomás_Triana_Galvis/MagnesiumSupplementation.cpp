#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Magnesium Supplementation
 * Juez online: Kattis magnesiumsupplementation
 * Veredicto: Accepted
 * Url: https://open.kattis.com/problems/magnesiumsupplementation
 **/
int main()
{
    ll n,k,p;
    cin>>n>>k>>p;
    vector<ll> div,ans;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            div.push_back(i);
            if(n/i!=i){
                div.push_back(n/i);
            }
        }
    }
    for(int i=0;i<div.size();i++){
        if(n/div[i]>p){
            continue;
        }
        if(div[i]>k){
            continue;
        }
        ans.push_back(div[i]);
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<"\n";
    for(auto in:ans){
        cout<<in<<"\n"  ;
    }
    return 0;
    }
