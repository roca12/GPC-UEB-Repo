/*
 * Autor: OtherSpanish
 * Problema: Three Piles
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/2290/problem/A
 */

#include <bits/stdc++.h>
typedef double d;
using namespace std;
int main() {
 
    int tc;
    cin>>tc;
 
    while(tc--){
        vector<int> pdr(3);
        for(int i = 0; i<3; i++){
            cin>>pdr[i];
        }
 
        sort(pdr.begin(), pdr.end());
 
        if(pdr[0]+1==pdr[1] && pdr[1]==pdr[2]-1) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
 
    }
}
