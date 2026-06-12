/*
 * Autor: Juan Diego González Villarreal
 * Problema: Trailling Zeros
 * Juez online: CSES
 * Veredicto: Accepted
 * URL:https:https://cses.fi/problemset/task/1618
 */
 #include<bits/stdc++.h>
 typedef long long ll;
 typedef long double ld;
 #define DBG(X) cerr<<#X<<": "<<(X)<<endl
 using namespace std;

 
 int main(){
 	ll n;
 	cin>>n;
 	ll div = 5ll, cnt = 0;
 	while(n/div){
 		cnt+=n/div;
 		div*=5;
 	}
 	cout<<cnt<<"\n";
 }