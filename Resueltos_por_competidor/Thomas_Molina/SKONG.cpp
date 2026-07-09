#include <bits/stdc++.h>
using namespace std;
/*
 * Autor: Thomas Molina
 * Problema: SKONG
 * Juez online: Codechef
 * Veredicto: Accepted
 * URL: https://www.codechef.com/problems/SKONG
 */
int main() {
	int X,H,R;
	cin>>X>>H;
	while(X!=4){
	    R++;
	    X=X-1;
	}
	R = R*24;
	R = R+H;
	cout<<R;

}
