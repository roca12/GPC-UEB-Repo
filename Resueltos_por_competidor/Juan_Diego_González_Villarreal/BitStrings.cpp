/*
 * Autor: Juan Diego González Villarreal
 * Problema: BitStrings
 * Juez online: CSES
 * Veredicto: Accepted
 * URL:https:https://cses.fi/problemset/task/1093
 */
 #include<bits/stdc++.h>
 typedef long long ll;
 using namespace std;
 ll MOD = 1000000007LL;
 
 int main(){
 	ll n;
 	cin>>n;
 	ll ans = 1;
 	for(int i = 1; i<=n;i++){
 		ans = ((ans%MOD)*(2%MOD))%MOD;
 	}
 	cout<<ans;
 }