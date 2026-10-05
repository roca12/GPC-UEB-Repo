#include <bits/stdc++.h>
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Min Max Game
 * Juez online: Codeforces 2263A
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2263/problem/A
 **/

int main()
{
    int t,n,cuenta1,cuenta0,a;
    cin>>t;
    while(t--){
        cuenta0=0,cuenta1=0;
        cin>>n;
        while(n--){
            cin>>a;
            if(a==0){
                cuenta0++;
            }else{
                cuenta1++;
            }
        }
        if(cuenta1>=cuenta0){
            cout<<"Bessie\n";
        }else{
            cout<<"Elsie\n";
        }
    }

    return 0;
}
