#include <bits/stdc++.h>
using namespace std;
/*
 * Autor: Thomas Molina
 * Problema: POINTCAL
 * Juez online: Codechef
 * Veredicto: Accepted
 * URL: https://www.codechef.com/problems/POINTCAL
 */
int main() {
	// your code goes here
	int A,B,C,P;
	cin>>A>>B>>C;
	if (A>0){
	    P = A*3;
	}
	
	if (B>0){
	    P = P+(B*1);
	}
	cout<<P;
}
