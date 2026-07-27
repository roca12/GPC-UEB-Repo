#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Leading and Trailling
 * Juez online: UVA 11029
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1970
 **/ 
ll binexp(ll a,ll b, ll m){
    a%=m;
    ll res =1;
    while(b>0){
        if(b&1){
            res=res*a%m;
        }
        a=a*a%m;
        b>>=1;
    }
    return res;

}

int main(){
    ll t,a,b;
    double ex;
    cin>>t;
    while(t--){
        cin>>a>>b;
        ex = b*log10(a);
        ex-=floor(ex)-2;
        ex = pow(10,ex);
        cout<<(ll)ex+1e-9<<"..."<<setw(3) << setfill('0')<<binexp(a,b,1000)<<"\n";
    }

    return 0;
}
