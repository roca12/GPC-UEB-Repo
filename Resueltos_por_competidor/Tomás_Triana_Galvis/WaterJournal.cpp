#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Water Journal
 * Juez online: Kattis waterjournal
 * Veredicto: Accepted
 * Url: https://open.kattis.com/problems/waterjournal
 **/
int main()
{
    ll n,mn,mx;
    cin>>n>>mn>>mx;
    ll ans,a;
    bool flagmn =false,flagmx=false;
    for(int i=0;i<n-1;i++){
        cin>>a;
        if(a==mn){
            flagmn = true;
        }
        if(a==mx){
            flagmx = true;
        }
    }
    if(!flagmn && flagmx){
        cout<<mn<<"\n";
    }else if(!flagmx && flagmn){
        cout<<mx<<"\n";
    }else if(flagmn && flagmx){
        for(int i=mn;i<=mx;i++){
            cout<<i<<"\n";
        }
    }else if(!flagmn && !flagmx){
        cout<<-1<<"\n";
    }

    return 0;
}
