#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Weird Algorithm
 * Juez online: CSES1068
 * Veredicto: Accepted
 * Url: https://cses.fi/problemset/task/1068/
 **/ 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0){
            n/=2;
            cout<<n<<" ";
        }else{
            n = 3*n+1;
            cout<<n<<" ";
        }
    }

    return 0;
}


