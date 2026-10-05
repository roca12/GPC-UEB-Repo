#include <bits/stdc++.h>
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Bit++
 * Juez online: Codeforces 282A
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/282/problem/A
 **/

int main()
{
    int n,ans=0;
    string a;
    cin>>n;
    while(n--){
        cin>>a;
        if(a[1] =='+'){
           ans++;
        }else{
            ans--;
        }
    }
    cout<<ans<<"\n";

    return 0;
}
