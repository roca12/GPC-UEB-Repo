#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Fibonacci Sum
 * Juez online: SPOJFIBOSUM
 * Veredicto: Accepted
 * Url: https://www.spoj.com/problems/FIBOSUM/en/
 **/ 
const ll MD = 1000000007LL;
struct m22{
    ll matriz[2][2];
};

const m22 I = {{{1,0},{0,1}}};

struct m21{
    ll matriz[2];
};

m21 multM(m22 mat1, m21 mat2){
    m21 res ={{(mat1.matriz[0][0]*mat2.matriz[0]+mat1.matriz[0][1]*mat2.matriz[1])%MD, (mat1.matriz[1][0]*mat2.matriz[0]+mat1.matriz[1][1]*mat2.matriz[1])%MD}};
    return res;
}

m22 multM2(m22 mat1, m22 mat2){
    m22 res = {{{0,0},{0,0}}};
    res.matriz[0][0] = (mat1.matriz[0][0]*mat2.matriz[0][0]+mat1.matriz[0][1]*mat2.matriz[1][0])%MD;
    res.matriz[0][1] = (mat1.matriz[0][0]*mat2.matriz[0][1]+mat1.matriz[0][1]*mat2.matriz[1][1])%MD;
    res.matriz[1][0] = (mat1.matriz[1][0]*mat2.matriz[0][0]+mat1.matriz[1][1]*mat2.matriz[1][0])%MD;
    res.matriz[1][1] = (mat1.matriz[1][0]*mat2.matriz[0][1]+mat1.matriz[1][1]*mat2.matriz[1][1])%MD;
    return res;
}

m22 potRec(m22 m,ll n){
    m22 temp;
    if(n==0){
        return I;
    }
    if(n&1){
        temp = potRec(m,(n-1)/2);
        return multM2(multM2(temp,temp),m);

    }else{
        temp = potRec(m,n/2);
        return multM2(temp,temp);
    }

}

ll fib(ll n){
    m22 b = {{{1,1},{1,0}}};
    m21 c = {{1,0}};
    m22 p = potRec(b,n);
    m21 a = multM(p,c);
    return a.matriz[1];
}

int main()
{
    ll t,m,n,res;
    cin>>t;
    while(t--){
        cin>>n>>m;
        res = (fib(m+2)-fib(n+1)+MD)%MD;
        cout<<res<<endl;
    }

    return 0;
}
