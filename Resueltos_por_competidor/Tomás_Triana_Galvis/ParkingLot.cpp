#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Parking Lot
 * Juez online: Codeforces 630I
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/630/I
 **/ 
ll binexp(ll a,ll b){
    ll res =1;
    while(b>0){
        if(b&1){
            res=res*a;
        }
        a=a*a;
        b>>=1;
    }
    return res;

}

int main(){
    ll n;
    cin>>n;
    cout<<binexp(4,n-2)*3*2+3*3*binexp(4,n-3)*(n-3);

    return 0;
}
