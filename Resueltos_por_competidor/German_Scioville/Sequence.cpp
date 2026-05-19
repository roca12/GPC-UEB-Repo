/*
 * Autor: Scioville
 * Problema: Fractional Sequence (https://open.kattis.com/problems/fractionalsequence)
 * Juez online: Katiis
 * Veredicto: accepted  
 * But a poem is never actually finished.It just stops moving.
 * */
#include <bit
#include <bits/stdc++.h>
using namespace std;
long long GCD(long long a, long long b) {
    return b == 0 ? a : GCD(b, a % b);
}

int main() {
   long long n;
   cin>>n;
  long long izquierda,derecha,aux,a,b;
   izquierda = 0;
   derecha= 120000;
   aux = 120000;
   while(izquierda<=derecha){
    long long  medio = izquierda +(derecha - izquierda)/2;
    long long secuencia =  (medio*(medio+1)/2);
    if(secuencia >= n){
        aux = medio;
        derecha = medio -1;
    }else{
        izquierda = medio +1;
    }
   }

   a = (n-((aux*(aux-1))/2))-1;
   b = aux;
    long long mcd;
    mcd = GCD(a,b);
   if(a == 0){
    cout<<aux<<endl;
   }else if(a >0){
   cout<<aux<<" "<<a/mcd<<"/"<<b/mcd<<endl;
   }
}
