/*
 * Autor: Jorge Nuñez
 * Problema: The Best Card
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2253/A
 */
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x){
if(x<2){
    return false;
}
for(int i = 2;i*i<=x;i++){
    if(x%i==0){
        return false;
    }
}
return true;
}
int main(){
    int c;
    cin>>c;
    for(int i = 0;i<c;i++){
        int j;
        cin>>j;
        if (isPrime(j+1)) {
        cout <<"YES"<< endl;
    } else {
        cout <<"NO"<< endl;
    }
    }
    return 0;
}
