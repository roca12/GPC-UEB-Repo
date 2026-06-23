#include <iostream>

using namespace std;
/*
	 * Autor: mariana 
	 * Problema : Soldier and Bananas 
	 * Juez online: codeforces
	 * Veredicto: Accepted 
	 * URL: https://codeforces.com/contest/546/problem/A
	 */
int main() {
    int n;
    int k;
    int w;
    int total=0;
    cin>>k;
    cin>>n;
    cin>>w;
    total = k * ((w)*(w+1)/2);
    if(total-n<0){
        cout<<0;
    }else{
    cout<<total-n;
    }
    }
