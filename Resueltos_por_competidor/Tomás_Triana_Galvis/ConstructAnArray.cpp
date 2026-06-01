#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Construct an Array
 * Juez online: Codeforces2331A
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2231/problem/A
 **/ 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i = 1;i<=n;i++){
            cout<<i*2-1<<" ";
        }
        cout<<endl;
    }
    return 0;
}


