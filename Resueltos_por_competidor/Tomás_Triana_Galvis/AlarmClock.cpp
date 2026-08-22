#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Alarm Clock
 * Juez online: UVA11677
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2724
 **/

int main(){
    int h1,m1,h2,m2,hs,ms;
    cin>>h1>>m1>>h2>>m2;
    while(true){
        if(h1==0 && h2==0 && m1==0 && m2==0){
            break;
        }
        ms = (m2-m1+60)%60;
        if(m1+ms>=60){
            h1++;
        }
        hs = (h2-h1+24)%24;
        cout<<(hs*60)+ms<<"\n";
        cin>>h1>>m1>>h2>>m2;
    }

    return 0;
}
