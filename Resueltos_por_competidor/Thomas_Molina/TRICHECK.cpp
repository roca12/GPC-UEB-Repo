#include <bits/stdc++.h>
using namespace std;
/*
 * Autor: Thomas Molina
 * Problema: TRICHECK
 * Juez online: Codechef
 * Veredicto: Accepted
 * URL: https://www.codechef.com/problems/TRICHECK
 */

int main() {
	int A;
	cin>>A;
	int B;
	cin>>B;
	int C;
	cin>>C;
	if (A+B>C&&B+C>A&&A+C>B){
	    cout<<"YES";
	}
	else{
	    cout<<"NO";
	}
}
