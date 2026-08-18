#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: A Multiplication Game
 * Juez online: UVA847
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=788
 **/

int main(){
    double n;
    ll ans;
    while(cin>>n){
        ans=0;
        while(n>1){
            if(ans%2==0){
                n=ceil(n/9);
            }else{
                n=ceil(n/2);
            }
            ans++;
        }
        if(ans%2==0){
            cout<<"Ollie wins.\n";
        }else{
            cout<<"Stan wins.\n";
        }
    }

    return 0;
}
