/*
 * Autor: Juan Diego González Villarreal
 * Problema: Increasing Array
 * Juez online: CSES
 * Veredicto: Accepted
 * URL:https://cses.fi/problemset/task/1069
 */
 #include<bits/stdc++.h>
 typedef long long ll;
 using namespace std;
 
 int main(){
 	int n;
 	scanf("%d", &n);
 	vector <int> v(n);
 	for(int &x: v)scanf("%d", &x);
 	ll cnt = 0;
 	for(int i = 1; i<n;i++){
 		if(v[i]<v[i-1])cnt+=v[i-1]-v[i], v[i]=v[i-1];
 	}
 	printf("%lld", cnt);
 }