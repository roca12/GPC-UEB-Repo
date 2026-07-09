#include <bits/stdc++.h>
using namespace std;
/*
 * Autor: Thomas Molina
 * Problema: EXGS
 * Juez online: Codechef
 * Veredicto: Accepted
 * URL: https://www.codechef.com/problems/EXGS
 */
int main() {
	// your code goes here
	int X;
	cin>>X;
	int Y;
	cin>>Y;
	int f = X*100;
	int V = Y-X;
	int f2 = V*150;
	int CT = f+f2;
	cout<<CT;
}
