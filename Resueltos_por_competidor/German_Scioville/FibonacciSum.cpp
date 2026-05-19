/*
 * Autor: Scioville
 * Problema: Antimedian Deletion (https://www.spoj.com/problems/FIBOSUM/)
 * Juez online: SPOJ
 * Veredicto: accepted  
 * happy thoughts,happy thoughts,happy thoughts,happy thoughts,happy thoughts,happy thoughts,happy thoughts,happy thoughts
 * */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
static ll t,a,b,sum,x,y;

void multiply( ll F[][2],ll M[][2]){

ll x = (F[0][0] * M[0][0]+F[0][1] * M[1][0])%1000000007;
ll y = (F[0][0] * M[0][1]+F[0][1] * M[1][1])%1000000007;
ll z = (F[1][0] * M[0][0]+F[1][1] * M[1][0])%1000000007;
ll w = (F[1][0] * M[0][1]+F[1][1] * M[1][1])%1000000007;


F[0][0] = x;
F[0][1] = y;
F[1][0] = z;
F[1][1] = w;
}

void power(ll F[][2],ll n){
if(n==0||n==1){
    return;
}
ll M[][2]= {
{1,1},{1,0}};
power(F,n/2);
multiply(F,F);

if(n%2 !=0){
    multiply(F,M);
}
}

ll fib(ll n){

ll F[][2]{
{1,1},{1,0}};
if(n==0){
    return 0;

}
power(F,n-1);
return F[0][0];

}

int main()
{
cin>>t;


for(ll i = 0 ; i<t;i++){
    sum = 0;

    cin>>a>>b;

    x = (fib(b+2)-1+1000000007)%1000000007;
    y = (fib(a+1)-1+1000000007)%1000000007;
    sum = (x-y+1000000007)%1000000007;
    cout<<sum<<endl;
}

}