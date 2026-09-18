/* 
Codeforces 381A - Sereja and Dima
https://codeforces.com/problemset/problem/381/A
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int* n = new (std::nothrow) int[t];
	
	for(int i = 0; i<t; i++){
	    cin>>n[i];
	}
	
	int izq = 0, der = t-1;
	int s = 0, d = 0;
	bool turnoSereja = true;
	
	while(izq <= der){
	    int g;
	    
	    if(n[izq] > n[der]){
	        g = n[izq];
	        izq++;
	    }else{
	        g = n[der];
	        der--;
	    }
	    
	    if(turnoSereja){
	        s += g;
	    }else{
	        d += g;
	    }
	    turnoSereja = !turnoSereja;
	}
	cout<<s<<" "<<d<<endl;
	return 0;
}
