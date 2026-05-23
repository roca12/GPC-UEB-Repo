#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int MAXMEMO = 1000000;
ll mem [MAXMEMO+1];
ll dp(ll n){
  if(!n)return 0;
  if(n<=MAXMEMO && mem[n]){
    return mem[n];
  }
  ll igual = n;
  ll cambio = dp(n/2)+dp(n/3)+dp(n/4);
  ll m = max(igual, cambio);
  if(n<=MAXMEMO) mem[n]=m;
  return m;
}
int main(){
  ll n;
  while(cin>>n){
    cout<<dp(n)<<endl;
  }
}