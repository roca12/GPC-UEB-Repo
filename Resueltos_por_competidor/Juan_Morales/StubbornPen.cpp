/*
 * Autor: OtherSpanish
 * Problema: Stubborn Pen
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/2290/problem/B
 */

#include <bits/stdc++.h>
typedef double d;
using namespace std;
int main() {
 
    int tc;
    cin>>tc;
 
    while(tc--){
        int len;
        cin>>len;
        string str;
        cin>>str;
        int switches = 0;
        if(str[0]=='B') switches++;
 
        for(int i = 1; i<len; i++){
            if(str[i-1]==str[i]) switches++;
        }
 
        cout<<switches<<"\n";
 
    }
}
