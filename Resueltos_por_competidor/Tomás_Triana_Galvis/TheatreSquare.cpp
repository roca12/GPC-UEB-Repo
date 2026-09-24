#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
 /*
 * Autor: Tomás Triana Galvis
 * Problema: Theatre Square
 * Juez online: Codeforces 1A
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1/A
 **/ 
int main(){
    double a,b,c;
    cin>>a>>b>>c;
    ll ans = ceil(a/c)*ceil(b/c);
    cout<<ans<<"\n";
 
 
    return 0;
}
