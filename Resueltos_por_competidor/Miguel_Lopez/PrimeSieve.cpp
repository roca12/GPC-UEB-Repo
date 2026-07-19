/*
 * Autor: Miguel Lopez
 * Problema: Prime Sieve
 * Juez online: Kattis
 * Veredicto: Accepted
 * Url: https://open.kattis.com/problems/primesieve
 */

// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int cont = 0;
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
int main() {
	int a,b; cin >> a >> b;
    int n;
    cout << precalc(a) << endl;
    while(b--) {
        cin >> n;
        cout<<arr[n]<<endl;
    }
}
