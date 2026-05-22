/*
 * Autor: Juan Diego González Villarreal
 * Problema: Number Spiral
 * Juez online: CSES
 * Veredicto: Accepted
 * URL:https://cses.fi/problemset/task/1071
 */
 #include<bits/stdc++.h>
 typedef long long ll;
 using namespace std;
 int main(){
 	int t;
 	scanf("%d", &t);
 	while(t--){
 		ll x,y;
 	scanf("%lld", &y);
 	scanf("%lld", &x);
 	ll lyr = max(x,y);
 	ll large = lyr*lyr;
 	ll mid = lyr*lyr-lyr+1;
 	ll small = lyr*lyr -2*lyr+2;
 	if(x==y) printf("%lld\n", mid);
 	else if(x==1 && lyr%2==0){
 		printf("%lld\n", large);
 	}else if(x==1 && lyr%2!=0){
 		printf("%lld\n", small);
 	}else if(y==1 && lyr%2==0){
 		printf("%lld\n", small);
 	}else if(y==1 && lyr%2!=0){
 		printf("%lld\n", large);
 	}else if(x<y && lyr%2==0){
 		printf("%lld\n", large-x+1);
 	}else if(x<y && lyr%2!=0){
 		printf("%lld\n", small+x-1);
 	}else if(y<x && lyr%2==0){
 		printf("%lld\n", small+y-1);
 	}else{
 		printf("%lld\n", large-y+1);
 	}
 	
 	}
 }