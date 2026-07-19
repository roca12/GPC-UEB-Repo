/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
#define vi vector<int>
#define ln "\n"
#define MAX 100000001
typedef long long ll;
using namespace std;
vector<bool> arr;

int precalc(ll n){
    ll cnt = 0;
    arr.resize(n+1,true);
   arr[0]=arr[1]=false;
   for(ll p = 2; p*p<=n; p++){
       if(arr[p]){
           for(ll i = p*p; i<=n; i+=p){
               arr[i]=false;
           }
       }
   }
   for(int i = 2; i<=n; i++){
       if(arr[i])cnt++;
   }
   return cnt;
}

int main()
{
    ll n,q; 
    cin>>n>>q;
    cout<<precalc(n)<<ln;
    for(int i = 0,num; i<q; i++){
        cin>>num;
        if(arr[num])cout<<1<<ln;
        else cout<<0<<ln;
    }
    
}
