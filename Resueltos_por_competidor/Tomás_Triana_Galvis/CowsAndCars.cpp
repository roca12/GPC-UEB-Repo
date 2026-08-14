#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Cows and Cars
 * Juez online: UVA 10491
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1432
 **/ 
int main()
{
    double a,b,c,x,y,ans;
    while(cin>>a>>b>>c){
        x= a+b;
        y=(a+b)-(c+1);
        ans =(a/x)*(b/y)+((b-1)/y)*(b/x);
        printf("%.5f\n",ans);
    }



}
