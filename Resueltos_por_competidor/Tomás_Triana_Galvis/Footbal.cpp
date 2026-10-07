#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Football
 * Juez online: Codeforces 96A
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/96/A
 **/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a;
    cin>>a;
    int cuenta =1;
    bool ans =false;
    for(int i=1;i<a.size();i++){
        if(a[i]==a[i-1]){
            cuenta++;
        }else{
            cuenta = 1;
        }
        if(cuenta > 6){
            ans = true;
            break;
        }

    }

    if(ans){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}
