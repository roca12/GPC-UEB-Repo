#include <bits/stdc++.h>
using namespace std;
/*
 * Autor: Thomas Molina
 * Problema: A.Plus or Minus
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/1807/problem/A
 */
int main() {
    int t;
    cin>>t;
    for (int i = 0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if (a+b==c){
            cout<<"+\n";
            
        }
        else if(a-b==c){
            cout<<"-\n";
            
        }
    }
}
