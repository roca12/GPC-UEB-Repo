/*
 * Autor: Juan Diego González Villarreal
 * Problema: Permutations
 * Juez online: CSES
 * Veredicto: Accepted
 * URL:https://cses.fi/problemset/task/1070
 */
 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 	int n;
 	scanf("%d",&n);
 	if(n<4 && n>1) printf("NO SOLUTION");
 	else{
 		for(int i = 2; i<=n; i+=2) printf("%d ", i);
 		for(int i = 1; i<=n; i+=2) printf("%d ", i);
 	}
 }