/*
 * Autor: Gabriella Castro
 * Problema: Calculating Function
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/486/problem/A
 */


#include<bits/stdc++.h>
#include<cstdlib>

using namespace std;

typedef long long ll;

ll res = 0;

void hola(ll num){
if(num%2 == 0){
    res = num/2;
}else if(num%2==1){
    res = -(num+1)/2;
}
}




int main()
{
    ll num;
    cin>>num;
    hola(num);
    cout<<res<<endl;

}
