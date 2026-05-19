/*
 * Autor: Juan Diego Gonzalez Villarreal
 * Problema: The Cat in The Hat 
 * Juez online: OpenJ Bailian
 * Veredicto: Accepted
 * URL:https://vjudge.net/problem/OpenJ_Bailian-1289/origin
 */
 #define<bits/stdc++.h>
 typedef long long ll;
 using namespace std;
 
 ll fastPow(ll a, ll n){
 	ll tmp;
 	if(n==0) return 1;
 	if(n%2==0) tmp = fastPow(a,n/2);
 	else tmp = fastPow(a,(n-1)/2);
 	return tmp*tmp;
 }
 
 vector<ll> divisores(ll n){
 	vector<ll>  d;
 	for(ll i = 0; i*i<=n;i++){
 		if(n%i==0){
 			d.push_back(i);
 			if(i!=n/i) d.push_back(n/i);
 		}
 	}
 	return d;
 }
 
 int main(){
 	ll h,w;
 	while(cin>>h>>w){
 		if(h==0 && w==0) break;
 		ll divs = divisores(w);
 		for(ll &cdte:divs){
 			ll tmp = w;
 			bool flag = false;
 			while(true){
 				if(tmp==1){
 					flag=true;
 					break;
 				}
 				if(tmp%cdte!=) break;
 				else{
 					
 				}
 			}
 		}
 	}
 }