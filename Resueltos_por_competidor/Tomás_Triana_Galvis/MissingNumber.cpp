#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Missing Number
 * Juez online: Kattis missingnumber
 * Veredicto: Accepted
 * Url: https://open.kattis.com/problems/missingnumber
 **/ 
int main()
{
    ll cont = 1;
    string a,b;
    ll n;
    cin>>n;
    cin>>a;
    ll ans =-1;
    bool flag =false;
    for(int i=0;i<9;i++){
        b =a[i];
        if(b!=to_string(cont)){
            ans = cont;
            flag = true;
            break;
        }
        cont++;
    }

    for(int i=9;i<a.size();i+=2){
        b="";
        b+= a[i];
        b+=a[i+1];
        if(b!=to_string(cont)&&!flag){
            ans = cont;
            flag = true;
            break;
        }
        cont++;
    }
    if(ans==-1){
        ans = n;
    }
    cout<<ans<<"\n";
    return 0;
}
