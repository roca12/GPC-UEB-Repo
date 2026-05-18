/*
 * Autor: Juan Diego González Villarreal
 * Problema: WeirdAlgorithm
 * Juez online: CSES
 * Veredicto: Accepted
 * URL:https://cses.fi/problemset/task/1068
 */
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ll n;
	cin>>n;
	while(n!=1){
		cout<<n<<" ";
		n=(n%2==0)? n/2: (3*n)+1;
	}
	cout<<1;
}