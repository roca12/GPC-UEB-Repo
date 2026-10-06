#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Water Journal
 * Juez online: UVA 12643 
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4391
 **/


int main()
{

    ll n,i,j,num,ans;
    while(cin>>n>>i>>j){
        if(i>j){
            swap(i,j);
        }
        num = pow(2,n);
        ans = n;
        while((i>(num/2) && j>(num/2)) ||(i<=(num/2) && j<=(num/2))){
            ans--;
            num/=2;
            i = (i - 1) % num + 1;
            j = (j - 1) % num + 1;
        }
        cout<<ans<<"\n";
    }


    return 0;
}
