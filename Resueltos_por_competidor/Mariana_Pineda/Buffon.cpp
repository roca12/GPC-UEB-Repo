#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
	 * Autor: mariana
	 * Problema : B-Buffon
	 * Juez online: codeforces
	 * Veredicto: Accepted
	 * URL: https://codeforces.com/gym/102346/problem/B
	 */
int main()
{
    int  n;
    cin>>n;
    vector<int> votos(n);
    for(int i = 0; i<n; i++){
        cin>>votos[i];
    }
    int aux= votos[0];
    sort(votos.begin(), votos.end());
    if(aux==votos[n-1]){
        cout<<"S"<<endl;
    }else{
        cout<<"N"<<endl;
    }
}
