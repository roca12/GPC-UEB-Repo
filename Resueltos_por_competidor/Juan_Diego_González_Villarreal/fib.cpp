/*
 * Autor: Juan Diego González Villarreal
 * Problema: Fibonacci sum
 * Juez online: SPOJ
 * Veredicto: Accepted
 * URL:https://vjudge.net/problem/SPOJ-FIBOSUM/origin
 */
 #include<bits/stdc++.h>
 typedef long long ll;
 using namespace std;
 int main(){
 	int t;
 	cin>>t;
 	vector<ll> fibSum(1000000001,0)
 	fibSum[0]=0;
 	fibSum[1]=1;
 	while(t--){
 		ll n,m;
 		cin>>n>>m;
 		ll ans=0, f1=0,f2=1,f3;
 		if(fibSum[m]){
 			
 		}
 		if(n<2)ans++;
 		for(ll i = 2; i<=m;i++){
 			f3 = f2 + f1;
 			f1 = f2;
 			f2 = f3;
 			if(i>=n) ans+=f3;
 		}
 		cout<<ans<<endl;
 	}
 }